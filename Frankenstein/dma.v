/* verilator lint_off MULTITOP */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off PINMISSING */
/* verilator lint_off WIDTHEXPAND */

module dma(input              clk,
           input       [31:0] addr,
           input       [31:0] src,
           input              mem_write,
           input       [3:0]  byte_enable,
           output      [31:0] read_data,
           output      [5:0]  io_led,
           output             CLK, CS_N, MOSI, 
           input              MISO,
           output      [31:0] rdata,
           output             SPIFlash_rbusy,
           output wire  sck1,
           output wire  sda1,
           output wire  cs1,
           output wire  dc1,
           output wire  res1
);  

    wire [29:0] mem_wordaddr = addr[31:2];
    wire is_IO = is_IO_LED || is_IO_SPI;


	//------------------------------------- IO LED -------------------------------------------------//
    localparam IO_LEDS = 0;
	wire is_IO_LED = addr[23] && mem_write && mem_wordaddr[IO_LEDS];

	reg [5:0] LEDS;

	always @(posedge clk) begin
		if(is_IO_LED)
			LEDS <= ~src[5:0];
	end

	assign io_led = {LEDS[4:0], is_IO_LED}; //LEDS

    //------------------------------------- IO SPI -------------------------------------------------//
    localparam IO_SPI = 0;

    wire is_IO_SPI  = addr[22] && addr[IO_SPI];
    // wire SPIFlash_rbusy;
    reg [31:0] SPI_addr;
    reg [31:0] SPIFlash_rdata = 32'hf;
    wire [31:0] SPI_rdata;

    wire [21:0] addr_spi = mem_wordaddr[19:0] << 2;

    flash flash(clk, is_IO_SPI, CLK, MISO, MOSI, CS_N, addr_spi, SPIFlash_rbusy, rdata);


    //------------------------------------- RAM -------------------------------------------------//
  	blockram blockram(clk, mem_write, byte_enable, addr[8:0], pixel_dataAddress, src, read_data, pixel_out);

    wire [9:0] pixel_dataAddress;
    reg [9:0] CounterX = 0, CounterY = 0;
    wire CounterXmaxed = (CounterX == 16); // 16 + 48 + 96 + 640
    wire CounterYmaxed = (CounterY == 4); // 10 +  2 + 33 + 480
    wire [31:0] row;
    wire [31:0] col;

    always @(posedge clk)
    begin
        if (CounterXmaxed)
        CounterX <= 10'b0;
        else
        CounterX <= CounterX + 1'b1;
        
        if (CounterXmaxed)
        if(CounterYmaxed)
            CounterY <= 10'b0;
        else
            CounterY <= CounterY + 1'b1;
    end

    assign col = (CounterX>>1);
    assign row = (CounterY>>1);
    assign pixel_dataAddress = col + (row << 4);

    // wire [7:0] pixelData, pixel_screen;
    wire [31:0] pixel_out;
	// wire [9:0] pixelAddress;
    // wire [5:0] charAddress;

    // textEngine textEngine(clk, pixelAddress, pixelData, pixel_screen, charAddress);

	// assign pixelData = 	(pixelAddress[1:0] == 2'b00) ? pixel_out[7:0] :
	// 					(pixelAddress[1:0] == 2'b01) ? pixel_out[15:8] :
	// 					(pixelAddress[1:0] == 2'b01) ? pixel_out[23:16] : 
    //                                                   pixel_out[31:24];

	// screen screen(.clk(clk), 
	// 			  .pixelData(pixel_screen), 
	// 			  .ioSclk(sck1), 
	// 			  .ioSdin(sda1), 
	// 			  .ioCs(cs1), 
	// 			  .ioDc(dc1), 
	// 			  .ioReset(res1), 
	// 			  .pixelAddress(pixelAddress));


    wire [127:0] out_decoder1, out_decoder2, out_decoder3, out_decoder4;

    // always @(posedge clk)
    // begin
    //     if(col == 32'd0) out_decoder1[127:96] <= pixel_out; 
    //     if(col == 32'd1) out_decoder1[95:64] <= pixel_out; 
    //     if(col == 32'd2) out_decoder1[63:32] <= pixel_out; 
    //     if(col == 32'd3) out_decoder1[31:0] <= pixel_out; 
        
    //     // if(row[0]) begin
    //     //     if(col == 32'd0) out_decoder2[127:96] <= pixel_out; 
    //     //     if(col == 32'd1) out_decoder2[95:64] <= pixel_out; 
    //     //     if(col == 32'd2) out_decoder2[63:32] <= pixel_out; 
    //     //     if(col == 32'd3) out_decoder2[31:0] <= pixel_out; 
    //     // end
        
    //     // if(row[1:0] == 32'd2) begin
    //     //     if(col == 32'd0) out_decoder3[127:96] <= pixel_out; 
    //     //     if(col == 32'd1) out_decoder3[95:64] <= pixel_out; 
    //     //     if(col == 32'd2) out_decoder3[63:32] <= pixel_out; 
    //     //     if(col == 32'd3) out_decoder3[31:0] <= pixel_out; 
    //     // end
        
    //     // if(row[1:0] == 32'd3) begin
    //     //     if(col == 32'd0) out_decoder4[127:96] <= pixel_out; 
    //     //     if(col == 32'd1) out_decoder4[95:64] <= pixel_out; 
    //     //     if(col == 32'd2) out_decoder4[63:32] <= pixel_out; 
    //     //     if(col == 32'd3) out_decoder4[31:0] <= pixel_out; 
    //     // end
    // end


    //assign out_decoder1 = 128'h41_44_44_00_52_31_00_2B_00_52_32_3A; //!row[0] && col == 32'd0 ? {96'b0, pixel_out} :
                          //  (!row[0] && col == 32'd1 ? {64'b0, pixel_out, 32'b0} :
                          //      (!row[0] && col == 32'd2 ? {32'b0, pixel_out, 64'b0} :
                          //                                 {pixel_out, 96'b0})
                          //  );

	alu_decoder alu_decoder(clk, 32'b0, pixelAddress, pixel_out, 32'b0, out_decoder1, out_decoder2, out_decoder3, out_decoder4);

	wire [7:0] sbyte1, sbyte2, sbyte3, sbyte4, muxOut, pixelData;
	wire mudar;
	wire [1:0] select;
	wire [5:0] charAddress;
	wire [9:0] pixelAddress;

	stringbyte stringbyte1(clk, mudar, out_decoder1, sbyte1);
	stringbyte stringbyte2(clk, mudar, out_decoder1, sbyte2);
	stringbyte stringbyte3(clk, mudar, out_decoder1, sbyte3);
	stringbyte stringbyte4(clk, mudar, out_decoder1, sbyte4);

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
