/* verilator lint_off DECLFILENAME */
/* verilator lint_off WIDTHEXPAND */

// Nosso processador 
module franken_riscv( input  		    clk, reset,
                      output reg [31:0] pc,
                      input      [31:0] instruction,
                      output 		    mem_write,
			          output 	 [3: 0] byte_enable,
                      output     [31:0] alu_result, 
			          output  	 [31:0] write_data,
                      input      [31:0] read_data
);

	// Registradores
	wire [31:0] src1;
	wire [31:0] src2;
	wire [31:0] data_load;

	//JUMP
	wire is_conditional_jump;
	wire [31:0] jump_add;

	//PC
	wire [31:0] next_pc;
	
	// Atualiza nosso valor de PC
	assign next_pc =	reset 				? 32'b0:
						is_conditional_jump	? jump_add:
						pc + 32'd4;
						  
	always @(posedge clk)
    	pc <= next_pc;
	
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
	wire is_addi  = (I_type & funct3 == 3'b000);
	wire is_xori  = (I_type & funct3 == 3'b100);
	wire is_ori   = (I_type & funct3 == 3'b110);
	wire is_andi  = (I_type & funct3 == 3'b111);
	wire is_jalr  = (I_type & funct3 == 3'b000);
	wire is_lw    = (I_type & funct3 == 3'b010);
	wire is_slti  = (I_type & funct3 == 3'b010);
	wire is_sltiu = (I_type & funct3 == 3'b011);
	wire is_lbu   = (I_type & funct3 == 3'b100);
	wire is_slli  = (I_type & funct3 == 3'b001 & funct7 == 7'b0);
	wire is_srli  = (I_type & funct3 == 3'b101 & funct7 == 7'b0);
	wire is_srai  = (I_type & funct3 == 3'b101 & funct7 == 7'b0100000);
	

	// S-Type
	wire S_type = (opcode == 7'b0100011);
	wire is_sw  = (S_type & funct3 == 3'b010);
	wire is_sb  = (S_type & funct3 == 3'b000);
	

	// B-Type
	wire B_type = (opcode == 7'b1100011);
	wire is_bge = (B_type & funct3 == 3'b101);
	wire is_beq = (B_type & funct3 == 3'b0);
	wire is_blt = (B_type & funct3 == 3'b100);
	wire is_bne = (B_type & funct3 == 3'b001);


	// U-Type 
	wire U_type = (opcode == 7'b0110111 | opcode == 7'b0010111);
	wire is_auipc = U_type;
	wire is_lui = U_type;
	

	// J-Type
	wire J_type = (opcode == 7'b1101111);
	wire is_jal = (J_type);
	
	// Decodificaçao das instruçoes e seus respectivos tipos 
	wire [4:0] RS1;
	assign RS1 = (R_type | I_type | S_type | B_type) 	? rs1 : 5'b000000;
	
	wire [4:0] RS2;
	assign RS2 = (R_type | S_type | B_type)         	? rs2 : 5'b000000;

	wire [4:0] RD;
	assign RD = (R_type | I_type | U_type | J_type) 	? rd_ : 5'b000000;
	
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
					
	//---------------------------- Controler ---------------------------------------------//
	
	assign mem_write = S_type;

	//Condiçao de salto
	assign is_conditional_jump = (is_beq || is_bne || is_blt || is_bge || is_jal || is_jalr);
	
	//Escrita da memoria para o registrador
	wire is_mem_reg = is_lw || is_lbu;
	
	// Condicional para escrita nos registradores
	wire reg_write = (R_type || S_type || B_type || I_type || U_type) && RD != 5'b0;
	
	//-------------------------------------ALU-------------------------------------------------//
	//wire [31:0] alu_result;
	assign alu_result = is_add   	? src1 + src2:
						is_addi		? src1 + $signed(imm):
						is_sub		? src1 - src2:
						is_andi		? src1 & $signed(imm):
						is_and		? src1 & src2:
						is_or		? src1 | src2:
						is_ori		? src1 | $signed(imm): 
						is_slli		? src1 << imm[4:0]:
						is_srli		? src1 >> imm[4:0]:
						is_auipc	? pc + $signed(imm):
						J_type   	? jump_add:
						S_type 		? src1 + $signed(imm): 
						is_lui		? imm:
						is_xor		? src1 ^ src2:
						is_xori		? src1 ^ $signed(imm):
						is_lbu		? src1 + imm:
						is_sltiu	? src1 < imm:
						is_slti		? src1 < $signed(imm):
						is_sltu		? src1 < src2:
						is_sll		? src1 << src2:
						is_slt		? src1 < src2:
						is_srl		? src1 >> src2:
						is_srai     ? src1 >>> imm[4:0]:
						is_sra      ? src1 >>> src2:
						32'b0;
	
	// Caso nossa instruçao seja de JUMP, temos que calcular a nova posiçao para nosso PC.
	assign jump_add =	is_jal 										 ? pc 			 + $signed(imm):
						is_jalr 									 ? $signed(src1) + $signed(imm):
						(is_beq && ($signed(src1) == $signed(src2))) ? pc		 	 + $signed(imm):
						(is_bne && ($signed(src1) != $signed(src2))) ? pc 			 + $signed(imm):
						(is_blt && ($signed(src1)  < $signed(src2))) ? pc			 + $signed(imm):
						(is_bge && ($signed(src1) >= $signed(src2))) ? pc 			 + $signed(imm):
						pc + 32'd4;

	// Valor que sera salvo na nossa memoria e a condicional de escrita
	assign write_data = is_sw ? src2 : (is_sb ? (alu_result[1:0]==3 ? {src2[7:0], 24'h000000} : 
									     	     alu_result[1:0]==2 ? {8'h00, src2[7:0], 16'h0000} :
												 alu_result[1:0]==1 ? {16'h0000, src2[7:0], 8'h00} :
												                      {24'h000000, src2[7:0]}) :
																							32'bX);
	
	// Escrita alinhada na memoria
	assign byte_enable = is_lbu || is_sb ? (alu_result[1:0]==3 ? 4'b1000 : // sb/lb
											alu_result[1:0]==2 ? 4'b0100 : 
											alu_result[1:0]==1 ? 4'b0010 : 
											                     4'b0001): 
									     	                     4'b1111;  // lw/sw
	
   //Acerta a posiçao para ser salvo em memoria 
   assign data_load = is_lbu ? (alu_result[1:0]==3 ? {24'h000000, read_data[31:24]} : 
	                            alu_result[1:0]==2 ? {24'h000000, read_data[23:16]} : 
	                            alu_result[1:0]==1 ? {24'h000000, read_data[15: 8]} : 
								                     {24'h000000, read_data[ 7: 0]}):
																  read_data;
	
	// Banco de registradores 
	register regs(clk, reg_write, RS1, RS2, RD, is_mem_reg ? data_load : alu_result, src1, src2);
endmodule
