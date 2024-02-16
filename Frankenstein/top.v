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
	
	// Memoria 
    // imem imem(!clk, 1'b0, pc - 32'h00800001, 5'b0, 32'b0, instruction);

	// Banco de registradores 
	register regs(reg_write, RS1, RS2, RD, write_reg, src1, src2, !clk);

	wire [31:0] addr_dma = mem_write ? alu_result : pc;

	reg pc_write;

	always @(posedge clk) begin
		if(!mem_write) 
			pc_write <= 1'b1;
		else
			pc_write <= 0;

		if(!rbusy)
			instruction <= SPIFlash_rdata;
	end

	wire dma_write = pc_write || mem_write; 
	wire rbusy;

	dma dma(clk, addr_dma, write_data, dma_write, byte_enable, read_data, led, flashClk, flashCs, flashMosi, flashMiso, SPIFlash_rdata, rbusy);

	wire [127:0] out_decoder1, out_decoder2, out_decoder3, out_decoder4;

	alu_decoder alu_decoder(clk, instruction, src1, src2, 32'b0, out_decoder1, out_decoder2, out_decoder3, out_decoder4);

	wire [7:0] sbyte1, sbyte2, sbyte3, sbyte4, muxOut, pixelData;
	wire mudar;
	wire [1:0] select;
	wire [5:0] charAddress;
	wire [9:0] pixelAddress;

	stringbyte stringbyte1(clk, mudar, out_decoder1, sbyte1);
	stringbyte stringbyte2(clk, mudar, out_decoder2, sbyte2);
	stringbyte stringbyte3(clk, mudar, out_decoder3, sbyte3);
	stringbyte stringbyte4(clk, mudar, out_decoder4, sbyte4);

	bus_to_wires bus_to_wires(
		.in(charAddress),
		.out_0(mudar)
	);

	bus_to_bus_4_5 bus_to_bus_4_5(charAddress, select);

	mux4_8 mux4_8(clk, sbyte1, sbyte2, sbyte3, sbyte4, select, muxOut);

	textEngine textEngine(.clk(clk), 
						  .pixelAddress(pixelAddress), 
						  .charOutput(muxOut), 
						  .pixelData(pixelData), 
						  .charAddress(charAddress));

	screen screen(.clk(clk), 
				  .pixelData(pixelData), 
				  .ioSclk(sck1), 
				  .ioSdin(sda1), 
				  .ioCs(cs1), 
				  .ioDc(dc1), 
				  .ioReset(res1), 
				  .pixelAddress(pixelAddress));

endmodule
