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
        //    input              uart_rx//,
           output             uart_tx
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

	assign io_led = data_tx[5:0]; //LEDS

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
  	blockram blockram(clk, mem_write, byte_enable, addr, src, read_data);

    // ------------------------------------ UART -------------------------------------------------//
    // localparam UART_RX_0 = 4;
    localparam UART_TX_0 = 5;
    
    // reg byteReady;
    // reg [7:0] dataIn;
    // wire is_IO_UART_RX = addr[24] && addr[UART_RX_0];

    // uart_rx uart_reciver(clk, uart_rx, byteReady, dataIn);
    
    // // DMA BUFFER CIRCULAR RX 
    // (* ram_style = "distributed" *) reg [7:0] dma_uar_rx[0:12];
    // reg [3:0] count_rx;

    // always @(posedge clk) begin
    //     if(byteReady) begin
    //         dma_uar_rx[count_rx] <= dataIn;
    //         count_rx <= count_rx + 1'd1; 
    //     end
    // end

    // wire [7:0] read_data_rx = dma_uar_rx[addr[3:0]];

    // UART TX
    wire is_IO_UART_TX = addr[24] && addr[UART_TX_0];
    (* ram_style = "distributed" *)  reg [7:0] dma_uar_tx[0:12];

    reg [3:0] count_tx;

    always @(posedge clk) begin
        if(is_IO_UART_TX)
        begin
            dma_uar_tx[count_tx] <= src[7:0];
            count_tx <= count_tx + 1'd1; 
        end
    end

    wire [3:0] addr_uart_tx;
    wire [7:0] data_tx = dma_uar_tx[addr_uart_tx];

    uart_tx uart_emiter(clk, is_IO_UART_TX, data_tx, addr_uart_tx, uart_tx);

endmodule
