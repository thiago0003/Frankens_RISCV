module dma(input              clk, clk2, 
           input       [23:0] pc, 
           input       [31:0] addr,
           input       [31:0] src,
           input              mem_write, mem_read,
           input       [3:0]  byte_enable,
           output      [31:0] read_data,
           output             CLK, CS_N, MOSI, 
           input              MISO,
           output  reg [31:0] instruction,
           output             SPIFlash_rbusy,
           input              uart_rx_0,
           output             uart_tx_0,
           output  [5:0]      io_led  
);  

    wire [29:0] mem_wordaddr = addr[31:2];
    //wire is_IO = is_IO_LED || is_IO_SPI ; // 
    assign read_data = is_IO_UART_RX ? {24'b0, read_data_rx} : read_data_RAM;  

	//------------------------------------- IO LED -------------------------------------------------//
    localparam IO_LEDS = 0;
	wire is_IO_LED = addr[23] && mem_write && mem_wordaddr[IO_LEDS];

	reg [5:0] LEDS;

	always @(posedge clk) begin
        if(is_IO_LED)
            LEDS <= ~src[5:0]; //dataIn[5:0];
	end

	assign io_led = {!LEDS[5], !LEDS[4], !LEDS[3], !LEDS[2], !LEDS[1], !LEDS[0]}; //! && addr[24] &&  && (addr[UART_TX_0] || addr[UART_RX_TX_0]);

    //------------------------------------- IO SPI -------------------------------------------------//
    
    wire is_IO_SPI  = pc[22];

    wire [23:0] addr_spi = pc[23:0];

    flash flash(clk2, is_IO_SPI, CLK, MISO, MOSI, CS_N, addr_spi, SPIFlash_rbusy, instruction);

    //------------------------------------- RAM -------------------------------------------------//
    wire [31:0] read_data_RAM;
    wire        mem_write_RAM = !is_IO_UART_TX && !is_IO_UART_RX && mem_write; //

  	blockram blockram(clk, mem_write_RAM, byte_enable, addr, src, read_data_RAM);

    // ------------------------------------ UART -------------------------------------------------//
    //Half Duplex 
    localparam UART_RX_0 = 4;
    localparam UART_TX_0 = 5;

    wire byteReady;
    wire [7:0] dataIn;
    wire is_IO_UART_RX = !(|addr[31:25]) && addr[24] && !(|addr[23:7]) && addr[UART_RX_0] && mem_read;

    uart_rx uart_reciver(clk2, uart_rx_0, byteReady, dataIn);
    
    // DMA BUFFER CIRCULAR RX 
    (* ram_style = "distributed" *) reg [7:0] dma_uar_rx[0:12];
    reg [3:0] count_rx;

    initial 
    begin
        count_rx = 0;
        dma_uar_rx[0] = 0; 
        dma_uar_rx[1] = 0;
        dma_uar_rx[2] = 0;
        dma_uar_rx[3] = 0;
        dma_uar_rx[4] = 0;
        dma_uar_rx[5] = 0;
        dma_uar_rx[6] = 0;
        dma_uar_rx[7] = 0;
        dma_uar_rx[8] = 0;
        dma_uar_rx[9] = 0;
        dma_uar_rx[10] = 0;
        dma_uar_rx[11] = 0;
        dma_uar_rx[12] = 0;
    end

    always @(posedge clk) begin
        if(byteReady) begin
            dma_uar_rx[count_rx] <= dataIn;
            count_rx <= count_rx + 1'd1; 
        end
    end

    wire [7:0] read_data_rx = dma_uar_rx[addr[4] ? (count_rx -1) : addr[3:0]];

    // UART TX
    wire is_IO_UART_TX = !(|addr[31:25]) && addr[24] && !(|addr[23:7]) && addr[UART_TX_0] && mem_write;
    (* ram_style = "distributed" *)  reg [7:0] dma_uart_tx[0:12];

    reg [3:0] count_tx;

    initial
        count_tx = 4'b0;

    always @(posedge clk2) begin
        if(is_IO_UART_TX)
        begin
            dma_uart_tx[count_tx] <= src[7:0];
            count_tx <= count_tx + 1'd1;
        end 
    end

    wire [3:0] addr_uart_tx;
    wire [7:0] data_tx = dma_uart_tx[addr_uart_tx];

    uart_tx uart_emiter(clk2, is_IO_UART_TX, data_tx, addr_uart_tx, uart_tx_0);
endmodule
