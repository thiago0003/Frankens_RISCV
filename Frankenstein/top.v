/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSEDSIGNAL */
module top (
        input        	 clk,
        output reg [5:0] led,
		output 		 flashClk,
		output 		 flashCs,
		output 		 flashMosi,
		input 		 flashMiso,
		output wire  uartTx,
		input  wire  uartRx
   );

	wire [31:0]  pc, read_data, write_data, alu_result, write_reg, src1, src2;
	reg  [31:0]  instruction, instruction_;
	wire         mem_write, mem_read, reg_write, rbusy;
	wire [3:0]   byte_enable;
	wire [4:0]   RS1, RS2, RD;
	wire  clk_div_one;		
	one_hz_clock one_hz(clk, clk_div_one);

	wire resetn;
  	power_on_reset power_on_reset(clk_div_one, resetn);

	// CPU
	franken_riscv franken_riscv(
		.clk(clk_div_one),
		.reset(resetn),
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
		.write_data_MEM(write_data)
	);
	
	// Memoria 
    // imem imem(!clk, 1'b0, pc, 32'b0, 32'b0, instruction);

	// Banco de registradores 
	register regs(
		.enable_reg_write(reg_write), 
		.reg_addr1(RS1), 
		.reg_addr2(RS2), 
		.addr_write(RD), 
		.write_data(write_reg), 
		.rd1_data(src1), 
		.rd2_data(src2), 
		.clk(clk),
		.reset(resetn)
		);

	dma dma(
	.clk(clk),
	.rst(resetn),
	.mem_pc(pc[23:0]), 
	.mem_addr(alu_result), 
	.mem_scr(write_data), 
	.mem_write(mem_write), 
	.mem_read(mem_read), 
	.byte_enable(byte_enable), 
	.read_data(read_data), 
	.spi_clk(flashClk), 
	.spi_cs_n(flashCs), 
	.spi_mosi(flashMosi), 
	.spi_miso(flashMiso), 
	.instruction(instruction), 
	.SPIFlash_rbusy(rbusy), 
	.uart_rx_0(uartRx), 
	.uart_tx_0(uartTx),
	.io_led(led));
endmodule
