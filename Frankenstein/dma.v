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
           output             SPIFlash_rbusy
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
        // else if(!SPIFlash_rbusy)
		// 	LEDS <= {SPIFlash_rdata[4:0], !SPIFlash_rbusy};
	end

	assign io_led = LEDS; //LEDS

    //------------------------------------- IO SPI -------------------------------------------------//
    
    localparam IO_SPI = 0;

    wire is_IO_SPI  = addr[22] && mem_write  && addr[IO_SPI];
    // wire SPIFlash_rbusy;
    reg [31:0] SPI_addr;
    reg [31:0] SPIFlash_rdata = 32'hf;
    wire [31:0] SPI_rdata;

    wire [21:0] addr_spi = mem_wordaddr[19:0] << 2;

    flash flash(clk, is_IO_SPI, CLK, MISO, MOSI, CS_N, addr_spi, SPIFlash_rbusy, SPI_rdata);

    always @(posedge clk) begin

        if(is_IO_SPI && !SPIFlash_rbusy) 
        begin
            SPIFlash_rdata <= SPI_rdata;
        end

        SPI_addr <= addr_spi;
    end

    assign rdata = SPIFlash_rdata;

    //------------------------------------- RAM -------------------------------------------------//
  	blockram blockram(clk, mem_write && !is_IO, byte_enable, addr, src, read_data);

endmodule
