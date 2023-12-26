/* verilator lint_off DECLFILENAME */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNUSEDPARAM */

// Nosso processador 
module franken_riscv( input  		    clk, reset,
                      output reg [31:0] pc,
                      input      [31:0] instruction_,
                      output reg	    mem_write_Mem,
			          output 	 [3: 0] byte_enable,
                      output reg [31:0] alu_result_Exec, 
			          output reg [31:0] write_data,
                      input  	 [31:0] read_data,
					  output reg 		reg_write_WB, // Register Bank 
					  output reg [4:0]  RS1_Dec, RS2_Dec, RD_WB,
					  output reg [31:0] write_reg_WB,
					  input 	 [31:0] src1, src2	
);
	
	
	reg [31:0] data_load;

	//JUMP
	reg [31:0] jump_add;

	//PC
	wire [31:0] next_pc;
	
	// Atualiza nosso valor de PC
	assign next_pc =	reset 				        ? 32'b0:
						is_conditional_jump_Exec	? jump_add:
						pc + 32'd4;

	// current_state == FETCH
	always @(posedge clk)
    	pc <= next_pc;

	//------------------------------------- DECODE -------------------------------------------------//

	reg [31:0] instruction;
 
	// current_state == DECODE
	always @(negedge clk)
		instruction <= instruction_;

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

		// -------------- Sianis de Controle Exec -------------- //
		//Condiçao de salto
		wire is_conditional_jump_Dec = (is_beq || is_bne || is_blt || is_bge || is_jal || is_jalr);


		// -------------- Sinais de Controle Memory -------------- //
		wire mem_write_Dec = S_type;
		wire mem_read_Dec = (is_lb || is_lbu || is_lh || is_lhu || is_lw);


		// -------------- Sinais de Controle WB -------------- //
			// Condicional para escrita nos registradores
		wire reg_write_Dec = (R_type || S_type || B_type || I_type || U_type) && RD_WB != 5'b0;

		//Escrita da memoria para o registrador
		wire is_mem_reg_Dec = is_lw || is_lbu || is_lb || is_lh || is_lhu;

	

	// ------------ State Machine ------------ //

	// parameter   FETCH   = 4'b0000; 	// State 0
	// parameter   DECODE  = 4'b0001; 	// State 1
	// parameter	EXEC	= 4'b0010;  // State 2
	// parameter 	MEM		= 4'b0011;  // State 3		
	// parameter   WB   	= 4'b0100;	// State 4

	// reg  [3:0] current_state;
	// wire [3:0] next_state;

	// assign next_state = (current_state == FETCH)	? DECODE : 
	// 					(current_state == DECODE)	? EXEC :
	// 					(current_state == EXEC)		? MEM :
	// 					(current_state == MEM)		? WB :
	// 					FETCH;


	// reg Decode
	reg [31:0] alu_result_Dec, imm_Dec, src1_Dec, src2_Dec, write_reg_Dec;
	reg [4:0] RD_Dec;

	// reg Exec 
	reg is_conditional_jump_Exec, mem_write_Exec, mem_read_Exec, reg_write_Exec, is_mem_reg_Exec;
	reg [4:0] RD_Exec;
	reg [31:0] imm_Exec, src1_Exec, src2_Exec, write_reg_Exec;
	
	// reg Mem
	reg mem_read_Mem, reg_write_Mem, is_mem_reg_Mem;
	reg [31:0] write_reg_Mem;

	reg [4:0] RD_Mem;

	// reg WB
	reg is_mem_reg_WB;

	// always @(clk)
	// begin
	// 	if(reset) 
	//  		current_state <= FETCH;
	//  	else 
	//  		current_state <= next_state;
	// end

	// current_state == DECODE
	always @(posedge clk)
		begin
			alu_result_Dec <= alu_result;
			write_reg_Dec <= write_reg;

			src1_Dec <= src1;
			src2_Dec <= src2;
			imm_Dec <= imm;
			RS1_Dec <= RS1;
			RS2_Dec <= RS2;
			RD_Dec  <= RD;
		end 

	// current_state == EXEC
	always @(negedge clk)
		begin
			// Exec
			is_conditional_jump_Exec <= is_conditional_jump_Dec;

			alu_result_Exec <= alu_result_Dec;
			jump_add <= jump_add_;

			src1_Exec <= src1_Dec;
			src2_Exec <= src2_Dec;
			imm_Exec <= imm_Dec;

			//Memory 
			mem_write_Exec <= mem_write_Dec;
			mem_read_Exec <= mem_read_Dec;

			// WB
			reg_write_Exec <= reg_write_Dec;
			is_mem_reg_Exec <= is_mem_reg_Dec;
			RD_Exec  <= RD_Dec;
			write_reg_Exec <= write_reg_Dec;
		end
	
	// current_state == MEM
	always @(posedge clk)
		begin

			//Memory 
			mem_write_Mem <= mem_write_Exec;
			mem_read_Mem <= mem_read_Exec; // Não utilizado (ainda)

			write_data <= write_data_;
			data_load <= data_load_;

			// WB
			reg_write_Mem <= reg_write_Exec;
			is_mem_reg_Mem <= is_mem_reg_Exec;
			RD_Mem  <= RD_Exec;
			write_reg_Mem <= write_reg_Exec;

		end

	// current_state == WB
	always @(negedge clk)
		begin
			// WB
			reg_write_WB <= reg_write_Mem;
			is_mem_reg_WB <= is_mem_reg_Mem;
			RD_WB  <= RD_Mem;
			write_reg_WB <= write_reg_Mem;
		end


	//-------------------------------------ALU-------------------------------------------------//

	wire [31:0] alu_result =  	is_add   	? $signed(src1) + $signed(src2):
								is_addi		? $signed(src1) + $signed(imm):
								is_sub		? $signed(src1) - $signed(src2):
								is_andi		? $signed(src1) & $signed(imm):
								is_and		? $signed(src1) & $signed(src2):
								is_or		? $signed(src1) | $signed(src2):
								is_ori		? $signed(src1) | $signed(imm): 
								is_slli		? $signed(src1) << $signed(imm[4:0]):
								is_srli		? $signed(src1) >> $signed(imm[4:0]):
								is_auipc	? $signed(pc) + $signed(imm):
								J_type   	? jump_add:
								S_type 		? $signed(src1) + $signed(imm): 
								is_lui		? imm:
								is_xor		? $signed(src1) ^ $signed(src2):
								is_xori		? $signed(src1) ^ $signed(imm):
								is_lb		? src1 + imm:
								is_lbu		? src1 + imm:
								is_lh		? src1 + imm:
								is_lhu	    ? src1 + imm:
								is_lw	    ? src1 + imm:
								is_sltiu	? src1 < imm:
								is_slti		? $signed(src1) < $signed(imm):
								is_sltu		? src1 < src2:
								is_sll		? $signed(src1) << $signed(src2):
								is_slt		? $signed(src1) < $signed(src2):
								is_srl		? $signed(src1) >> $signed(src2):
								is_srai     ? $signed(src1) >>> $signed(imm[4:0]):
								is_sra      ? $signed(src1) >>> $signed(src2):
								32'b0;

	// Caso nossa instruçao seja de JUMP, temos que calcular a nova posiçao para nosso PC.
	wire [31:0] jump_add_ =	is_jal 										  ? pc 			  + $signed(imm):
							is_jalr 									  ? $signed(src1) + $signed(imm):
							(is_beq  && ($signed(src1) == $signed(src2))) ? pc		 	  + $signed(imm):
							(is_bne  && ($signed(src1) != $signed(src2))) ? pc 			  + $signed(imm):
							(is_blt  && ($signed(src1)  < $signed(src2))) ? pc			  + $signed(imm):
							(is_bltu && (src1  < src2)) 				  ? pc			  + $signed(imm):
							(is_bge  && ($signed(src1) >= $signed(src2))) ? pc 			  + $signed(imm):
							(is_bgeu && (src1 >= src2)) 				  ? pc 			  + $signed(imm):
							pc + 32'd4;

	//-------------------------------------MEMORY ACCESS-------------------------------------------------//

	// Valor que sera salvo na nossa memoria e a condicional de escrita
	wire [31:0] write_data_ = is_sw ? src2 : (is_sb ? (alu_result_Exec[1:0]==3 ? {src2[7:0], 24'h000000} : 
			  						     	      alu_result_Exec[1:0]==2 ? {8'h00, src2[7:0], 16'h0000} :
												  alu_result_Exec[1:0]==1 ? {16'h0000, src2[7:0], 8'h00} :
											   	                            {24'h000000, src2[7:0]}) :
										     is_sh ? alu_result_Exec[1:0]==2 ? {src2[15:0], 16'h0000} :
																	      {16'h0000, src2[15:0]} :
																						   32'bX);
	
	// Escrita alinhada na memoria
	assign byte_enable = is_lbu || is_sb ? (alu_result_Exec[1:0]==3 ? 4'b1000 : // sb/lb
											alu_result_Exec[1:0]==2 ? 4'b0100 : 
											alu_result_Exec[1:0]==1 ? 4'b0010 : 
											                     4'b0001): 
						 is_lh || is_sh  ? (alu_result_Exec[1:0]==2 ? 4'b1100 : // sh/lh
						 										 4'b0011):
									     	                     4'b1111;  // lw/sw
	
   //Acerta a posiçao para ser lido em memoria 
   wire [31:0] data_load_ = is_lbu  ? (alu_result_Exec[1:0]==3 ? {24'h000000, read_data[31:24]} : 
	                                   alu_result_Exec[1:0]==2 ? {24'h000000, read_data[23:16]} : 
	                                   alu_result_Exec[1:0]==1 ? {24'h000000, read_data[15: 8]} : 
								                            {24'h000000, read_data[ 7: 0]}):
					        is_lb   ? (alu_result_Exec[1:0]==3 ? {24'h000000, $signed(read_data[31:24])} : 
	                                   alu_result_Exec[1:0]==2 ? {24'h000000, $signed(read_data[23:16])} : 
	                                   alu_result_Exec[1:0]==1 ? {24'h000000, $signed(read_data[15: 8])} : 
								                            {24'h000000, $signed(read_data[ 7: 0])}):
					        is_lh  ? (alu_result_Exec[1:0]==2  ? {{16{read_data[31]}}, $signed(read_data[31:16])} :
					   								        {{16{read_data[31]}}, $signed(read_data[15: 0])}):
					        is_lhu ? (alu_result_Exec[1:0]==2  ? {16'h000000, read_data[31:16]} :
					   								        {16'h000000, read_data[15: 0]}):
																  read_data;
	


	//-------------------------------------WRITE BACK-------------------------------------------------//

	// Dado que será escrito no registrador
	wire [31:0] write_reg = is_mem_reg_Dec ? data_load : alu_result;

endmodule
