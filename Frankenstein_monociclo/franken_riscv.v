/* verilator lint_off DECLFILENAME */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNUSEDPARAM */

// Nosso processador 
module franken_riscv( input  		    clk, reset,
                      output reg [31:0] pc,
                      input  reg [31:0] instruction,
                      output reg	    mem_write_Mem,
			          output reg [3: 0] byte_enable,
                      output reg [31:0] alu_result_Exec, 
			          output reg [31:0] write_data,
                      input  	 [31:0] read_data,
					  output reg 		reg_write_WB, // Register Bank 
					  output	 [4:0]  RS1, RS2, 
					  output reg [4:0]  RD_WB,
					  output reg [31:0] write_reg_WB,
					  input 	 [31:0] src1_Dec, src2_Dec	
);
	
	
	reg [31:0] data_load;

	//PC
	wire [31:0] next_pc;
	
	// Atualiza nosso valor de PC
	assign next_pc =	reset 				        ? 32'b0:
						is_conditional_jump_Exec	? jump_add_Exec:
						pc + 32'd4;

	// current_state == FETCH
	always @(posedge clk)
    	pc <= next_pc;

	//------------------------------------- DECODE -------------------------------------------------//

	// reg [31:0] instruction;
 
	// // current_state == LOAD INSTRUCTION
	// always @(negedge clk)
		

	// Recebe os valores que sao passados na instruçao
	wire [6:0] opcode;
	assign opcode = instruction[6:0];
	wire [4:0] rd_;
	assign rd_ = instruction[11:7];
	wire [2:0] funct3_;
	assign funct3_ = instruction[14:12];
	wire [4:0] rs1;
	assign rs1 = instruction[19:15];
	wire [4:0] rs2;
	assign rs2 = instruction[24:20];
	wire [6:0] funct7_;
	assign funct7_ = instruction[31:25];
	
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


	// I-Type
	wire I_type   = (opcode == 7'b1100111 | opcode == 7'b0000011 | opcode == 7'b0010011);
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
	wire fence  = (opcode == 7'b0001111 & funct3 == 3'b000);
	wire ecall  = (opcode == 7'b1110011 & funct3 == 3'b000 & instruction[31:25] == 12'b000000000000);
	wire ebreak = (opcode == 7'b1110011 & funct3 == 3'b000 & instruction[31:25] == 12'b000000000001);
	
	// Decodificaçao das instruçoes e seus respectivos tipos 
	// wire [4:0] RS1;
	assign RS1 = (R_type | I_type | S_type | B_type) 	? rs1 : 5'b000000;
	
	// wire [4:0] RS2;
	assign RS2 = (R_type | S_type | B_type)         	? rs2 : 5'b000000;

	wire [4:0] RD_Dec;
	assign RD_Dec = (R_type | I_type | U_type | J_type) 	? rd_ : 5'b000000;
	
	wire [2:0] funct3;
	assign funct3 = (R_type | I_type | S_type | B_type) ? funct3_ : 3'b000;
	
	wire [6:0] funct7;
	assign funct7 = (R_type)                            ? funct7_ : 7'b000000;
	
	wire [31:0] imm;
	assign imm = (I_type) ? ({{20{instruction[31]}},instruction[31:20]}):
				 (S_type) ? ({{20{instruction[31]}},instruction[31:25],instruction[11:7]}):		
				 (B_type) ? ({{19{instruction[31]}},instruction[31],instruction[7],instruction[30:25],instruction[11:8],1'b0}):
				 (U_type) ? ({instruction[31:12],12'b0}):
				 (J_type) ? ({{11{instruction[31]}}, instruction[31],instruction[19:12],instruction[20],instruction[30:21],1'b0}):
				 32'b0;
			

	//Escrita da memoria para o registrador
	wire is_mem_reg_Dec = is_lw || is_lbu || is_lb || is_lh || is_lhu;

	// Condicional para escrita nos registradores
	wire reg_write_Dec = (R_type || S_type || B_type || I_type || U_type) && RD_Dec != 5'b0;


	//---------------------------- Controler ---------------------------------------------//

		// -------------- Sianis de Controle Exec -------------- //
		//Condiçao de salto
		wire is_conditional_jump_Dec = (is_beq || is_bne || is_blt || is_bge || is_jal || is_jalr || is_bgeu);


		// -------------- Sinais de Controle Memory -------------- //
		wire mem_write_Dec = S_type;
		wire mem_read_Dec = (is_lb || is_lbu || is_lh || is_lhu || is_lw);



	// reg Decode
	reg [31:0] alu_result_Dec;
	// reg [4:0] RD_Dec;
	// reg reg_write_Dec;

	// reg Exec 
	reg is_conditional_jump_Exec, mem_write_Exec, mem_read_Exec, reg_write_Exec;
	reg [4:0] RD_Exec;
	reg [31:0] jump_add_Exec; // src1_Exec, src2_Exec, imm_Exec, write_reg_Exec
	
	// reg Mem
	reg mem_read_Mem, reg_write_Mem;
	reg [31:0] alu_result_Mem; // write_reg_Mem
	reg [4:0] RD_Mem;

	// // current_state == DECODE
	// always @(posedge clk)
	// 	begin
	// 		// instruction <= instruction_Dec;

	// 		// alu_result_Dec <= alu_result;
	// 		// write_reg_Dec <= write_reg;
	// 		// reg_write_Dec <= reg_write;

	// 		// src1_Dec <= src1;
	// 		// src2_Dec <= src2;

	// 		// imm_Dec <= imm;
	// 		// RD_Dec  <= RD;
	// 	end 

	// current_state == EXEC
	always @(negedge clk)
		begin
			// Exec
			is_conditional_jump_Exec <= is_conditional_jump_Dec;

			//Memory 
			mem_write_Exec <= mem_write_Dec;
			mem_read_Exec <= mem_read_Dec;

			// WB
			reg_write_Exec <= reg_write_Dec;
			RD_Exec  <= RD_Dec;
			// write_reg_Exec <= write_reg_Dec;

			//-------------------------------------ALU-------------------------------------------------//

			// Caso nossa instruçao seja de JUMP, temos que calcular a nova posiçao para nosso PC.
			jump_add_Exec <=	is_jal 										          ? pc 			      + $signed(imm):
								is_jalr 									          ? $signed(src2_Dec) + $signed(imm):
								(is_beq  && ($signed(src1_Dec) == $signed(src2_Dec))) ? pc		 	      + $signed(imm):
								(is_bne  && ($signed(src1_Dec) != $signed(src2_Dec))) ? pc 			      + $signed(imm):
								(is_blt  && ($signed(src1_Dec)  < $signed(src2_Dec))) ? pc			      + $signed(imm):
								(is_bltu && (src1_Dec  < src2_Dec)) 				  ? pc			      + $signed(imm):
								(is_bge  && ($signed(src1_Dec) >= $signed(src2_Dec))) ? pc 			      + $signed(imm):
								(is_bgeu && (src1_Dec >= src2_Dec)) 				  ? pc 			      + $signed(imm):
								pc + 32'd4;

			// alu_result_Exec <= alu_result;
			alu_result_Exec <=  is_add   	? $signed(src1_Dec) + $signed(src2_Dec):
								is_addi		? $signed(src1_Dec) + $signed(imm):
								is_sub		? $signed(src1_Dec) - $signed(src2_Dec):
								is_andi		? $signed(src1_Dec) & $signed(imm):
								is_and		? $signed(src1_Dec) & $signed(src2_Dec):
								is_or		? $signed(src1_Dec) | $signed(src2_Dec):
								is_ori		? $signed(src1_Dec) | $signed(imm): 
								is_slli		? $signed(src1_Dec) << $signed(imm[4:0]):
								is_srli		? $signed(src1_Dec) >> $signed(imm[4:0]):
								is_auipc	? $signed(pc) + $signed(imm):
								J_type   	? jump_add_Exec:
								S_type 		? $signed(src1_Dec) + $signed(imm): 
								is_lui		? imm:
								is_xor		? $signed(src1_Dec) ^ $signed(src2_Dec):
								is_xori		? $signed(src1_Dec) ^ $signed(imm):
								is_lb		? src1_Dec + imm:
								is_lbu		? src1_Dec + imm:
								is_lh		? src1_Dec + imm:
								is_lhu	    ? src1_Dec + imm:
								is_lw	    ? src1_Dec + imm:
								is_sltiu	? src1_Dec < imm:
								is_slti		? $signed(src1_Dec) < $signed(imm):
								is_sltu		? src1_Dec < src2_Dec:
								is_sll		? $signed(src1_Dec) << $signed(src2_Dec):
								is_slt		? $signed(src1_Dec) < $signed(src2_Dec):
								is_srl		? $signed(src1_Dec) >> $signed(src2_Dec):
								is_srai     ? $signed(src1_Dec) >>> $signed(imm[4:0]):
								is_sra      ? $signed(src1_Dec) >>> $signed(src2_Dec):
								32'b0;
		end
	
	// current_state == MEM
	always @(posedge clk)
		begin

			//Memory 
			mem_write_Mem <= mem_write_Exec;
			mem_read_Mem <= mem_read_Exec; // Não utilizado (ainda)

			// WB
			reg_write_Mem <= reg_write_Exec;
			RD_Mem  <= RD_Exec;
			alu_result_Mem <= alu_result_Exec;
			// write_reg_Mem <= write_reg_Exec;


			//-------------------------------------MEMORY ACCESS-------------------------------------------------//

			// Valor que sera salvo na nossa memoria e a condicional de escrita
			write_data <= is_sw ? src2_Dec : (is_sb ? (alu_result_Exec[1:0]==3 ? {src2_Dec[7:0], 24'h000000} : 
													   alu_result_Exec[1:0]==2 ? {8'h00, src2_Dec[7:0], 16'h0000} :
													   alu_result_Exec[1:0]==1 ? {16'h0000, src2_Dec[7:0], 8'h00} :
																				 {24'h000000, src2_Dec[7:0]}) :
											  is_sh ?  alu_result_Exec[1:0]==2 ? {src2_Dec[15:0], 16'h0000} :
																				 {16'h0000, src2_Dec[15:0]} :
																								32'bX);
			
			// Escrita alinhada na memoria
			byte_enable <= is_lbu || is_sb ? (alu_result_Exec[1:0]==3 ? 4'b1000 : // sb/lb
											  alu_result_Exec[1:0]==2 ? 4'b0100 : 
											  alu_result_Exec[1:0]==1 ? 4'b0010 : 
																		4'b0001): 
						   is_lh || is_sh  ? (alu_result_Exec[1:0]==2 ? 4'b1100 : // sh/lh
																		4'b0011):
																		4'b1111;  // lw/sw
			
		//Acerta a posiçao para ser lido em memoria 
		data_load <= is_lbu ? (alu_result_Exec[1:0]==3 ? {24'h000000, read_data[31:24]} : 
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

		end

	// current_state == WB
	always @(negedge clk)
		begin
			// WB
			reg_write_WB <= reg_write_Mem;
			RD_WB  <= RD_Mem;
			write_reg_WB <= is_mem_reg_Dec ? data_load : alu_result_Mem;

		end










endmodule
