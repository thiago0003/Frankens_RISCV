/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */

//IMPORTED BLOCK:inverterC
module inverterC( 
A,
Q
); 

//-----------Input Ports--------------- 
input A;

//-----------Output Ports--------------- 
output Q; 

//-------------Code Start----------------- 
assign Q = ! A;

endmodule




//IMPORTED BLOCK:bus_to_wires
// Bloco separador de barramento de 8 bits para uso na ferramenta 
module bus_to_wires (in,out_0,out_1,out_2,out_3,out_4,out_5,out_6,out_7);

// Inputs e Outputs
input wire [7:0] in;
output wire out_0,out_1,out_2,out_3,out_4,out_5,out_6,out_7;

// Comportamento do circuito
assign out_0 = in[0];
assign out_1 = in[1];
assign out_2 = in[2];
assign out_3 = in[3];
assign out_4 = in[4];
assign out_5 = in[5];
assign out_6 = in[6];
assign out_7 = in[7];

endmodule




//IMPORTED BLOCK:one_hz_clock
`define clock_frequnecy 27_000_000
module one_hz_clock #(parameter DELAY = 1000)(input clk,            // clk input
								output reg out);  // output pin

  localparam TICKS = DELAY * (`clock_frequnecy / 2000);

  reg [26:0] counter = 0;
  
  initial out = 1;
  
    always @(posedge clk) begin
    	counter <= counter + 1'b1;
    	if (counter == TICKS) begin
    		out <= ~out;
    		counter <= 27'b0;
    	end
    end
endmodule




//IMPORTED BLOCK:screen
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

  assign pixelAddress = pixelCounter;

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



//IMPORTED BLOCK:textEngine
module textEngine (
    input clk,
    input [9:0] pixelAddress,
    input [7:0] charOutput,
    output [7:0] pixelData,
    output [5:0] charAddress
    
);
    reg [7:0] fontBuffer [1519:0];
    initial $readmemh("font.hex", fontBuffer);

    wire [2:0] columnAddress;
    wire topRow;

    reg [7:0] outputBuffer;
    wire [7:0] chosenChar;

    always @(posedge clk) begin
        outputBuffer <= fontBuffer[((chosenChar-8'd32) << 4) + (columnAddress << 1) + (topRow ? 0 : 1)];
    end 

    assign charAddress = {pixelAddress[9:8],pixelAddress[6:3]};
    assign columnAddress = pixelAddress[2:0];
    assign topRow = !pixelAddress[7];

    assign chosenChar = (charOutput >= 8'd32 && charOutput <= 8'd126) ? charOutput : 8'd32;
    assign pixelData = outputBuffer;
endmodule



//IMPORTED BLOCK:mux4_8
module mux4_8(clk, sinalA, sinalB, sinalC, sinalD, select, muxOut);
  // I/O Port Declaration
  input clk;
  input [7:0] sinalA, sinalB, sinalC, sinalD;
  input [1:0] select;
  output reg [7:0]muxOut;
  initial begin
    	muxOut = 8'b0;
  end
  // Case Block - Choosing the output
  always @(posedge clk) begin
    case (select)
      0 : muxOut <= sinalA;
      1 : muxOut <= sinalB;
      2 : muxOut <= sinalC;
      3 : muxOut <= sinalD;
    endcase
  end
endmodule



//IMPORTED BLOCK:stringbyte
module stringbyte(input clk, input mudar, input [127:0]strng,output reg[7:0]sbyte);
  reg [3:0]count= 4'd15;
  reg verificao = 1'b1;
  always @(posedge clk ) begin
    if( verificao != mudar) begin
      sbyte <= strng[8*count+:8];
	  count <= count - 1'b1;
      verificao <= mudar;
    end
  end  
endmodule



//IMPORTED BLOCK:bus_to_bus_4_5
module bus_to_bus_4_5 (in,out_45); 
  // Inputs e Outputs 
  input wire [7:0] in; 
  output wire [1:0] out_45;
  // Comportamento do circuito 
  assign out_45[0] = in[4];
  assign out_45[1] = in[5];
endmodule



// Automatically generated by ChipInventor Cloud EDA Tool - 2.1
// Careful: this file (hdl.v) will be automatically replaced when you ask
// to generate code from BLOCKS buttons.
module top (

  output wire sck1,
  output wire sda1,
  output wire cs1,
  output wire dc1,
  output wire res1,
  input wire clk,
  output reg [4:0] led

);

//Internal Wires
 wire w_1;
 wire w_2;
 wire [4:0] w_3;
 wire [4:0] w_4;
 wire [4:0] w_5;
 wire [31:0] w_6;
 wire [31:0] w_7;
 wire [31:0] w_9;
 wire w_12;
 wire [7:0] w_13;
 wire [9:0] w_14;
 wire w_15;
 wire w_16;
 wire [127:0] w_17;
 wire [7:0] w_18;
 wire [7:0] w_19;
 wire [7:0] w_23;
 wire [7:0] w_25;
 wire [7:0] w_26;
 wire [7:0] w_27;
 wire [1:0] w_28;
 wire [127:0] w_31;
 wire [127:0] w_32;
 wire [127:0] w_33;
 wire [31:0] w_34;
 wire [31:0] w_35;
 wire [31:0] w_37;
 wire [3:0] w_38;
 wire [31:0] w_39;
 wire w_40;
 wire [31:0] w_41;

//Instances os Modules
register blk219_2 (
         .clk (w_1),
         .reg_write (w_2),
         .reg_addr1 (w_3),
         .reg_addr2 (w_4),
         .addr (w_5),
         .write_reg (w_6),
         .rd1 (w_7),
         .rd2 (w_9)
     );

power_on_reset blk217_4 (
         .clk (w_1),
         .resetn (w_12)
     );

screen blk85_7 (
         .ioSclk (sck1),
         .ioSdin (sda1),
         .ioCs (cs1),
         .ioDc (dc1),
         .ioReset (res1),
         .clk (clk),
         .pixelData (w_13),
         .pixelAddress (w_14)
     );

inverterC blk5_21 (
         .A (w_12),
         .Q (w_15)
     );

stringbyte blk128_26 (
         .clk (clk),
         .mudar (w_16),
         .strng (w_17),
         .sbyte (w_18)
     );

bus_to_wires blk28_27 (
         .out_0 (w_16),
         .in (w_19)
     );

textEngine blk86_28 (
         .clk (clk),
         .pixelData (w_13),
         .pixelAddress (w_14),
         .charAddress (w_19),
         .charOutput (w_23)
     );

mux4_8 blk125_36 (
         .clk (clk),
         .sinalA (w_18),
         .muxOut (w_23),
         .sinalB (w_25),
         .sinalC (w_26),
         .sinalD (w_27),
         .select (w_28)
     );

bus_to_bus_4_5 blk132_38 (
         .in (w_19),
         .out_45 (w_28)
     );

one_hz_clock blk80_42 (
         .clk (clk),
         .out (w_1)
     );

stringbyte blk128_43 (
         .clk (clk),
         .mudar (w_16),
         .sbyte (w_25),
         .strng (w_31)
     );

stringbyte blk128_44 (
         .clk (clk),
         .mudar (w_16),
         .sbyte (w_27),
         .strng (w_32)
     );

stringbyte blk128_45 (
         .clk (clk),
         .mudar (w_16),
         .sbyte (w_26),
         .strng (w_33)
     );

imem blk218_50 (
         .pc (w_34),
         .instr (w_35)
     );

blockram blk216_51 (
         .clk (w_1),
         .addr (w_37),
         .be (w_38),
         .data_in (w_39),
         .we (w_40),
         .data_out (w_41)
     );

alu_decoder blk221_53 (
         .clk (clk),
         .R1 (w_7),
         .R2 (w_9),
         .data_out1 (w_17),
         .data_out2 (w_31),
         .data_out4 (w_32),
         .data_out3 (w_33),
         .instruction (w_35),
         .RD (w_5)
     );

franken_riscv blk220_54 (
         .reg_write_WB (w_2),
         .RS1 (w_3),
         .RS2 (w_4),
         .RD_WB (w_5),
         .write_reg_WB (w_6),
         .src1_Dec (w_7),
         .src2_Dec (w_9),
         .reset (w_15),
         .clk (w_1),
         .pc (w_34),
         .instruction (w_35),
         .alu_result_Exec (w_37),
         .byte_enable (w_38),
         .write_data (w_39),
         .mem_write_Mem (w_40),
         .read_data (w_41),
         .LEDS(led)
     );


endmodule
