/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNDRIVEN */

module alu_decoder (
   input             clk,
   input      [31:0]   instruction,R1, R2, RD,
   output reg [127:0] data_out1, data_out2, data_out3, data_out4 
   );

   wire [127:0] hex_code;
   
   always @(clk)
   begin
    data_out1 <= hex_code;

	// data_out2[31:0] <= R_type ? 32'h52_44_3A_00 : 32'h49_4D_4D_3A;
	data_out2 <= R_type ? {32'h52_44_3A_00, RD_} : {32'h49_4D_4D_3A, imm_};

	if(U_type)
		data_out3 <= 128'h0;
	else if(is_jalr)
		data_out3 <= 128'h52_31_00_2B_00_49_4D_4D;
	else if(J_type || B_type)
		data_out3 <= 128'h50_43_3A_00_2B_00_49_4D_4D;
	else
	begin
		//data_out3[31:0] <= 32'h52_31_3A_00;
		data_out3[127:0]   <= {32'h52_31_3A_00, R1_};
	end

	// data_out4[31:0] <= I_type || U_type || J_type ? 32'h52_44_3A_00 : 32'h52_32_3A_00;
    data_out4[127:0] <= I_type || U_type || J_type ? {32'h52_44_3A_00, RD_} : {32'h52_32_3A_00, R2_};
   end

   wire [63:0] R1_, R2_, RD_, imm_;
   ascii_decoder ascii_decoder1_1(R1[3 : 0], R1_[7:0]);
   ascii_decoder ascii_decoder1_2(R1[7 : 4], R1_[15:8]);
   ascii_decoder ascii_decoder1_3(R1[11: 8], R1_[23:16]);
   ascii_decoder ascii_decoder1_4(R1[15:12], R1_[31:24]);
   ascii_decoder ascii_decoder1_5(R1[19:16], R1_[39:32]);
   ascii_decoder ascii_decoder1_6(R1[23:20], R1_[47:40]);
   ascii_decoder ascii_decoder1_7(R1[27:24], R1_[55:48]);
   ascii_decoder ascii_decoder1_8(R1[31:28], R1_[63:56]);

   ascii_decoder ascii_decoder2_1(R2[3 : 0], R2_[7:0]);
   ascii_decoder ascii_decoder2_2(R2[7 : 4], R2_[15:8]);
   ascii_decoder ascii_decoder2_3(R2[11: 8], R2_[23:16]);
   ascii_decoder ascii_decoder2_4(R2[15:12], R2_[31:24]);
   ascii_decoder ascii_decoder2_5(R2[19:16], R2_[39:32]);
   ascii_decoder ascii_decoder2_6(R2[23:20], R2_[47:40]);
   ascii_decoder ascii_decoder2_7(R2[27:24], R2_[55:48]);
   ascii_decoder ascii_decoder2_8(R2[31:28], R2_[63:56]);

   ascii_decoder ascii_decoder3_1(imm[3 : 0], imm_[7:0]);
   ascii_decoder ascii_decoder3_2(imm[7 : 4], imm_[15:8]);
   ascii_decoder ascii_decoder3_3(imm[11: 8], imm_[23:16]);
   ascii_decoder ascii_decoder3_4(imm[15:12], imm_[31:24]);
   ascii_decoder ascii_decoder3_5(imm[19:16], imm_[39:32]);
   ascii_decoder ascii_decoder3_6(imm[23:20], imm_[47:40]);
   ascii_decoder ascii_decoder3_7(imm[27:24], imm_[55:48]);
   ascii_decoder ascii_decoder3_8(imm[31:28], imm_[63:56]);

   ascii_decoder ascii_decoder4_1(RD[3 : 0], RD_[7:0]);
   ascii_decoder ascii_decoder4_2(RD[7 : 4], RD_[15:8]);
   ascii_decoder ascii_decoder4_3(RD[11: 8], RD_[23:16]);
   ascii_decoder ascii_decoder4_4(RD[15:12], RD_[31:24]);
   ascii_decoder ascii_decoder4_5(RD[19:16], RD_[39:32]);
   ascii_decoder ascii_decoder4_6(RD[23:20], RD_[47:40]);
   ascii_decoder ascii_decoder4_7(RD[27:24], RD_[55:48]);
   ascii_decoder ascii_decoder4_8(RD[31:28], RD_[63:56]);

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

    wire [2:0] funct3;
	assign funct3 = (R_type | I_type | S_type | B_type) ? funct3_ : 3'b000;
	
	wire [6:0] funct7;
	assign funct7 = (R_type)                            ? funct7_ : 7'b000000;
	
	//Instruction Type 

	// R-Type 
	wire R_type  = (opcode == 7'b0110011);                                 
    
    // I-Type
	wire I_type   = (opcode == 7'b1100111 | opcode == 7'b0000011 | opcode == 7'b0010011);

    // S-Type
	wire S_type = (opcode == 7'b0100011);

    // B-Type
	wire B_type  = (opcode == 7'b1100011);

	// U-Type 
	wire U_type = (opcode == 7'b0110111 | opcode == 7'b0010111);

    // J-Type
	wire J_type = (opcode == 7'b1101111);

    wire [31:0] imm;
	assign imm = (I_type) ? ({{20{instruction[31]}},instruction[31:20]}):
				 (S_type) ? ({{20{instruction[31]}},instruction[31:25],instruction[11:7]}):		
				 (B_type) ? ({{19{instruction[31]}},instruction[31],instruction[7],instruction[30:25],instruction[11:8],1'b0}):
				 (U_type) ? ({instruction[31:12],12'b0}):
				 (J_type) ? ({{11{instruction[31]}}, instruction[31],instruction[19:12],instruction[20],instruction[30:21],1'b0}):
				 32'b0;

	wire is_jalr  = (funct3 == 3'b000 & opcode == 7'b1100111);

                                                                                         // ASCII HEX
    assign hex_code = (R_type & funct3 == 3'b000 & funct7 == 7'b0000000)                ? 128'h41_44_44_00_52_31_00_2B_00_52_32_3A :  // is_add
	                  (R_type & funct3 == 3'b000 & funct7 == 7'b0100000)                ? 128'h53_55_42_00_52_31_00_2D_00_52_32_3A :  // is_sub
	                  (R_type & funct3 == 3'b100 & funct7 == 7'b0000000)                ? 128'h58_4F_52_00_52_31_00_5E_00_52_32_3A :  // is_xor
	                  (R_type & funct3 == 3'b110 & funct7 == 7'b0000000)                ? 128'h4F_52_00_52_31_00_7C_00_52_32_3A :  // is_or
	                  (R_type & funct3 == 3'b111 & funct7 == 7'b0000000)                ? 128'h41_4E_44_00_52_31_00_26_00_52_32_3A :  // is_and
	                  (R_type & funct3 == 3'b011 & funct7 == 7'b0000000)                ? 128'h53_4C_54_55_00_52_31_00_3C_00_2B_52_32 :  // is_sltu
	                  (R_type & funct3 == 3'b001 & funct7 == 7'b0000000)                ? 128'h53_4C_4C_00_52_31_3C_3C_00_52_32 :  // is_sll
	                  (R_type & funct3 == 3'b010 & funct7 == 7'b0000000)                ? 128'h53_4C_54_00_52_31_00_3C_00_52_32 :  // is_slt
	                  (R_type & funct3 == 3'b101 & funct7 == 7'b0000000)                ? 128'h53_52_4C_00_52_31_00_3E_00_52_32 :  // is_srl
	                  (R_type & funct3 == 3'b101 & funct7 == 7'b0100000)                ? 128'h53_52_41_00_52_31_00_3E_3E_3E_00_52_32 :  // is_sra
	                  (funct3 == 3'b000 & opcode == 7'b1100111)                         ? 128'h4A_41_4C_52_50_43_2B_52_31_00_2B_00_49_4D_4D :  // is_jalr 
	                  (funct3 == 3'b000 & opcode == 7'b0000011)                         ? 128'h4C_42_00_38_62_69_74_73 :  // is_lb 
	                  (funct3 == 3'b001 & opcode == 7'b0000011)                         ? 128'h4C_48_00_31_36_62_69_74_73 :  // is_lh 
	                  (funct3 == 3'b010 & opcode == 7'b0000011)                         ? 128'h4C_57_00_33_32_62_69_74_73 :  // is_lw 
	                  (funct3 == 3'b100 & opcode == 7'b0000011)                         ? 128'h4C_42_55_00_2B_38_62_69_74_73:  // is_lbu 
	                  (funct3 == 3'b101 & opcode == 7'b0000011)                         ? 128'h4C_48_55_00_2B_31_36_62_69_74_73 :  // is_lhu 
	                  (funct3 == 3'b000 & opcode == 7'b0010011)                         ? 128'h41_44_44_49_00_52_31_00_2B_00_49_4D_4D :  // is_addi 
	                  (funct3 == 3'b010 & opcode == 7'b0010011)                         ? 128'h53_4C_54_49_00_52_31_00_3C_00_49_4D_4D :  // is_slti 
	                  (funct3 == 3'b011 & opcode == 7'b0010011)                         ? 128'h53_4C_54_49_55_00_52_31_00_3C_00_2B_49_4D_4D :  // is_sltiu 
	                  (funct3 == 3'b100 & opcode == 7'b0010011)                         ? 128'h58_4F_52_49_00_52_31_00_5E_00_49_4D_4D :  // is_xori 
	                  (funct3 == 3'b110 & opcode == 7'b0010011)                         ? 128'h4F_52_49_00_52_31_00_7C_00_49_4D_4D :  // is_ori 
	                  (funct3 == 3'b111 & opcode == 7'b0010011)                         ? 128'h41_4E_44_49_00_52_31_00_26_00_49_4D_4D :  // is_andi 
	                  (funct3 == 3'b001 & funct7 == 7'b0000000 & opcode == 7'b0010011)  ? 128'h53_4C_4C_49_00_52_31_00_3C_3C_00_49_4D_4D :  // is_slli
	                  (funct3 == 3'b101 & funct7 == 7'b0000000 & opcode == 7'b0010011)  ? 128'h53_52_4C_49_00_52_31_00_3E_3E_00_49_4D_4D :  // is_srli
	                  (funct3 == 3'b101 & funct7 == 7'b0100000 & opcode == 7'b0010011)  ? 128'h53_52_41_49_00_52_31_00_3E_3E_3E_00_49_4D_4D :  // is_srai
	                  (S_type & funct3 == 3'b010)                                       ? 128'h53_57_00_33_32_62_69_74_73 :  // is_sw
	                  (S_type & funct3 == 3'b000)                                       ? 128'h53_42_00_38_62_69_74_73 :  // is_sb
	                  (S_type & funct3 == 3'b001)                                       ? 128'h53_48_00_31_36_62_69_74_73 :  // is_sh
                      (B_type & funct3 == 3'b101)                                       ? 128'h42_47_45_00_52_31_00_3E_3D_00_52_32 :  // is_bge 
	                  (B_type & funct3 == 3'b000)                                       ? 128'h42_45_51_00_52_31_00_3D_3D_00_52_32 :  // is_beq 
	                  (B_type & funct3 == 3'b100)                                       ? 128'h42_4C_54_00_52_31_00_3C_00_52_32 :  // is_blt 
	                  (B_type & funct3 == 3'b001)                                       ? 128'h42_4E_45_00_52_31_00_21_3D_00_52_32 :  // is_bne 
	                  (B_type & funct3 == 3'b110)                                       ? 128'h42_4C_54_55_00_2B_52_31_00_3C_00_2B_52_32 :  // is_bltu
	                  (B_type & funct3 == 3'b111)                                       ? 128'h42_47_45_55_00_2B_52_31_00_3E_3D_00_2B_52_32 :  // is_bgeu
                      opcode == 7'b0010111                                              ? 128'h41_55_49_50_43 :  // is_auipc
	                  opcode == 7'b0110111                                              ? 128'h4C_55_49_00_49_4D_4D :  // is_lui
	                  (J_type)                                                          ? 128'h4A_41_4C_00_50_43_00_2B_00_49_4D_4D :  //  is_jal
                                                                                          128'h00;

endmodule


module ascii_decoder(
		input [3:0] value,
		output reg [7:0] ascii
);
	always @(value)
	begin
		case (value)
			4'h0 : ascii = 8'h30;
			4'h1 : ascii = 8'h31;
			4'h2 : ascii = 8'h32;
			4'h3 : ascii = 8'h33;
			4'h4 : ascii = 8'h34;
			4'h5 : ascii = 8'h35;
			4'h6 : ascii = 8'h36;
			4'h7 : ascii = 8'h37;
			4'h8 : ascii = 8'h38;
			4'h9 : ascii = 8'h39;
			4'hA : ascii = 8'h41;
			4'hB : ascii = 8'h42;
			4'hC : ascii = 8'h43;
			4'hD : ascii = 8'h44;
			4'hE : ascii = 8'h45;
			4'hF : ascii = 8'h46;
			default: ascii = 8'h00;
		endcase
	end
endmodule
