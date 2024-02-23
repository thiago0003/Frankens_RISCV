/* verilator lint_off WIDTHEXPAND */
module uart_tx #( 
                 parameter DELAY_FRAMES = 234,
                 parameter MEMORY_LENGTH = 12
                ) // 27,000,000 (27Mhz) / 115200 Baud rate
                (
                    input clk, 
                    input uart_enable,
                    input [7:0] data,
                    output reg [3:0] addr,
                    output uart_tx
                );

localparam TX_STATE_IDLE = 0;
localparam TX_STATE_START_BIT = 1;
localparam TX_STATE_WRITE = 2;
localparam TX_STATE_STOP_BIT = 3;
localparam TX_STATE_DEBOUNCE = 4;

reg [3:0] txState = 0;
reg [24:0] txCounter = 0;
reg txPinRegister = 1;
reg [2:0] txBitNumber = 0;

assign uart_tx = txPinRegister;

always @(posedge clk) begin
    case (txState)
        TX_STATE_IDLE: begin
            if (uart_enable == 1) begin
                txState <= TX_STATE_START_BIT;
                txCounter <= 0;
                addr <= 0;
            end
            else begin
                txPinRegister <= 1;
            end
        end 
        TX_STATE_START_BIT: begin
            txPinRegister <= 0;
            if ((txCounter + 1) == DELAY_FRAMES) begin
                txState <= TX_STATE_WRITE;
                txBitNumber <= 0;
                txCounter <= 0;
            end else 
                txCounter <= txCounter + 1;
        end
        TX_STATE_WRITE: begin
            txPinRegister <= data[txBitNumber];
            if ((txCounter + 1) == DELAY_FRAMES) begin
                if (txBitNumber == 3'b111) begin
                    txState <= TX_STATE_STOP_BIT;
                end else begin
                    txState <= TX_STATE_WRITE;
                    txBitNumber <= txBitNumber + 1;
                end
                txCounter <= 0;
            end else 
                txCounter <= txCounter + 1;
        end
        TX_STATE_STOP_BIT: begin
            txPinRegister <= 1;
            if ((txCounter + 1) == DELAY_FRAMES) begin
                if (addr == MEMORY_LENGTH - 1) begin
                    txState <= TX_STATE_DEBOUNCE;
                end else begin
                    addr <= addr + 1;
                    txState <= TX_STATE_START_BIT;
                end
                txCounter <= 0;
            end else 
                txCounter <= txCounter + 1;
        end
        TX_STATE_DEBOUNCE: begin
            if (txCounter == 23'b111111111111111111) begin
                if (uart_enable == 0) 
                    txState <= TX_STATE_IDLE;
            end else
                txCounter <= txCounter + 1;
        end
    endcase      
end


endmodule
