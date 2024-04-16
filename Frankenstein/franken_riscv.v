module franken_riscv( input  		    clk, reset, rbusy,
                      input  	 [31:0] read_data, instruction, src1_data_DEC, src2_data_DEC,
					  output	 [4:0]  RS1_data, RS2_data, 
					  output 	 [31:0] reg_data_WB, 
                      output reg	    mem_write_enable_MEM, mem_read_enable_MEM, reg_write_enable_WB,
			          output reg [3: 0] byte_enable,
					  output reg [4:0]  addr_RD_WB,
					  output reg [31:0] pc, write_data_MEM, alu_result_MEM);
 
    // is_conditional_jump_EXEC
	reg mem_write_enable_EXEC, reg_write_enable_EXEC, reg_write_enable_MEM, mem_read_enable_EXEC;
	reg [4:0] addr_RD_EXEC;
	reg [31:0] src2_EXEC, alu_result_EXEC;
	
	reg [6:0] funct7_, opcode;
	reg [4:0] rd_, rs1, rs2;
	reg [2:0] funct3_;
	reg [31:0] imm, pc_dec;
	reg[1:0] Fwd_A, Fwd_B;
	reg stall;

	// current_state == MEM 
	reg [31:0] load_data_MEM; 
	reg [4:0] RD_Mem;

	// current_state == WB
	reg mem_read_enable_WB;
	reg [31:0] load_data_WB, alu_result_WB;

	initial begin
	 	pc = 32'h00400000;
	end
	
	//------------------------------------------------- FETCH ------------------------------------------------- //

	// Atualiza nosso valor de PC
	wire [31:0] next_pc = !reset 					? 32'h00400000:
						  is_conditional_jump_DEC	? jump_add_EXEC: // Flush: Force pc to stay in instruction
						  pc + 32'd4;			// In case of stall, pc to stay in intruction 

	// current_state == FETCH
	always @(posedge clk) begin
		if (!rbusy && !stall)
    		pc <= next_pc;
	end
	//------------------------------------------------- DECODE -------------------------------------------------//

	always @(negedge clk)
	begin

		// Recebe os valores que sao passados na instruçao
		opcode <= instruction[6:0];

		rd_ <= instruction[11:7];

		funct3_ <= instruction[14:12];

		rs1 <= instruction[19:15];

		rs2 <= instruction[24:20];

		funct7_ <= instruction[31:25];

		imm <=	(instruction[6:0] == 7'b1100111 | instruction[6:0] == 7'b0000011 | instruction[6:0] == 7'b0010011) ? ({{20{instruction[31]}},instruction[31:20]}):
				(instruction[6:0] == 7'b0100011) ? ({{20{instruction[31]}},instruction[31:25],instruction[11:7]}):		
				(instruction[6:0] == 7'b1100011) ? ({{19{instruction[31]}},instruction[31],instruction[7],instruction[30:25],instruction[11:8],1'b0}):
				(instruction[6:0] == 7'b0110111 | instruction[6:0] == 7'b0010111) ? ({instruction[31], instruction[30:12],12'b0}):
				(instruction[6:0] == 7'b1101111) ? ({{11{instruction[31]}}, instruction[31],instruction[19:12],instruction[20],instruction[30:21],1'b0}):
			   	32'b0;

		pc_dec <= pc;

		// ------------- Forwarding ------------- //
		if(reg_write_enable_EXEC && (addr_RD_EXEC == instruction[19:15] && instruction[19:15] != 5'b0))
			Fwd_A <= 2'b10;
		else if(reg_write_enable_WB && (RD_Mem == instruction[19:15] && instruction[19:15] != 5'b0))
			Fwd_A <= 2'b01;
		else
			Fwd_A <= 2'b00;

		if(reg_write_enable_EXEC && (addr_RD_EXEC == instruction[24:20] && instruction[24:20] != 5'b0))
			Fwd_B <= 2'b10;
		else if(reg_write_enable_WB && (RD_Mem == instruction[24:20] && instruction[24:20] != 5'b0))
			Fwd_B <= 2'b01;
		else
			Fwd_B <= 2'b00;

		// ------------- Hazard Detection ------------- //
		if(((mem_read_enable_EXEC && !stall && addr_RD_EXEC != 5'b00000)) || rbusy)
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
	// wire is_mul    = (R_type && funct3 == 3'b000 & funct7 == 7'b0000001);
	// wire is_mulh   = (R_type && funct3 == 3'b001 & funct7 == 7'b0000001);
	// wire is_mulhsu = (R_type && funct3 == 3'b010 & funct7 == 7'b0000001);
	// wire is_mulhu  = (R_type && funct3 == 3'b011 & funct7 == 7'b0000001);
	// wire is_div    = (R_type && funct3 == 3'b100 & funct7 == 7'b0000001);
	// wire is_divu   = (R_type && funct3 == 3'b101 & funct7 == 7'b0000001);
	// wire is_rem    = (R_type && funct3 == 3'b110 & funct7 == 7'b0000001);
	// wire is_remu   = (R_type && funct3 == 3'b111 & funct7 == 7'b0000001);

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
	assign RS1_data = (R_type | I_type | S_type | B_type | J_type) 	? rs1 : 5'b0;
	
	// wire [4:0] RS2;
	assign RS2_data = (R_type | S_type | B_type)         	? rs2 : 5'b0;

	wire [4:0] wire_RD_Dec;
	assign wire_RD_Dec = (R_type | I_type | U_type | J_type) ? rd_ : 5'b0;
	
	wire [2:0] funct3;
	assign funct3 = (R_type | I_type | S_type | B_type) ? funct3_ : 3'b0;
	
	wire [6:0] funct7;
	assign funct7 = (R_type)                            ? funct7_ : 7'b0;


	//---------------------------- Controler ---------------------------------------------//
	// -------------- Sianis de Controle Exec -------------- //
	//Condiçao de salto
	wire is_conditional_jump_DEC = (is_beq || is_bne || is_blt || is_bge || is_jal || is_jalr || is_bgeu);

	// -------------- Sinais de Controle Memory -------------- //
	wire mem_write_enable_DEC = S_type;
	wire mem_read_enable_DEC = (is_lb || is_lbu || is_lh || is_lhu || is_lw);

	// -------------- Sinais de Controle WB -------------- //
	wire reg_write_enable_DEC = (R_type || B_type || I_type || U_type) && wire_RD_Dec != 5'b0;

	wire [31:0] src1_forward, src2_forward;

	assign src1_forward =	(Fwd_A == 2'b10) ? (mem_read_enable_EXEC ? load_data_MEM : alu_result_MEM):
							(Fwd_A == 2'b01) ? reg_data_WB:
							src1_data_DEC; 

	assign src2_forward =	(Fwd_B == 2'b10) ? (mem_read_enable_EXEC ? load_data_MEM : alu_result_MEM):
							(Fwd_B == 2'b01) ? reg_data_WB:
							src2_data_DEC; 


	// ----------------------------- Multiply -------------------------------// 
	// wire sign1 = src1_data_DEC[31] &  is_mulh;
    // wire sign2 = src2_data_DEC[31] & (is_mulh | is_mulhsu);
	// wire signed [32:0] src1_sign = {sign1, src1_data_DEC};
   	// wire signed [32:0] src2_sign = {sign2, src2_data_DEC};
	// wire [63:0] result_mul = src1_sign * src2_sign; // Realiza a operação de multiplicação

	// Caso nossa instruçao seja de JUMP, temos que calcular a nova posiçao para nosso PC.
	wire [31:0] jump_add_EXEC =	is_jal 										                  ? pc_dec + $signed(imm):
								is_jalr 									                  ? $signed(src1_forward) + $signed(imm):
								(is_beq  && ($signed(src1_forward) == $signed(src2_forward))) ? pc_dec + $signed(imm):
								(is_bne  && ($signed(src1_forward) != $signed(src2_forward))) ? pc_dec + $signed(imm):
								(is_blt  && ($signed(src1_forward)  < $signed(src2_forward))) ? pc_dec + $signed(imm):
								(is_bltu && (src1_forward  < src2_forward)) 				  ? pc_dec + $signed(imm):
								(is_bge  && ($signed(src1_forward) >= $signed(src2_forward))) ? pc_dec + $signed(imm):
								(is_bgeu && (src1_forward >= src2_forward)) 				  ? pc_dec + $signed(imm):
								pc_dec + 32'd4;

	// current_state == EXEC
	always @(posedge clk)
	begin
		if(!stall)
		begin

			// Exec
			// is_conditional_jump_EXEC <= is_conditional_jump_DEC;

			//Memory 
			mem_write_enable_EXEC <= mem_write_enable_DEC;
			mem_read_enable_EXEC <= mem_read_enable_DEC;
			src2_EXEC <= src2_forward;

			// WB
			reg_write_enable_EXEC <= reg_write_enable_DEC;
			addr_RD_EXEC  <= wire_RD_Dec;

			//-------------------------------------ALU-------------------------------------------------//

			alu_result_EXEC <=  is_add   	? $signed(src1_forward) + $signed(src2_forward):
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
								is_sltiu	? {31'b0, src1_forward < imm}:
								is_slti		? {31'b0, $signed(src1_forward) < $signed(imm)}:
								is_sltu		? {31'b0, src1_forward < src2_forward}:
								is_sll		? $signed(src1_forward) << $signed(src2_forward):
								is_slt		? {31'b0, $signed(src1_forward) < $signed(src2_forward)}:
								is_srl		? $signed(src1_forward) >> $signed(src2_forward):
								is_srai     ? $signed(src1_forward) >>> $signed(imm[4:0]):
								is_sra      ? $signed(src1_forward) >>> $signed(src2_forward):
								// is_mul		? result_mul[31:0]:
								is_jalr		? pc_dec + 32'd4:
								// is_mulh || is_mulhsu || is_mulhu ? result_mul[63:32]:
								32'b0;
		end
	end

	// current_state == MEM
	wire [31:0] load_data = is_lbu ? (alu_result_EXEC[1:0]==3 ? {24'b0, read_data[31:24]} : 
										alu_result_EXEC[1:0]==2 ? {24'b0, read_data[23:16]} : 
										alu_result_EXEC[1:0]==1 ? {24'b0, read_data[15: 8]} : 
																{24'b0, read_data[ 7: 0]}):
							is_lb  ? (alu_result_EXEC[1:0]==3 ? {24'b0, $signed(read_data[31:24])} : 
										alu_result_EXEC[1:0]==2 ? {24'b0, $signed(read_data[23:16])} : 
										alu_result_EXEC[1:0]==1 ? {24'b0, $signed(read_data[15: 8])} : 
																{24'b0, $signed(read_data[ 7: 0])}):
							is_lh  ? (alu_result_EXEC[1:0]==2 ? {{16{read_data[31]}}, $signed(read_data[31:16])} :
																{{16{read_data[31]}}, $signed(read_data[15: 0])}):
							is_lhu ? (alu_result_EXEC[1:0]==2 ? {16'b0, read_data[31:16]} :
																{16'b0, read_data[15: 0]}):
																				read_data;

	always @(negedge clk)
	begin
			//Acerta a posiçao para ser lido em memoria 
			load_data_MEM <= load_data;

			//Memory 
			mem_write_enable_MEM <= mem_write_enable_EXEC;
			mem_read_enable_MEM <= mem_read_enable_EXEC;
			alu_result_MEM <= alu_result_EXEC;

			// WB
			reg_write_enable_MEM <= reg_write_enable_EXEC;
			RD_Mem  <= addr_RD_EXEC;

			//-------------------------------------MEMORY ACCESS-------------------------------------------------//

			// Valor que sera salvo na nossa memoria e a condicional de escrita
			write_data_MEM <= is_sw ? src2_EXEC : (is_sb ? (alu_result_EXEC[1:0]==3 ? {src2_EXEC[7:0], 24'h000000} : 
														alu_result_EXEC[1:0]==2 ? {8'h00, src2_EXEC[7:0], 16'h0000} :
														alu_result_EXEC[1:0]==1 ? {16'h0000, src2_EXEC[7:0], 8'h00} :
																					{24'h000000, src2_EXEC[7:0]}) :
													is_sh  ?  alu_result_EXEC[1:0]==2 ? {src2_EXEC[15:0], 16'h0000} :
																					{16'h0000, src2_EXEC[15:0]} :
																									32'bX);
			
			// Escrita alinhada na memoria
			byte_enable <= is_lbu || is_sb ? (alu_result_EXEC[1:0]==3 ? 4'b1000 : // sb/lb
												alu_result_EXEC[1:0]==2 ? 4'b0100 : 
												alu_result_EXEC[1:0]==1 ? 4'b0010 : 
																		4'b0001): 
							is_lh || is_sh  ? (alu_result_EXEC[1:0]==2 ? 4'b1100 : // sh/lh
																		4'b0011):
																		4'b1111;  // lw/sw
	end
	
	always @(posedge clk)
	begin
		if(!stall)
		begin
			mem_read_enable_WB <= mem_read_enable_MEM;
			alu_result_WB <= alu_result_MEM;
			
			reg_write_enable_WB <= reg_write_enable_MEM;
			load_data_WB <= load_data_MEM;
			addr_RD_WB <= RD_Mem;
		end
	end

	assign reg_data_WB = mem_read_enable_WB ? load_data_WB : alu_result_WB;

endmodule
