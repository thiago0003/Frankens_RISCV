/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */
/* verilator lint_off PINMISSING */

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
		output wire  res1,
		output wire  uartTx,
		input  wire  uartRx
   );

	wire [31:0]  pc, read_data, write_data, alu_result, write_reg, src1, src2;
	reg  [31:0]  instruction, instruction_;
	wire         mem_write, mem_read, reg_write, TXD, RXD, rbusy;
	wire [3:0]   byte_enable;
	wire [4:0]   RS1, RS2, RD;
	reg          clk_div_one;		

	one_hz_clock one_hz(clk, clk_div_one);


	wire resetn;
  	power_on_reset power_on_reset(clk_div_one, resetn);

	// CPU
	franken_riscv franken_riscv(
		.clk(clk_div_one),
		.reset(!resetn),
		.rbusy(rbusy),
		.read_data(read_data),
		.instruction(instruction),
		.src1_data_DEC(src1),
		.src2_data_DEC(src2),
		.RS1_data(RS1),
		.RS2_data(RS2),
		.reg_data_WB(write_reg),
		.alu_result_MEM(alu_result),
		.mem_write_enable_MEM(mem_write),
		.mem_read_enable_MEM(mem_read),
		.reg_write_enable_WB(reg_write),
		.byte_enable(byte_enable),
		.addr_RD_WB(RD),
		.pc(pc),
		.write_data_MEM(write_data));
	
	// Memoria 
    // imem imem(!one_hz, 1'b0, pc, 5'b0, 32'b0, instruction);

	// Banco de registradores 
	register regs(reg_write, RS1, RS2, RD, write_reg, src1, src2, clk_div_one);

	dma dma(!clk_div_one, clk, pc, alu_result, write_data, mem_write, mem_read, byte_enable, read_data, flashClk, flashCs, flashMosi, flashMiso, instruction, rbusy, uartRx, uartTx, led);
endmodule
