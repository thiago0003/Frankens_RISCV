/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */

module top (
        input        clk,
        output [5:0] led,
		output 		 flashClk,
		output 		 flashCs,
		output 		 flashMosi,
		input 		 flashMiso,
		output wire  sck1,
		output wire  sda1,
		output wire  cs1,
		output wire  dc1,
		output wire  res1
   );

	wire [31:0]  pc, read_data, write_data, alu_result, write_reg, src1, src2, SPIFlash_rdata;
	reg  [31:0]  instruction;
	wire         mem_write, reg_write, TXD, RXD, is_IO;
	wire [3:0]   byte_enable;
	wire [4:0]   RS1, RS2, RD;
	wire         one_hz;		

	one_hz_clock one_hz_clock(clk, one_hz);

	wire resetn;
  	power_on_reset power_on_reset(one_hz, resetn);


	// CPU
	franken_riscv franken_riscv(one_hz, !resetn, pc, instruction, mem_write, byte_enable, alu_result, write_data, read_data, reg_write, RS1, RS2, RD, write_reg, src1, src2, RXD, TXD, rbusy);
	
	// Banco de registradores 
	register regs(reg_write, RS1, RS2, RD, write_reg, src1, src2, !clk);

	wire [31:0] addr_dma = mem_write ? alu_result : pc;

	reg pc_write;

	always @(posedge clk) begin
		if(!rbusy)
			instruction <= SPIFlash_rdata;
	end


	wire rbusy;

	dma dma(clk, addr_dma, write_data, mem_write, byte_enable, read_data, led, flashClk, flashCs, flashMosi, flashMiso, SPIFlash_rdata, rbusy, sck1, sda1, cs1, dc1, res1);

endmodule
