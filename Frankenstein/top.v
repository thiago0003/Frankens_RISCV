
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */

module top (
   input clk 
   );

	wire [31:0]  pc, instruction, read_data, write_data, alu_result, write_reg, src1, src2;
	wire         mem_write, reg_write, TXD, RXD, oce;
	wire [3:0]   byte_enable;
	wire [4:0]   RS1, RS2, RD;
	wire [127:0] out_decoder1, out_decoder2, out_decoder3, out_decoder4;
	reg 		 clk_div1, clk_div2, clk_div3, clk_div4;

	assign RXD = 1'b0;

	always@(posedge clk)
		clk_div1 <= ~clk_div1; // Div 1
	
	always@(posedge clk_div1)
		clk_div2 <= ~clk_div2; // Div 2

	always@(posedge clk_div2)
		clk_div3 <= ~clk_div3; // Div 3

	always@(posedge clk_div3)
		clk_div4 <= ~clk_div4; // Div 4


	wire resetn;
  	power_on_reset power_on_reset(clk, resetn);

	// CPU
	franken_riscv franken_riscv(clk_div4, !resetn, pc, instruction, mem_write, byte_enable, alu_result, write_data, read_data, reg_write, RS1, RS2, RD, write_reg, src1, src2, RXD, TXD);
	
	// Memoria 
    imem imem(!clk, 1'b0, pc, 5'b0, 32'b0, instruction);
    // dmem dmem(CLOCK_50, mem_write, byte_enable, alu_result, addr_vga, write_data, read_data, read_data_vga);
  	blockram blockram(alu_result, byte_enable, write_data, mem_write, clk, read_data);

	wire rd_req, wr_req;
	reg data_valid;
	// wire [14:0] wr_addr

	memory memory (clk, resetn, rd_req, alu_result, read_data, data_valid, wr_req, alu_result, write_data);

	// Banco de registradores 
	register regs(!clk, reg_write, RS1, RS2, RD, write_reg, src1, src2);

	alu_decoder alu_decoder(clk, instruction, RS1, RS2, write_reg, out_decoder1, out_decoder2, out_decoder3, out_decoder4);

endmodule
