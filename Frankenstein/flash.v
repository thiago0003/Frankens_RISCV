/* verilator lint_off CASEINCOMPLETE */

module flash
#(
  parameter STARTUP_WAIT = 32'd10000000
)
(
    input clk,
    input rst,
    output reg flashClk = 0,
    input flashMiso,
    output reg flashMosi = 0,
    output reg flashCs = 1,
    input [23:0] readAddress,
    output reg dataReady = 0,
    output reg [31:0] dataIn
);

  // reg [23:0] readAddress = 0;
  reg [7:0] command = 8'h03;
  reg [7:0] currentByteOut = 0;
  reg [3:0] currentByteNum = 0;
  // reg [31:0] dataIn = 0;
  // reg [255:0] dataInBuffer = 0;

  localparam STATE_INIT_POWER = 3'd0;
  localparam STATE_LOAD_CMD_TO_SEND = 3'd1;
  localparam STATE_SEND = 3'd2;
  localparam STATE_LOAD_ADDRESS_TO_SEND = 3'd3;
  localparam STATE_READ_DATA = 3'd4;

  reg [23:0] dataToSend = 0;
  reg [8:0] bitsToSend = 0;

  reg [31:0] counter = 0;
  reg [2:0] state = STATE_INIT_POWER;
  reg [2:0] returnState = 0;

  always @(posedge clk) begin
    case (state)
      STATE_INIT_POWER: begin
        if (counter > STARTUP_WAIT && rst) begin
          state <= STATE_LOAD_CMD_TO_SEND;
          counter <= 32'b0;
          dataReady <= 0;
          currentByteNum <= 0;
          currentByteOut <= 0;
        end
        else
          counter <= counter + 1;
      end
      STATE_LOAD_CMD_TO_SEND: begin
          flashCs <= 0;
          dataToSend[23-:8] <= command;
          bitsToSend <= 8;
          state <= STATE_SEND;
          returnState <= STATE_LOAD_ADDRESS_TO_SEND;
      end
      STATE_SEND: begin
        if (counter == 32'd0) begin
          flashClk <= 0;
          flashMosi <= dataToSend[23];
          dataToSend <= {dataToSend[22:0],1'b0};
          bitsToSend <= bitsToSend - 1;
          counter <= 1;
        end
        else begin
          counter <= 32'd0;
          flashClk <= 1;
          if (bitsToSend == 0)
            state <= returnState;
        end
      end
      STATE_LOAD_ADDRESS_TO_SEND: begin
        dataToSend <= readAddress;
        bitsToSend <= 24;
        state <= STATE_SEND;
        returnState <= STATE_READ_DATA;
        currentByteNum <= 0;
      end
      STATE_READ_DATA: begin
        if (counter[0] == 1'd0) begin
          flashClk <= 0;
          counter <= counter + 1;
          if (counter[3:0] == 0 && counter > 0) begin
            if(currentByteNum == 0) dataIn[7:0] <= currentByteOut;
            if(currentByteNum == 1) dataIn[15:8] <= currentByteOut;
            if(currentByteNum == 2) dataIn[23:16] <= currentByteOut;
            if(currentByteNum == 3) dataIn[31:24] <= currentByteOut;

            currentByteNum <= currentByteNum + 1;
            
            if (currentByteNum == 3) begin
              state <= STATE_INIT_POWER;
              dataReady <= 1;
              flashCs <= 1;
              counter <= STARTUP_WAIT;
            end
          end
        end
        else begin
          flashClk <= 1;
          currentByteOut <= {currentByteOut[6:0], flashMiso};
          counter <= counter + 1;
        end
      end
    endcase
  end

endmodule
