/* verilator lint_off DECLFILENAME */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNUSEDPARAM */

/* verilator lint_off UNDRIVEN */

// Nosso processador 
module franken_riscv( input  		    sig_clk, sig_reset,
                      output reg [31:0] pc_data,
                      input		 [31:0] instruction_data,
                      output reg	    sig_mem_write_Mem, sig_mem_read_Mem,
			          output reg [3: 0] byte_enable_data,
                      output  	 [31:0] alu_result_Mem_data, 
			          output reg [31:0] write_data_MEM,
                      input  	 [31:0] read_data,
					  output reg 		sig_reg_write_WB, // Register Bank 
					  output	 [4:0]  RS1_data, RS2_data, 
					  output reg [4:0]  RD_WB_data,
					  output 	 [31:0] write_reg_WB_data,
					  input 	 [31:0] src1_Dec_data, src2_Dec_data,
					  input 			rbusy);

	// Variáveis
		
		// reg Exec 
		reg is_conditional_jump_Exec, sig_mem_write_Exec, sig_reg_write_Exec, sig_reg_write_Mem, sig_mem_read_Exec;
		reg [4:0] RD_Exec_data;
		reg [31:0] src2_Exec, alu_result_Exec; //alu_result_Exec, jump_add_Exec
	
	//------------------------------------------------- FETCH ------------------------------------------------- //

	initial begin
		pc_data = 32'h00400000;
	end
	
	// Atualiza nosso valor de PC
	wire [31:0] next_pc = sig_reset 				? 32'h00400000:
						  is_conditional_jump_Dec	? jump_add_Exec: // Flush: Force pc to stay in instruction
						  pc_data + 32'd4;			// In case of stall, pc to stay in intruction 

	// current_state == FETCH
	always @(posedge sig_clk)
		if (!rbusy && !stall)
    		pc_data <= next_pc;

	//------------------------------------------------- DECODE -------------------------------------------------//
	
	reg [6:0] funct7_, opcode;
	reg [4:0] rd_, rs1, rs2;
	reg [2:0] funct3_;
	reg [31:0] imm, pc_dec;
	reg[1:0] Fwd_A, Fwd_B;
	reg stall;

	always @(negedge sig_clk)
	begin

		// Recebe os valores que sao passados na instruçao
		opcode <= instruction_data[6:0];

		rd_ <= instruction_data[11:7];

		funct3_ <= instruction_data[14:12];

		rs1 <= instruction_data[19:15];

		rs2 <= instruction_data[24:20];

		funct7_ <= instruction_data[31:25];

		imm <=	(instruction_data[6:0] == 7'b1100111 | instruction_data[6:0] == 7'b0000011 | instruction_data[6:0] == 7'b0010011) ? ({{20{instruction_data[31]}},instruction_data[31:20]}):
				(instruction_data[6:0] == 7'b0100011) ? ({{20{instruction_data[31]}},instruction_data[31:25],instruction_data[11:7]}):		
				(instruction_data[6:0] == 7'b1100011) ? ({{19{instruction_data[31]}},instruction_data[31],instruction_data[7],instruction_data[30:25],instruction_data[11:8],1'b0}):
				(instruction_data[6:0] == 7'b0110111 | instruction_data[6:0] == 7'b0010111) ? ({instruction_data[31], instruction_data[30:12],12'b0}):
				(instruction_data[6:0] == 7'b1101111) ? ({{11{instruction_data[31]}}, instruction_data[31],instruction_data[19:12],instruction_data[20],instruction_data[30:21],1'b0}):
			   	32'b0;

		pc_dec <= pc_data;

		// ------------- Forwarding ------------- //
		if(sig_reg_write_Exec && (RD_Exec_data == instruction_data[19:15] && instruction_data[19:15] != 5'b0))
			Fwd_A <= 2'b10;
		else if(sig_reg_write_WB && (RD_Mem == instruction_data[19:15] && instruction_data[19:15] != 5'b0))
			Fwd_A <= 2'b01;
		else
			Fwd_A <= 2'b00;

		if(sig_reg_write_Exec && (RD_Exec_data == instruction_data[24:20] && instruction_data[24:20] != 5'b0))
			Fwd_B <= 2'b10;
		else if(sig_reg_write_WB && (RD_Mem == instruction_data[24:20] && instruction_data[24:20] != 5'b0))
			Fwd_B <= 2'b01;
		else
			Fwd_B <= 2'b00;

		// ------------- Hazard Detection ------------- //
		if(((sig_mem_read_Exec && !stall && RD_Exec_data != 5'b00000)) || rbusy || sig_reset)
			stall <= 1;
		else
			stall <= 0;
	end
	
	//Instruction Type 

	// R-Type 
	wire R_type  = (opcode == 7'b0110011);
	wire is_add  = (R_type & funct3 == 3'b000 & funct7 == 7'b0000000);
	wire is_sub	 = (R_type & funct3 == 3'b000 & funct7 == 7'b0100000);
	wire is_xor	 = (R_type & funct3 == 3'b100 & funct7 == 7'b0000000);
	wire is_or 	 = (R_type & funct3 == 3'b110 & funct7 == 7'b0000000);
	wire is_and  = (R_type & funct3 == 3'b111 & funct7 == 7'b0000000);
	wire is_sltu = (R_type & funct3 == 3'b011 & funct7 == 7'b0000000);
	wire is_sll  = (R_type & funct3 == 3'b001 & funct7 == 7'b0000000);
	wire is_slt	 = (R_type & funct3 == 3'b010 & funct7 == 7'b0000000);
	wire is_srl  = (R_type & funct3 == 3'b101 & funct7 == 7'b0000000);
	wire is_sra  = (R_type & funct3 == 3'b101 & funct7 == 7'b0100000);
	
	// R-Type - Multiply
	wire is_mul    = (R_type && funct3 == 3'b000 & funct7 == 7'b0000001);
	wire is_mulh   = (R_type && funct3 == 3'b001 & funct7 == 7'b0000001);
	wire is_mulhsu = (R_type && funct3 == 3'b010 & funct7 == 7'b0000001);
	wire is_mulhu  = (R_type && funct3 == 3'b011 & funct7 == 7'b0000001);
	wire is_div    = (R_type && funct3 == 3'b100 & funct7 == 7'b0000001);
	wire is_divu   = (R_type && funct3 == 3'b101 & funct7 == 7'b0000001);
	wire is_rem    = (R_type && funct3 == 3'b110 & funct7 == 7'b0000001);
	wire is_remu   = (R_type && funct3 == 3'b111 & funct7 == 7'b0000001);

	// I-Type
	wire I_type   = (opcode == 7'b1100111 || opcode == 7'b0000011 || opcode == 7'b0010011);
	wire is_jalr  = (funct3 == 3'b000 & opcode == 7'b1100111);
	wire is_lb    = (funct3 == 3'b000 & opcode == 7'b0000011);
	wire is_lh    = (funct3 == 3'b001 & opcode == 7'b0000011);
	wire is_lw    = (funct3 == 3'b010 & opcode == 7'b0000011);
	wire is_lbu   = (funct3 == 3'b100 & opcode == 7'b0000011);
	wire is_lhu   = (funct3 == 3'b101 & opcode == 7'b0000011);
	wire is_addi  = (funct3 == 3'b000 & opcode == 7'b0010011);
	wire is_slti  = (funct3 == 3'b010 & opcode == 7'b0010011);
	wire is_sltiu = (funct3 == 3'b011 & opcode == 7'b0010011);
	wire is_xori  = (funct3 == 3'b100 & opcode == 7'b0010011);
	wire is_ori   = (funct3 == 3'b110 & opcode == 7'b0010011);
	wire is_andi  = (funct3 == 3'b111 & opcode == 7'b0010011);
	wire is_slli  = (funct3 == 3'b001 & funct7 == 7'b0000000 & opcode == 7'b0010011);
	wire is_srli  = (funct3 == 3'b101 & funct7 == 7'b0000000 & opcode == 7'b0010011);
	wire is_srai  = (funct3 == 3'b101 & funct7 == 7'b0100000 & opcode == 7'b0010011);
	

	// S-Type
	wire S_type = (opcode == 7'b0100011);
	wire is_sw  = (S_type & funct3 == 3'b010);
	wire is_sb  = (S_type & funct3 == 3'b000);
	wire is_sh  = (S_type & funct3 == 3'b001);
	

	// B-Type
	wire B_type  = (opcode == 7'b1100011);
	wire is_bge  = (B_type & funct3 == 3'b101);
	wire is_beq  = (B_type & funct3 == 3'b000);
	wire is_blt  = (B_type & funct3 == 3'b100);
	wire is_bne  = (B_type & funct3 == 3'b001);
	wire is_bltu = (B_type & funct3 == 3'b110);
	wire is_bgeu = (B_type & funct3 == 3'b111);


	// U-Type 
	wire U_type = (opcode == 7'b0110111 | opcode == 7'b0010111);
	wire is_auipc = opcode == 7'b0010111;
	wire is_lui = opcode == 7'b0110111;
	

	// J-Type
	wire J_type = (opcode == 7'b1101111);
	wire is_jal = (J_type);

	// System-Type
	// wire fence  = (opcode == 7'b0001111 & funct3 == 3'b000);
	// wire ecall  = (opcode == 7'b1110011 & funct3 == 3'b000 & instruction[31:25] == 12'b000000000000);
	// wire ebreak = (opcode == 7'b1110011 & funct3 == 3'b000 & instruction[31:25] == 12'b000000000001);
	
	// Decodificaçao das instruçoes e seus respectivos tipos 
	// wire [4:0] RS1;
	assign RS1_data = (R_type | I_type | S_type | B_type | J_type) 	? rs1 : 5'b000000;
	
	// wire [4:0] RS2;
	assign RS2_data = (R_type | S_type | B_type)         	? rs2 : 5'b000000;

	wire [4:0] wire_RD_Dec;
	assign wire_RD_Dec = (R_type | I_type | U_type | J_type) ? rd_ : 5'b000000;
	
	wire [2:0] funct3;
	assign funct3 = (R_type | I_type | S_type | B_type) ? funct3_ : 3'b000;
	
	wire [6:0] funct7;
	assign funct7 = (R_type)                            ? funct7_ : 7'b000000;


	//---------------------------- Controler ---------------------------------------------//

		// -------------- Sianis de Controle Exec -------------- //
		//Condiçao de salto
		wire is_conditional_jump_Dec = (is_beq || is_bne || is_blt || is_bge || is_jal || is_jalr || is_bgeu);


		// -------------- Sinais de Controle Memory -------------- //
		wire sig_wire_mem_write_Dec = S_type;
		wire sig_wire_mem_read_Dec = (is_lb || is_lbu || is_lh || is_lhu || is_lw);

		// -------------- Sinais de Controle WB -------------- //
		wire sig_wire_reg_write_Dec = (R_type || B_type || I_type || U_type) && wire_RD_Dec != 5'b0;

	wire [31:0] src1_forward, src2_forward;

	assign src1_forward =	(Fwd_A == 2'b10) ? (sig_mem_read_Exec ? data_load_MEM : alu_result_Mem_data):
							(Fwd_A == 2'b01) ? write_reg_WB_data:
							src1_Dec_data; 

	assign src2_forward =	(Fwd_B == 2'b10) ? (sig_mem_read_Exec ? data_load_MEM : alu_result_Mem_data):
							(Fwd_B == 2'b01) ? write_reg_WB_data:
							src2_Dec_data; 


	// ----------------------------- Multiply -------------------------------// 
	wire sign1 = src1_Dec_data[31] &  is_mulh;
    wire sign2 = src2_Dec_data[31] & (is_mulh | is_mulhsu);

	wire signed [32:0] src1_sign = {sign1, src1_Dec_data};
   	wire signed [32:0] src2_sign = {sign2, src2_Dec_data};

	wire [63:0] result_mul = src1_sign * src2_sign; // Realiza a operação de multiplicação

				// Caso nossa instruçao seja de JUMP, temos que calcular a nova posiçao para nosso PC.
	wire [31:0] jump_add_Exec =	is_jal 										                  ? pc_dec + $signed(imm):
								is_jalr 									                  ? $signed(src1_forward) + $signed(imm):
								(is_beq  && ($signed(src1_forward) == $signed(src2_forward))) ? pc_dec + $signed(imm):
								(is_bne  && ($signed(src1_forward) != $signed(src2_forward))) ? pc_dec + $signed(imm):
								(is_blt  && ($signed(src1_forward)  < $signed(src2_forward))) ? pc_dec + $signed(imm):
								(is_bltu && (src1_forward  < src2_forward)) 				  ? pc_dec + $signed(imm):
								(is_bge  && ($signed(src1_forward) >= $signed(src2_forward))) ? pc_dec + $signed(imm):
								(is_bgeu && (src1_forward >= src2_forward)) 				  ? pc_dec + $signed(imm):
								pc_dec + 32'd4;

	// current_state == EXEC
	always @(posedge sig_clk)
	begin
		if(!stall)
		begin

			// Exec
			is_conditional_jump_Exec <= is_conditional_jump_Dec;

			//Memory 
			sig_mem_write_Exec <= sig_wire_mem_write_Dec;
			sig_mem_read_Exec <= sig_wire_mem_read_Dec;
			src2_Exec <= src2_forward;

			// WB
			sig_reg_write_Exec <= sig_wire_reg_write_Dec;
			RD_Exec_data  <= wire_RD_Dec;

			//-------------------------------------ALU-------------------------------------------------//

			alu_result_Exec <=  is_add   	? $signed(src1_forward) + $signed(src2_forward):
								is_addi		? $signed(src1_forward) + $signed(imm):
								is_sub		? $signed(src1_forward) - $signed(src2_forward):
								is_andi		? $signed(src1_forward) & $signed(imm):
								is_and		? $signed(src1_forward) & $signed(src2_forward):
								is_or		? $signed(src1_forward) | $signed(src2_forward):
								is_ori		? $signed(src1_forward) | $signed(imm): 
								is_slli		? $signed(src1_forward) << $signed(imm[4:0]):
								is_srli		? $signed(src1_forward) >> $signed(imm[4:0]):
								is_auipc	? $signed(pc_dec) + $signed(imm):
								S_type 		? $signed(src1_forward) + $signed(imm): 
								is_lui		? imm:
								is_xor		? $signed(src1_forward) ^ $signed(src2_forward):
								is_xori		? $signed(src1_forward) ^ $signed(imm):
								is_lb		? src1_forward + imm:
								is_lbu		? src1_forward + imm:
								is_lh		? src1_forward + imm:
								is_lhu	    ? src1_forward + imm:
								is_lw	    ? src1_forward + imm:
								is_sltiu	? src1_forward < imm:
								is_slti		? $signed(src1_forward) < $signed(imm):
								is_sltu		? src1_forward < src2_forward:
								is_sll		? $signed(src1_forward) << $signed(src2_forward):
								is_slt		? $signed(src1_forward) < $signed(src2_forward):
								is_srl		? $signed(src1_forward) >> $signed(src2_forward):
								is_srai     ? $signed(src1_forward) >>> $signed(imm[4:0]):
								is_sra      ? $signed(src1_forward) >>> $signed(src2_forward):
								is_mul		? result_mul[31:0]:
								is_jalr		? pc_dec + 32'd4:
								is_mulh || is_mulhsu || is_mulhu ? result_mul[63:32]:
								32'b0;
		end
	end


	// current_state == MEM
	reg [31:0] data_load_MEM; 
	reg [4:0] RD_Mem;

	wire [31:0] wire_data_load_data = is_lbu ? (alu_result_Exec[1:0]==3 ? {24'h000000, read_data[31:24]} : 
										alu_result_Exec[1:0]==2 ? {24'h000000, read_data[23:16]} : 
										alu_result_Exec[1:0]==1 ? {24'h000000, read_data[15: 8]} : 
																{24'h000000, read_data[ 7: 0]}):
							is_lb  ? (alu_result_Exec[1:0]==3 ? {24'h000000, $signed(read_data[31:24])} : 
										alu_result_Exec[1:0]==2 ? {24'h000000, $signed(read_data[23:16])} : 
										alu_result_Exec[1:0]==1 ? {24'h000000, $signed(read_data[15: 8])} : 
																{24'h000000, $signed(read_data[ 7: 0])}):
							is_lh  ? (alu_result_Exec[1:0]==2 ? {{16{read_data[31]}}, $signed(read_data[31:16])} :
																{{16{read_data[31]}}, $signed(read_data[15: 0])}):
							is_lhu ? (alu_result_Exec[1:0]==2 ? {16'h000000, read_data[31:16]} :
																{16'h000000, read_data[15: 0]}):
																				read_data;

	always @(negedge sig_clk)
	begin
			//Acerta a posiçao para ser lido em memoria 
			data_load_MEM <= wire_data_load_data;

			//Memory 
			sig_mem_write_Mem <= sig_mem_write_Exec;
			sig_mem_read_Mem <= sig_mem_read_Exec;

			// WB
			sig_reg_write_Mem <= sig_reg_write_Exec;
			RD_Mem  <= RD_Exec_data;

			// if(!mem_read_Dec)
			alu_result_Mem_data <= alu_result_Exec;
			// write_reg_Mem <= write_reg_Exec;


			//-------------------------------------MEMORY ACCESS-------------------------------------------------//

			// Valor que sera salvo na nossa memoria e a condicional de escrita
			write_data_MEM <= is_sw ? src2_Exec : (is_sb ? (alu_result_Exec[1:0]==3 ? {src2_Exec[7:0], 24'h000000} : 
														alu_result_Exec[1:0]==2 ? {8'h00, src2_Exec[7:0], 16'h0000} :
														alu_result_Exec[1:0]==1 ? {16'h0000, src2_Exec[7:0], 8'h00} :
																					{24'h000000, src2_Exec[7:0]}) :
													is_sh  ?  alu_result_Exec[1:0]==2 ? {src2_Exec[15:0], 16'h0000} :
																					{16'h0000, src2_Exec[15:0]} :
																									32'bX);
			
			// Escrita alinhada na memoria
			byte_enable_data <= is_lbu || is_sb ? (alu_result_Exec[1:0]==3 ? 4'b1000 : // sb/lb
												alu_result_Exec[1:0]==2 ? 4'b0100 : 
												alu_result_Exec[1:0]==1 ? 4'b0010 : 
																		4'b0001): 
							is_lh || is_sh  ? (alu_result_Exec[1:0]==2 ? 4'b1100 : // sh/lh
																		4'b0011):
																		4'b1111;  // lw/sw
	end


	// current_state == WB
	reg sig_mem_read_WB;
	reg [31:0] data_load_WB, alu_result_WB;
	
	always @(posedge sig_clk)
	begin
		if(!stall)
		begin
			sig_mem_read_WB <= sig_mem_read_Mem;
			alu_result_WB <= alu_result_Mem_data;
			
			sig_reg_write_WB <= sig_reg_write_Mem;
			data_load_WB <= data_load_MEM;
			RD_WB_data <= RD_Mem;
		end
	end

	assign write_reg_WB_data = sig_mem_read_WB ? data_load_WB : alu_result_WB;

endmodule
