/* verilator lint_off UNUSEDSIGNAL */

module dma(input              clk, rst,
           input       [23:0] mem_pc, 
           input       [31:0] mem_addr,
           input       [31:0] mem_scr,
           input              mem_write, mem_read,
           input       [3:0]  byte_enable,
           output      [31:0] read_data,
           output             spi_clk, spi_cs_n, spi_mosi, 
           input              spi_miso,
           output  reg [31:0] instruction,
           output             SPIFlash_rbusy,
           input              uart_rx_0,
           output             uart_tx_0,
           input              spi_miso_master,
           output             spi_mosi_master, spi_clk_master,
           output  [5:0]      io_led  
);  

    // Declara STALL para ambos os SPI enquanto o dado não chega 
    assign SPIFlash_rbusy = SPI_Memory_rbusy || spi_miso_ready;

    assign read_data = is_IO_UART_RX ? {24'b0, read_data_rx} : 
                       (is_IO_SPI_RECIVED ? {24'b0, data_spi_master} : read_data_RAM);  

	//------------------------------------- IO LED -------------------------------------------------//
	wire is_IO_LED = !(|mem_addr[31:24]) && mem_addr[23] && !(|mem_addr[22:7]) && mem_write;

	reg [5:0] LEDS;

	always @(posedge clk) begin
        if(!rst)
            LEDS <= 6'b0;
        else if(is_IO_LED)
            LEDS <= mem_scr[5:0];
	end

	assign io_led = {clk, !LEDS[4], !LEDS[3],!LEDS[2],!LEDS[1],!LEDS[0]};

    //------------------------------------- Instruction SPI -------------------------------------------------//
    
    wire is_IO_SPI  = mem_pc[22];
    wire SPI_Memory_rbusy; 

    flash flash(clk, is_IO_SPI, spi_clk, spi_miso, spi_mosi, spi_cs_n, mem_pc, SPI_Memory_rbusy, instruction);

    //------------------------------------- RAM -------------------------------------------------//
    wire [31:0] read_data_RAM;
    wire        mem_write_RAM = !is_IO_UART_TX && !is_IO_UART_RX && mem_write; //

  	blockram blockram(clk, mem_write_RAM, byte_enable, mem_addr, mem_scr, read_data_RAM);

    // ------------------------------------ UART -------------------------------------------------//
    localparam UART_RX_0 = 5;
    localparam UART_TX_0 = 6;

    wire byteReady;
    wire [7:0] dataIn;
    wire is_IO_UART_RX = !(|mem_addr[31:25]) && mem_addr[24] && !(|mem_addr[23:7]) && mem_addr[UART_RX_0] && mem_read;

    uart_rx uart_reciver(clk, uart_rx_0, byteReady, dataIn);
    
    // DMA BUFFER CIRCULAR RX 
    (* ram_style = "distributed" *) reg [7:0] dma_uar_rx[0:12];
    reg [3:0] count_rx;

    always @(posedge clk) begin
        if(!rst)
            count_rx <= 0;

        if(byteReady) begin
            dma_uar_rx[count_rx] <= dataIn;
            count_rx <= count_rx + 1'd1; 
        end
    end

    wire [3:0] spi_add = mem_addr[4] ? (count_rx -1) : mem_addr[3:0];
    wire [7:0] read_data_rx = dma_uar_rx[spi_add];

    // UART TX
    wire is_IO_UART_TX = !(|mem_addr[31:25]) && mem_addr[24] && !(|mem_addr[23:7]) && mem_addr[UART_TX_0] && mem_write;
    (* ram_style = "distributed" *)  reg [7:0] dma_uart_tx[0:12];

    reg [3:0] count_tx;

    always @(posedge clk) begin
        if(is_IO_UART_TX)
        begin
            dma_uart_tx[count_tx] <= mem_scr[7:0];
            count_tx <= count_tx + 1'd1;
        end 

        if(!rst)
            count_tx <= 4'b0;

    end

    wire [3:0] addr_uart_tx;
    wire [7:0] data_tx = dma_uart_tx[addr_uart_tx];

    uart_tx uart_emiter(clk, is_IO_UART_TX, data_tx, addr_uart_tx, uart_tx_0);

    // ------------------------------------ SPI -------------------------------------------------//
    localparam SPI_MASTER = 5;
    
    reg [7:0] dma_spi_recived_master, dma_spi_send_master;
    
    wire is_IO_SPI_SEND = !(|mem_addr[31:26]) && mem_addr[25] && !(|mem_addr[24:7]) && mem_addr[SPI_MASTER] && mem_write;
    wire is_IO_SPI_RECIVED = !(|mem_addr[31:26]) && mem_addr[25] && !(|mem_addr[24:7]) && mem_addr[SPI_MASTER] && mem_read;
    
    reg spi_tx_ready, spi_miso_ready;

    always @(posedge clk) begin
        if(spi_miso_ready)
            dma_spi_recived_master <= recived_spi_master;

        if(spi_tx_ready)
            dma_spi_send_master <= mem_scr[7:0];
    end

    wire [7:0] data_spi_master = dma_spi_recived_master;

    wire [7:0] send_spi_master = dma_spi_send_master;
    wire [7:0] recived_spi_master;

    spi_master SPI_Master(
        .i_Rst_L(!rst),
        .i_Clk(clk),

        //MOSI
        .i_TX_Byte(send_spi_master), // Data buffser
        .i_TX_DV(is_IO_SPI_SEND), // Data Valid ????
        .o_TX_Ready(spi_tx_ready), // Transmit Ready for next Byte
        
        //MSIO
        .o_RX_DV(spi_miso_ready), //Data Valid pulse
        .o_RX_Byte(recived_spi_master), // Byte recived
        
        //Pinout 
        .o_SPI_Clk(spi_clk_master), 
        .i_SPI_MISO(spi_miso_master),
        .o_SPI_MOSI(spi_mosi_master)
    );
endmodule
