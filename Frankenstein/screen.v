
module screen
#(
  parameter STARTUP_WAIT = 32'd10000000
)
(
    input clk,
    output ioSclk,
    output ioSdin,
    output ioCs,
    output ioDc,
    output ioReset,
    output [9:0] pixelAddress,
    input [7:0] pixelData
);

  localparam STATE_INIT_POWER = 3'd0;
  localparam STATE_LOAD_INIT_CMD = 3'd1;
  localparam STATE_SEND = 3'd2;
  localparam STATE_CHECK_FINISHED_INIT = 3'd3;
  localparam STATE_LOAD_DATA = 3'd4;
  localparam STATE_START = 3'd7;

  reg [32:0] counter = 0;
  reg [2:0] state = STATE_START;

  reg dc = 1;
  reg sclk = 1;
  reg sdin = 0;
  reg reset = 1;
  reg cs = 0;

  reg [7:0] dataToSend = 0;
  reg [2:0] bitNumber = 0;  
  reg [9:0] pixelCounter = 0;

  localparam SETUP_INSTRUCTIONS = 23;
  reg [(SETUP_INSTRUCTIONS*8)-1'b1:0] startupCommands = {
    8'hAE,  // display off

    8'h81,  // contast value to 0x7F according to datasheet
    8'h7F,  

    8'hA6,  // normal screen mode (not inverted)

    8'h20,  // horizontal addressing mode
    8'h00,  

    8'hC8,  // normal scan direction

    8'h40,  // first line to start scanning from

    8'hA1,  // address 0 is segment 0

    8'hA8,  // mux ratio
    8'h3f,  // 63 (64 -1)

    8'hD3,  // display offset
    8'h00,  // no offset

    8'hD5,  // clock divide ratio
    8'h80,  // set to default ratio/osc frequency

    8'hD9,  // set precharge
    8'h22,  // switch precharge to 0x22 default

    8'hDB,  // vcom deselect level
    8'h20,  //  0x20 

    8'h8D,  // charge pump config
    8'h14,  // enable charge pump

    8'hA4,  // resume RAM content

    8'hAF   // display on
  };
  reg [7:0] commandIndex = SETUP_INSTRUCTIONS * 8;

  assign ioSclk = sclk;
  assign ioSdin = sdin;
  assign ioDc = dc;
  assign ioReset = reset;
  assign ioCs = cs;

  // reg [9:0] CounterX = 0, CounterY = 0;

  // wire CounterXmaxed = (CounterX == 896); // 16 + 48 + 96 + 640 // 1578
  // wire CounterYmaxed = (CounterY == 64); // 10 +  2 + 33 + 480

  // wire [31:0] row;
  // wire [31:0] col;

  // assign col = (CounterX >> 6); //14
  // assign row = (CounterY >> 3); // 8

    // assign vaddr =  // 320 col = 2^8 + 2^6

  assign pixelAddress = pixelCounter >> 3; //  col + (row<<7);

  always @(posedge clk) begin
    case (state)
      STATE_START: begin
        counter <= 0;
        reset <= 1;
        dc <= 1;
        sclk <= 1;
        sdin <= 0;
        cs <= 0;
        state <= STATE_INIT_POWER;

      end
      STATE_INIT_POWER: begin
        counter <= counter + 1;
        if (counter < STARTUP_WAIT*2)
          reset <= 1;
        else if (counter < STARTUP_WAIT * 3)
          reset <= 0;
        else if (counter < STARTUP_WAIT * 4)
          reset <= 1;
        else begin
          state <= STATE_LOAD_INIT_CMD;
          counter <= 33'b0;
        end
      end
      STATE_LOAD_INIT_CMD: begin
        dc <= 0;
        dataToSend <= startupCommands[(commandIndex-1)-:8'd8];
        state <= STATE_SEND;
        bitNumber <= 3'd7;
        cs <= 0;
        commandIndex <= commandIndex - 8'd8;
      end
      STATE_SEND: begin
        counter <= counter +32'd1;
        if(counter[1] == 1'b0) begin
          sclk <= 0;
          sdin <= dataToSend[bitNumber];
        end
        else  if(counter[1:0] == 2'b10) begin
          sclk <= 1;
        end
        else begin
          if(bitNumber == 0) begin
            state <= STATE_CHECK_FINISHED_INIT;
            counter <= 33'd0;
          end else
            bitNumber <= bitNumber - 1;
        end                    
      end
      
      STATE_CHECK_FINISHED_INIT: begin
          cs <= 1;
          if (commandIndex == 0) begin
            state <= STATE_LOAD_DATA; 
          end
          else
            state <= STATE_LOAD_INIT_CMD; 
      end
      STATE_LOAD_DATA: begin
        pixelCounter <= pixelCounter + 1'b1;

        // if (CounterXmaxed)
        //   CounterX <= 10'b0;
        // else
        //   CounterX <= CounterX + 1'b1;
        
        // if (CounterXmaxed)
        //   if(CounterYmaxed)
        //     CounterY <= 10'b0;
        //   else
        //     CounterY <= CounterY + 1'b1;

        cs <= 0;
        dc <= 1;
        bitNumber <= 3'd7;
        state <= STATE_SEND;
        dataToSend <= pixelData;
      end
      default:
        state <= STATE_INIT_POWER;
        
    endcase
  end
endmodule
