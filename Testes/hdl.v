/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINNOCONNECT */
/* verilator lint_off PINMISSING */

/* verilator lint_off MULTITOP */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNUSEDPARAM */

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



//IMPORTED BLOCK:two_hz_clock
`define clock_frequnecy 27_000_000
module two_hz_clock #(parameter DELAY = 500)(clk, out);
	input clk;
	output reg out;

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



//IMPORTED BLOCK:blockram
module blockram #(
  parameter   BYTE_WIDTH = 8,
              ADDRESS_WIDTH = 32,
		      DEPTH = 1200,
		      BYTES = 4,
		      DATA_WIDTH_R = BYTE_WIDTH * BYTES
)
(	
	input [ADDRESS_WIDTH-1:0] addr,
	input [BYTES-1:0] be,
	input [DATA_WIDTH_R-1:0] data_in, 
	input we, clk,
	output [DATA_WIDTH_R-1:0] data_out);
	// 
	// model the RAM with two dimensional packed array
	reg [BYTE_WIDTH-1:0] ram[0:DEPTH-1][0:BYTES-1];

	reg [DATA_WIDTH_R-1:0] data_reg;

 // port A
	always@(posedge clk)
	begin
		if(we) begin
		   // edit this code if using other than four bytes per word
			if(be[0]) ram[addr[31:2]][0] <= data_in[ 7: 0];
			if(be[1]) ram[addr[31:2]][1] <= data_in[15: 8];
			if(be[2]) ram[addr[31:2]][2] <= data_in[23:16];
			if(be[3]) ram[addr[31:2]][3] <= data_in[31:24];
		end
		
      data_reg <= {ram[addr][3], ram[addr][2], ram[addr][1], ram[addr][0]};
	end

	assign data_out = data_reg;
endmodule




//IMPORTED BLOCK:power_on_reset
module power_on_reset(
  input clk, 
  output resetn);

  reg [2:0] q;
 
  always@(posedge clk)
       q <= {q,1'b1};

  assign resetn = &q;
endmodule



//IMPORTED BLOCK:imem
module imem( input  [31:0]  pc,
             output [31:0] instr
);

  reg [31:0] RAM[0:511]; 
  
  initial     
	begin
	RAM[0] =   32'h11000913;
	RAM[1] =   32'h00000493;
	RAM[2] =   32'h0880006f;
	RAM[3] =   32'h00000093;
	RAM[4] =   32'h0740006f;
	RAM[5] =   32'h012007b3;
	RAM[6] =   32'h0107d713;
	RAM[7] =   32'h012007b3;
	RAM[8] =   32'h00e7d793;
	RAM[9] =   32'h00f74733;
	RAM[10] =  32'h012007b3;
	RAM[11] =  32'h00d7d793;
	RAM[12] =  32'h00f74733;
	RAM[13] =  32'h012007b3;
	RAM[14] =  32'h00b7d793;
	RAM[15] =  32'h00f747b3;
	RAM[16] =  32'h0017f713;
	RAM[17] =  32'h012007b3;
	RAM[18] =  32'h00179793;
	RAM[19] =  32'h00f767b3;
	RAM[20] =  32'h00f00933;
	RAM[21] =  32'h0ff97713;
	RAM[22] =  32'h00509693;
	RAM[23] =  32'h00309793;
	RAM[24] =  32'h00f687b3;
	RAM[25] =  32'h00f487b3;
	RAM[26] =  32'h00177713;
	RAM[27] =  32'h0ff77713;
	RAM[28] =  32'h000006b7;
	RAM[29] =  32'h00068693;
	RAM[30] =  32'h00f687b3;
	RAM[31] =  32'h00e78023;
	RAM[32] =  32'h00108093;
	RAM[33] =  32'h01d00793;
	RAM[34] =  32'hf817d6e3;
	RAM[35] =  32'h00148493;
	RAM[36] =  32'h02700793;
	RAM[37] =  32'hf697dce3;
	RAM[38] =  32'h00000093;
	RAM[39] =  32'h04c0006f;
	RAM[40] =  32'h000007b7;
	RAM[41] =  32'h00078793;
	RAM[42] =  32'h001787b3;
	RAM[43] =  32'h0007c703;
	RAM[44] =  32'h000007b7;
	RAM[45] =  32'h52878793;
	RAM[46] =  32'h001787b3;
	RAM[47] =  32'h00e78023;
	RAM[48] =  32'h48808793;
	RAM[49] =  32'h00000737;
	RAM[50] =  32'h00070713;
	RAM[51] =  32'h00f707b3;
	RAM[52] =  32'h0007c703;
	RAM[53] =  32'h000007b7;
	RAM[54] =  32'h50078793;
	RAM[55] =  32'h001787b3;
	RAM[56] =  32'h00e78023;
	RAM[57] =  32'h00108093;
	RAM[58] =  32'h02700793;
	RAM[59] =  32'hfa17dae3;
	RAM[60] =  32'h00000093;
	RAM[61] =  32'h2900006f;
	RAM[62] =  32'h00000493;
	RAM[63] =  32'h1dc0006f;
	RAM[64] =  32'h00048663;
	RAM[65] =  32'hfff48793;
	RAM[66] =  32'h0080006f;
	RAM[67] =  32'h02700793;
	RAM[68] =  32'h00000737;
	RAM[69] =  32'h50070713;
	RAM[70] =  32'h00f707b3;
	RAM[71] =  32'h0007c703;
	RAM[72] =  32'h000007b7;
	RAM[73] =  32'h50078793;
	RAM[74] =  32'h009787b3;
	RAM[75] =  32'h0007c783;
	RAM[76] =  32'h00f707b3;
	RAM[77] =  32'h0ff7f713;
	RAM[78] =  32'h02700793;
	RAM[79] =  32'h00f48663;
	RAM[80] =  32'h00148793;
	RAM[81] =  32'h0080006f;
	RAM[82] =  32'h00000793;
	RAM[83] =  32'h000006b7;
	RAM[84] =  32'h50068693;
	RAM[85] =  32'h00f687b3;
	RAM[86] =  32'h0007c783;
	RAM[87] =  32'h00f707b3;
	RAM[88] =  32'h0ff7f713;
	RAM[89] =  32'h00509693;
	RAM[90] =  32'h00309793;
	RAM[91] =  32'h00f686b3;
	RAM[92] =  32'h00048663;
	RAM[93] =  32'hfff48793;
	RAM[94] =  32'h0080006f;
	RAM[95] =  32'h02700793;
	RAM[96] =  32'h00d787b3;
	RAM[97] =  32'h000006b7;
	RAM[98] =  32'h00068693;
	RAM[99] =  32'h00f687b3;
	RAM[100] = 32'h0007c783;
	RAM[101] = 32'h00f707b3;
	RAM[102] = 32'h0ff7f713;
	RAM[103] = 32'h00509693;
	RAM[104] = 32'h00309793;
	RAM[105] = 32'h00f686b3;
	RAM[106] = 32'h02700793;
	RAM[107] = 32'h00f48663;
	RAM[108] = 32'h00148793;
	RAM[109] = 32'h0080006f;
	RAM[110] = 32'h00000793;
	RAM[111] = 32'h00d787b3;
	RAM[112] = 32'h000006b7;
	RAM[113] = 32'h00068693;
	RAM[114] = 32'h00f687b3;
	RAM[115] = 32'h0007c783;
	RAM[116] = 32'h00f707b3;
	RAM[117] = 32'h0ff7f713;
	RAM[118] = 32'h00108793;
	RAM[119] = 32'h00579693;
	RAM[120] = 32'h00108793;
	RAM[121] = 32'h00379793;
	RAM[122] = 32'h00f686b3;
	RAM[123] = 32'h00048663;
	RAM[124] = 32'hfff48793;
	RAM[125] = 32'h0080006f;
	RAM[126] = 32'h02700793;
	RAM[127] = 32'h00d787b3;
	RAM[128] = 32'h000006b7;
	RAM[129] = 32'h00068693;
	RAM[130] = 32'h00f687b3;
	RAM[131] = 32'h0007c783;
	RAM[132] = 32'h00f707b3;
	RAM[133] = 32'h0ff7f713;
	RAM[134] = 32'h00108793;
	RAM[135] = 32'h00579693;
	RAM[136] = 32'h00108793;
	RAM[137] = 32'h00379793;
	RAM[138] = 32'h00f687b3;
	RAM[139] = 32'h00f487b3;
	RAM[140] = 32'h000006b7;
	RAM[141] = 32'h00068693;
	RAM[142] = 32'h00f687b3;
	RAM[143] = 32'h0007c783;
	RAM[144] = 32'h00f707b3;
	RAM[145] = 32'h0ff7f713;
	RAM[146] = 32'h00108793;
	RAM[147] = 32'h00579693;
	RAM[148] = 32'h00108793;
	RAM[149] = 32'h00379793;
	RAM[150] = 32'h00f686b3;
	RAM[151] = 32'h02700793;
	RAM[152] = 32'h00f48663;
	RAM[153] = 32'h00148793;
	RAM[154] = 32'h0080006f;
	RAM[155] = 32'h00000793;
	RAM[156] = 32'h00d787b3;
	RAM[157] = 32'h000006b7;
	RAM[158] = 32'h00068693;
	RAM[159] = 32'h00f687b3;
	RAM[160] = 32'h0007c783;
	RAM[161] = 32'h00f707b3;
	RAM[162] = 32'h0ff7f913;
	RAM[163] = 32'h00509713;
	RAM[164] = 32'h00309793;
	RAM[165] = 32'h00f707b3;
	RAM[166] = 32'h00f487b3;
	RAM[167] = 32'h00000737;
	RAM[168] = 32'h00070713;
	RAM[169] = 32'h00f707b3;
	RAM[170] = 32'h0007c783;
	RAM[171] = 32'h00f967b3;
	RAM[172] = 32'h0ff7f793;
	RAM[173] = 32'hffd78793;
	RAM[174] = 32'h0017b793;
	RAM[175] = 32'h0ff7f793;
	RAM[176] = 32'h00f00733;
	RAM[177] = 32'h000007b7;
	RAM[178] = 32'h4b078793;
	RAM[179] = 32'h009787b3;
	RAM[180] = 32'h00e78023;
	RAM[181] = 32'h00148493;
	RAM[182] = 32'h02700793;
	RAM[183] = 32'he297d2e3;
	RAM[184] = 32'h00000493;
	RAM[185] = 32'h0940006f;
	RAM[186] = 32'h00509713;
	RAM[187] = 32'h00309793;
	RAM[188] = 32'h00f707b3;
	RAM[189] = 32'h00f487b3;
	RAM[190] = 32'h00000737;
	RAM[191] = 32'h00070713;
	RAM[192] = 32'h00f707b3;
	RAM[193] = 32'h0007c703;
	RAM[194] = 32'h000007b7;
	RAM[195] = 32'h50078793;
	RAM[196] = 32'h009787b3;
	RAM[197] = 32'h00e78023;
	RAM[198] = 32'h02105e63;
	RAM[199] = 32'hfff08793;
	RAM[200] = 32'h00579713;
	RAM[201] = 32'hfff08793;
	RAM[202] = 32'h00379793;
	RAM[203] = 32'h00f707b3;
	RAM[204] = 32'h00f487b3;
	RAM[205] = 32'h00000737;
	RAM[206] = 32'h4d870713;
	RAM[207] = 32'h00970733;
	RAM[208] = 32'h00074703;
	RAM[209] = 32'h000006b7;
	RAM[210] = 32'h00068693;
	RAM[211] = 32'h00f687b3;
	RAM[212] = 32'h00e78023;
	RAM[213] = 32'h000007b7;
	RAM[214] = 32'h4b078793;
	RAM[215] = 32'h009787b3;
	RAM[216] = 32'h0007c703;
	RAM[217] = 32'h000007b7;
	RAM[218] = 32'h4d878793;
	RAM[219] = 32'h009787b3;
	RAM[220] = 32'h00e78023;
	RAM[221] = 32'h00148493;
	RAM[222] = 32'h02700793;
	RAM[223] = 32'hf697d6e3;
	RAM[224] = 32'h00108093;
	RAM[225] = 32'h01c00793;
	RAM[226] = 32'hd617d8e3;
	RAM[227] = 32'h00000093;
	RAM[228] = 32'h1680006f;
	RAM[229] = 32'h00008663;
	RAM[230] = 32'hfff08793;
	RAM[231] = 32'h0080006f;
	RAM[232] = 32'h02700793;
	RAM[233] = 32'h00000737;
	RAM[234] = 32'h50070713;
	RAM[235] = 32'h00f707b3;
	RAM[236] = 32'h0007c703;
	RAM[237] = 32'h000007b7;
	RAM[238] = 32'h50078793;
	RAM[239] = 32'h001787b3;
	RAM[240] = 32'h0007c783;
	RAM[241] = 32'h00f707b3;
	RAM[242] = 32'h0ff7f713;
	RAM[243] = 32'h02700793;
	RAM[244] = 32'h00f08663;
	RAM[245] = 32'h00108793;
	RAM[246] = 32'h0080006f;
	RAM[247] = 32'h00000793;
	RAM[248] = 32'h000006b7;
	RAM[249] = 32'h50068693;
	RAM[250] = 32'h00f687b3;
	RAM[251] = 32'h0007c783;
	RAM[252] = 32'h00f707b3;
	RAM[253] = 32'h0ff7f713;
	RAM[254] = 32'h00008663;
	RAM[255] = 32'h48708793;
	RAM[256] = 32'h0080006f;
	RAM[257] = 32'h4af00793;
	RAM[258] = 32'h000006b7;
	RAM[259] = 32'h00068693;
	RAM[260] = 32'h00f687b3;
	RAM[261] = 32'h0007c783;
	RAM[262] = 32'h00f707b3;
	RAM[263] = 32'h0ff7f713;
	RAM[264] = 32'h02700793;
	RAM[265] = 32'h00f08663;
	RAM[266] = 32'h48908793;
	RAM[267] = 32'h0080006f;
	RAM[268] = 32'h48800793;
	RAM[269] = 32'h000006b7;
	RAM[270] = 32'h00068693;
	RAM[271] = 32'h00f687b3;
	RAM[272] = 32'h0007c783;
	RAM[273] = 32'h00f707b3;
	RAM[274] = 32'h0ff7f713;
	RAM[275] = 32'h00008663;
	RAM[276] = 32'hfff08793;
	RAM[277] = 32'h0080006f;
	RAM[278] = 32'h02700793;
	RAM[279] = 32'h000006b7;
	RAM[280] = 32'h52868693;
	RAM[281] = 32'h00f687b3;
	RAM[282] = 32'h0007c783;
	RAM[283] = 32'h00f707b3;
	RAM[284] = 32'h0ff7f713;
	RAM[285] = 32'h000007b7;
	RAM[286] = 32'h52878793;
	RAM[287] = 32'h001787b3;
	RAM[288] = 32'h0007c783;
	RAM[289] = 32'h00f707b3;
	RAM[290] = 32'h0ff7f713;
	RAM[291] = 32'h02700793;
	RAM[292] = 32'h00f08663;
	RAM[293] = 32'h00108793;
	RAM[294] = 32'h0080006f;
	RAM[295] = 32'h00000793;
	RAM[296] = 32'h000006b7;
	RAM[297] = 32'h52868693;
	RAM[298] = 32'h00f687b3;
	RAM[299] = 32'h0007c783;
	RAM[300] = 32'h00f707b3;
	RAM[301] = 32'h0ff7f913;
	RAM[302] = 32'h48808793;
	RAM[303] = 32'h00000737;
	RAM[304] = 32'h00070713;
	RAM[305] = 32'h00f707b3;
	RAM[306] = 32'h0007c783;
	RAM[307] = 32'h00f967b3;
	RAM[308] = 32'h0ff7f793;
	RAM[309] = 32'hffd78793;
	RAM[310] = 32'h0017b793;
	RAM[311] = 32'h0ff7f793;
	RAM[312] = 32'h00f00733;
	RAM[313] = 32'h000007b7;
	RAM[314] = 32'h4d878793;
	RAM[315] = 32'h001787b3;
	RAM[316] = 32'h00e78023;
	RAM[317] = 32'h00108093;
	RAM[318] = 32'h02700793;
	RAM[319] = 32'he817dce3;
	RAM[320] = 32'h00000093;
	RAM[321] = 32'h0500006f;
	RAM[322] = 32'h46008793;
	RAM[323] = 32'h00000737;
	RAM[324] = 32'h4b070713;
	RAM[325] = 32'h00170733;
	RAM[326] = 32'h00074703;
	RAM[327] = 32'h000006b7;
	RAM[328] = 32'h00068693;
	RAM[329] = 32'h00f687b3;
	RAM[330] = 32'h00e78023;
	RAM[331] = 32'h48808793;
	RAM[332] = 32'h00000737;
	RAM[333] = 32'h4d870713;
	RAM[334] = 32'h00170733;
	RAM[335] = 32'h00074703;
	RAM[336] = 32'h000006b7;
	RAM[337] = 32'h00068693;
	RAM[338] = 32'h00f687b3;
	RAM[339] = 32'h00e78023;
	RAM[340] = 32'h00108093;
	RAM[341] = 32'h02700793;
	RAM[342] = 32'hfa17d8e3;
	RAM[343] = 32'hb3dff06f;
	// RAM[344] = 32'h00f967b3;
	// RAM[345] = 32'h0ff7f793;
	// RAM[346] = 32'hffd78793;
	// RAM[347] = 32'h0017b793;
	// RAM[348] = 32'h0ff7f793;
	// RAM[349] = 32'h00f00733;
	// RAM[350] = 32'h000007b7;
	// RAM[351] = 32'h4ce78793;
	// RAM[352] = 32'h001787b3;
	// RAM[353] = 32'h00e78023;
	// RAM[354] = 32'h00108093;
	// RAM[355] = 32'h01d00793;
	// RAM[356] = 32'he817dce3;
	// RAM[357] = 32'h00000093;
	// RAM[358] = 32'h0500006f;
	// RAM[359] = 32'h47408793;
	// RAM[360] = 32'h00000737;
	// RAM[361] = 32'h4b070713;
	// RAM[362] = 32'h00170733;
	// RAM[363] = 32'h00074703;
	// RAM[364] = 32'h000006b7;
	// RAM[365] = 32'h00068693;
	// RAM[366] = 32'h00f687b3;
	// RAM[367] = 32'h00e78023;
	// RAM[368] = 32'h49208793;
	// RAM[369] = 32'h00000737;
	// RAM[370] = 32'h4ce70713;
	// RAM[371] = 32'h00170733;
	// RAM[372] = 32'h00074703;
	// RAM[373] = 32'h000006b7;
	// RAM[374] = 32'h00068693;
	// RAM[375] = 32'h00f687b3;
	// RAM[376] = 32'h00e78023;
	// RAM[377] = 32'h00108093;
	// RAM[378] = 32'h01d00793;
	// RAM[379] = 32'hfa17d8e3;
	// RAM[380] = 32'hb3dff06f;
	// //RAM[] = 32'hb25ff06f;


	end

  assign instr = RAM[pc[31:2]]; // word aligned
endmodule



//IMPORTED BLOCK:register
module register(input  wire        clk, 
               input  wire        reg_write,
               input  wire [4:0]  reg_addr1, reg_addr2, addr, 
               input  wire [31:0] write_reg, 
               output wire [31:0] rd1, rd2);
					
  reg [31:0] rf[31:0];

	always @(posedge clk) 
		if (reg_write) 
			rf[addr] <= write_reg;	
		
	assign rd1 = (reg_addr1 != 5'b0) ? rf[reg_addr1] : 32'b0; 
	assign rd2 = (reg_addr2 != 5'b0) ? rf[reg_addr2] : 32'b0;
endmodule




//IMPORTED BLOCK:franken_riscv
 module franken_riscv( input  		    clk, reset,
                      output reg [31:0] pc,
                      input      [31:0] instruction,
                      output 		    mem_write,
			          output 	 [3: 0] byte_enable,
                      output     [31:0] alu_result, 
			          output  	 [31:0] write_data,
                      input      [31:0] read_data,
					  output			reg_write, // Register Bank 
					  output     [4:0]  RS1, RS2, RD,
					  output     [31:0] write_reg,
					  input 	 [31:0] src1, src2	
);

	// Registradores
	// wire [31:0] src1;
	// wire [31:0] src2;
	wire [31:0] data_load;

	//JUMP
	wire is_conditional_jump;
	wire [31:0] jump_add;

	//PC
	wire [31:0] next_pc;
	
	// Atualiza nosso valor de PC
	assign next_pc =	reset 				? 32'b0:
						is_conditional_jump	? jump_add:
						pc + 32'd4;
						  
	always @(posedge clk)
    	pc <= next_pc;
	
	// Recebe os valores que sao passados na instruçao
	wire [6:0] opcode;
	assign opcode = instruction[6:0];
	wire [4:0] rd_;
	assign rd_ = instruction[11:7];
	wire [2:0] funct3_;
	assign funct3_ = instruction[14:12];
	wire [4:0] rs1;
	assign rs1 = instruction[19:15];
	wire [4:0] rs2;
	assign rs2 = instruction[24:20];
	wire [6:0] funct7_;
	assign funct7_ = instruction[31:25];
	
	//Instruction Type 

	// R-Type 
	wire R_type  = (opcode == 7'b0110011);
	wire is_add  = (R_type & funct3 == 3'b000 & funct7 == 7'b0000000);
	wire is_sub	 = (R_type & funct3 == 3'b000 & funct7 == 7'b0100000);
	wire is_xor	 = (R_type & funct3 == 3'b100 & funct7 == 7'b0000000);
	wire is_or 	 = (R_type & funct3 == 3'b110 & funct7 == 7'b0000000);
	wire is_and  = (R_type & funct3 == 3'b111 & funct7 == 7'b0000000);
	wire is_sltu = (R_type & funct3 == 3'b011 & funct7 == 7'b0000000);
	wire is_sll  = (R_type & funct3 == 3'b001 & funct7 == 7'b0000000);
	wire is_slt	 = (R_type & funct3 == 3'b010 & funct7 == 7'b0000000);
	wire is_srl  = (R_type & funct3 == 3'b101 & funct7 == 7'b0000000);
	wire is_sra  = (R_type & funct3 == 3'b101 & funct7 == 7'b0100000);


	// I-Type
	wire I_type   = (opcode == 7'b1100111 | opcode == 7'b0000011 | opcode == 7'b0010011);
	wire is_jalr  = (funct3 == 3'b000 & opcode == 7'b1100111);
	wire is_lb    = (funct3 == 3'b000 & opcode == 7'b0000011);
	wire is_lh    = (funct3 == 3'b001 & opcode == 7'b0000011);
	wire is_lw    = (funct3 == 3'b010 & opcode == 7'b0000011);
	wire is_lbu   = (funct3 == 3'b100 & opcode == 7'b0000011);
	wire is_lhu   = (funct3 == 3'b101 & opcode == 7'b0000011);
	wire is_addi  = (funct3 == 3'b000 & opcode == 7'b0010011);
	wire is_slti  = (funct3 == 3'b010 & opcode == 7'b0010011);
	wire is_sltiu = (funct3 == 3'b011 & opcode == 7'b0010011);
	wire is_xori  = (funct3 == 3'b100 & opcode == 7'b0010011);
	wire is_ori   = (funct3 == 3'b110 & opcode == 7'b0010011);
	wire is_andi  = (funct3 == 3'b111 & opcode == 7'b0010011);
	wire is_slli  = (funct3 == 3'b001 & funct7 == 7'b0000000 & opcode == 7'b0010011);
	wire is_srli  = (funct3 == 3'b101 & funct7 == 7'b0000000 & opcode == 7'b0010011);
	wire is_srai  = (funct3 == 3'b101 & funct7 == 7'b0100000 & opcode == 7'b0010011);
	

	// S-Type
	wire S_type = (opcode == 7'b0100011);
	wire is_sw  = (S_type & funct3 == 3'b010);
	wire is_sb  = (S_type & funct3 == 3'b000);
	wire is_sh  = (S_type & funct3 == 3'b001);
	

	// B-Type
	wire B_type  = (opcode == 7'b1100011);
	wire is_bge  = (B_type & funct3 == 3'b101);
	wire is_beq  = (B_type & funct3 == 3'b000);
	wire is_blt  = (B_type & funct3 == 3'b100);
	wire is_bne  = (B_type & funct3 == 3'b001);
	wire is_bltu = (B_type & funct3 == 3'b110);
	wire is_bgeu = (B_type & funct3 == 3'b111);


	// U-Type 
	wire U_type = (opcode == 7'b0110111 | opcode == 7'b0010111);
	wire is_auipc = opcode == 7'b0010111;
	wire is_lui = opcode == 7'b0110111;
	

	// J-Type
	wire J_type = (opcode == 7'b1101111);
	wire is_jal = (J_type);


	// System-Type
	wire fence  = (opcode == 7'b0001111 & funct3 == 3'b000);
	wire ecall  = (opcode == 7'b1110011 & funct3 == 3'b000 & instruction[31:25] == 12'b000000000000);
	wire ebreak = (opcode == 7'b1110011 & funct3 == 3'b000 & instruction[31:25] == 12'b000000000001);
	
	// Decodificaçao das instruçoes e seus respectivos tipos 
	// wire [4:0] RS1;
	assign RS1 = (R_type | I_type | S_type | B_type) 	? rs1 : 5'b000000;
	
	// wire [4:0] RS2;
	assign RS2 = (R_type | S_type | B_type)         	? rs2 : 5'b000000;

	// wire [4:0] RD;
	assign RD = (R_type | I_type | U_type | J_type) 	? rd_ : 5'b000000;
	
	wire [2:0] funct3;
	assign funct3 = (R_type | I_type | S_type | B_type) ? funct3_ : 3'b000;
	
	wire [6:0] funct7;
	assign funct7 = (R_type)                            ? funct7_ : 7'b000000;
	
	wire [31:0] imm;
	assign imm = (I_type) ? ({{20{instruction[31]}},instruction[31:20]}):
				 (S_type) ? ({{20{instruction[31]}},instruction[31:25],instruction[11:7]}):		
				 (B_type) ? ({{19{instruction[31]}},instruction[31],instruction[7],instruction[30:25],instruction[11:8],1'b0}):
				 (U_type) ? ({instruction[31:12],12'b0}):
				 (J_type) ? ({{11{instruction[31]}}, instruction[31],instruction[19:12],instruction[20],instruction[30:21],1'b0}):
				 32'b0;
			
	//---------------------------- Controler ---------------------------------------------//
	
	assign mem_write = S_type;

	//Condiçao de salto
	assign is_conditional_jump = (is_beq || is_bne || is_blt || is_bge || is_jal || is_jalr);
	
	//Escrita da memoria para o registrador
	wire is_mem_reg = is_lw || is_lbu || is_lb || is_lh || is_lhu;

	assign write_reg = is_mem_reg ? data_load : alu_result;
	
	// Condicional para escrita nos registradores
	assign reg_write = (R_type || S_type || B_type || I_type || U_type) && RD != 5'b0;

	// ------------ State Machine ------------ //

	parameter   FETCH   = 4'b0000; 	// State 0
	parameter   DECODE  = 4'b0001; 	// State 1
	parameter   MEMADR  = 4'b0010;	// State 2
	parameter   MEMRD   = 4'b0011;	// State 3
	parameter   MEMWB   = 4'b0100;	// State 4
	parameter   MEMWR   = 4'b0101;	// State 5
	parameter   RTYPEEX = 4'b0110;	// State 6
	parameter   ITYPEEX = 4'b0111;	// State 7
	parameter   JEX     = 4'b1000;	// State 8
	parameter   ALUWB   = 4'b1001;	// State 9
	parameter   BEQX    = 4'b1010;	// state 10

	reg  [3:0] current_state;
	wire [3:0] next_state;

	assign next_state = (current_state == FETCH) ? DECODE : 
						((is_lw || is_sw) && (current_state == DECODE))? MEMADR :
						((R_type) && (current_state == DECODE)) ? RTYPEEX :
						((I_type) && (current_state == DECODE)) ? ITYPEEX :
						
						FETCH;

	always @(posedge clk)
		if(reset) 
	 		current_state <= FETCH;
	 	else 
	 		current_state <= next_state;
	
	//-------------------------------------ALU-------------------------------------------------//
	//wire [31:0] alu_result;
	assign alu_result = is_add   	? $signed(src1) + $signed(src2):
						is_addi		? $signed(src1) + $signed(imm):
						is_sub		? $signed(src1) - $signed(src2):
						is_andi		? $signed(src1) & $signed(imm):
						is_and		? $signed(src1) & $signed(src2):
						is_or		? $signed(src1) | $signed(src2):
						is_ori		? $signed(src1) | $signed(imm): 
						is_slli		? $signed(src1) << $signed(imm[4:0]):
						is_srli		? $signed(src1) >> $signed(imm[4:0]):
						is_auipc	? $signed(pc) + $signed(imm):
						J_type   	? jump_add:
						S_type 		? $signed(src1) + $signed(imm): 
						is_lui		? imm:
						is_xor		? $signed(src1) ^ $signed(src2):
						is_xori		? $signed(src1) ^ $signed(imm):
						is_lb		? src1 + imm:
						is_lbu		? src1 + imm:
						is_lh		? src1 + imm:
						is_lhu	    ? src1 + imm:
						is_sltiu	? src1 < imm:
						is_slti		? $signed(src1) < $signed(imm):
						is_sltu		? src1 < src2:
						is_sll		? $signed(src1) << $signed(src2):
						is_slt		? $signed(src1) < $signed(src2):
						is_srl		? $signed(src1) >> $signed(src2):
						is_srai     ? $signed(src1) >>> $signed(imm[4:0]):
						is_sra      ? $signed(src1) >>> $signed(src2):
						32'b0;
	
	// Caso nossa instruçao seja de JUMP, temos que calcular a nova posiçao para nosso PC.
	assign jump_add =	is_jal 										  ? pc 			  + $signed(imm):
						is_jalr 									  ? $signed(src1) + $signed(imm):
						(is_beq  && ($signed(src1) == $signed(src2))) ? pc		 	  + $signed(imm):
						(is_bne  && ($signed(src1) != $signed(src2))) ? pc 			  + $signed(imm):
						(is_blt  && ($signed(src1)  < $signed(src2))) ? pc			  + $signed(imm):
						(is_bltu && (src1  < src2)) 				  ? pc			  + $signed(imm):
						(is_bge  && ($signed(src1) >= $signed(src2))) ? pc 			  + $signed(imm):
						(is_bgeu && (src1 >= src2)) 				  ? pc 			  + $signed(imm):
						pc + 32'd4;

	// Valor que sera salvo na nossa memoria e a condicional de escrita
	assign write_data = is_sw ? src2 : (is_sb ? (alu_result[1:0]==3 ? {src2[7:0], 24'h000000} : 
									     	     alu_result[1:0]==2 ? {8'h00, src2[7:0], 16'h0000} :
												 alu_result[1:0]==1 ? {16'h0000, src2[7:0], 8'h00} :
												                      {24'h000000, src2[7:0]}) :
										is_sh ? alu_result[1:0]==2 ? {src2[15:0], 16'h0000}:
																	  {16'h0000, src2[15:0]} :
																						32'bX);
	
	// Escrita alinhada na memoria
	assign byte_enable = is_lbu || is_sb ? (alu_result[1:0]==3 ? 4'b1000 : // sb/lb
											alu_result[1:0]==2 ? 4'b0100 : 
											alu_result[1:0]==1 ? 4'b0010 : 
											                     4'b0001): 
						 is_lh || is_sh  ? (alu_result[1:0]==2 ? 4'b1100 : // sh/lh
						 										 4'b0011):
									     	                     4'b1111;  // lw/sw
	
   //Acerta a posiçao para ser salvo em memoria 
   assign data_load = is_lbu  ? (alu_result[1:0]==3 ? {24'h000000, read_data[31:24]} : 
	                             alu_result[1:0]==2 ? {24'h000000, read_data[23:16]} : 
	                             alu_result[1:0]==1 ? {24'h000000, read_data[15: 8]} : 
								                      {24'h000000, read_data[ 7: 0]}):
					  is_lb   ? (alu_result[1:0]==3 ? {24'h000000, $signed(read_data[31:24])} : 
	                             alu_result[1:0]==2 ? {24'h000000, $signed(read_data[23:16])} : 
	                             alu_result[1:0]==1 ? {24'h000000, $signed(read_data[15: 8])} : 
								                      {24'h000000, $signed(read_data[ 7: 0])}):
					   is_lh  ? (alu_result[1:0]==2 ? {{16{read_data[31]}}, $signed(read_data[31:16])} :
					   								  {{16{read_data[31]}}, $signed(read_data[15: 0])}):
					   is_lhu ? (alu_result[1:0]==2 ? {16'h000000, read_data[31:16]} :
					   								  {16'h000000, read_data[15: 0]}):
																  read_data;
	

endmodule




//IMPORTED BLOCK:alu_decoder
module alu_decoder (
   input             clk,
   input      [31:0] instruction,RD1, RD2,
   output reg [127 :0] data_out
   );

   wire [127:0] hex_code;

   always @(posedge clk)
    data_out <= hex_code;

	// Recebe os valores que sao passados na instruçao
	wire [6:0] opcode;
	assign opcode = instruction[6:0];
	wire [4:0] rd_;
	assign rd_ = instruction[11:7];
	wire [2:0] funct3_;
	assign funct3_ = instruction[14:12];
	wire [4:0] rs1;
	assign rs1 = instruction[19:15];
	wire [4:0] rs2;
	assign rs2 = instruction[24:20];
	wire [6:0] funct7_;
	assign funct7_ = instruction[31:25];

    wire [2:0] funct3;
	assign funct3 = (R_type | I_type | S_type | B_type) ? funct3_ : 3'b000;
	
	wire [6:0] funct7;
	assign funct7 = (R_type)                            ? funct7_ : 7'b000000;
	
	//Instruction Type 

	// R-Type 
	wire R_type  = (opcode == 7'b0110011);                                 
    
    // I-Type
	wire I_type   = (opcode == 7'b1100111 | opcode == 7'b0000011 | opcode == 7'b0010011);

    // S-Type
	wire S_type = (opcode == 7'b0100011);

    // B-Type
	wire B_type  = (opcode == 7'b1100011);

	// U-Type 
	wire U_type = (opcode == 7'b0110111 | opcode == 7'b0010111);

    // J-Type
	wire J_type = (opcode == 7'b1101111);

                                                                                         // ASCII HEX
    assign hex_code = (R_type & funct3 == 3'b000 & funct7 == 7'b0000000)                ? 128'h41_44_44_00_00_00_00_00 :  // is_add
	                  (R_type & funct3 == 3'b000 & funct7 == 7'b0100000)                ? 128'h53_55_42_00_00_00_00_00 :  // is_sub
	                  (R_type & funct3 == 3'b100 & funct7 == 7'b0000000)                ? 128'h58_4F_52_00_00_00_00_00 :  // is_xor
	                  (R_type & funct3 == 3'b110 & funct7 == 7'b0000000)                ? 128'h4F_52_00_00_00_00_00_00 :  // is_or
	                  (R_type & funct3 == 3'b111 & funct7 == 7'b0000000)                ? 128'h41_4E_44_00_00_00_00_00 :  // is_and
	                  (R_type & funct3 == 3'b011 & funct7 == 7'b0000000)                ? 128'h53_4C_54_55_00_00_00_00 :  // is_sltu
	                  (R_type & funct3 == 3'b001 & funct7 == 7'b0000000)                ? 128'h53_4C_4C_00_00_00_00_00 :  // is_sll
	                  (R_type & funct3 == 3'b010 & funct7 == 7'b0000000)                ? 128'h53_4C_54_00_00_00_00_00 :  // is_slt
	                  (R_type & funct3 == 3'b101 & funct7 == 7'b0000000)                ? 128'h53_52_4C_00_00_00_00_00 :  // is_srl
	                  (R_type & funct3 == 3'b101 & funct7 == 7'b0100000)                ? 128'h53_52_41_00_00_00_00_00 :  // is_sra
	                  (funct3 == 3'b000 & opcode == 7'b1100111)                         ? 128'h4A_41_4C_52_00_00_00_00 :  // is_jalr 
	                  (funct3 == 3'b000 & opcode == 7'b0000011)                         ? 128'h4C_42_00_00_00_00_00_00 :  // is_lb 
	                  (funct3 == 3'b001 & opcode == 7'b0000011)                         ? 128'h4C_48_00_00_00_00_00_00 :  // is_lh 
	                  (funct3 == 3'b010 & opcode == 7'b0000011)                         ? 128'h4C_57_00_00_00_00_00_00 :  // is_lw 
	                  (funct3 == 3'b100 & opcode == 7'b0000011)                         ? 128'h4C_42_55_00_00_00_00_00 :  // is_lbu 
	                  (funct3 == 3'b101 & opcode == 7'b0000011)                         ? 128'h4C_48_55_00_00_00_00_00 :  // is_lhu 
	                  (funct3 == 3'b000 & opcode == 7'b0010011)                         ? 128'h41_44_44_49_00_00_00_00 :  // is_addi 
	                  (funct3 == 3'b010 & opcode == 7'b0010011)                         ? 128'h53_4C_54_49_00_00_00_00 :  // is_slti 
	                  (funct3 == 3'b011 & opcode == 7'b0010011)                         ? 128'h53_4C_54_49_55_00_00_00 :  // is_sltiu 
	                  (funct3 == 3'b100 & opcode == 7'b0010011)                         ? 128'h58_4F_52_49_00_00_00_00 :  // is_xori 
	                  (funct3 == 3'b110 & opcode == 7'b0010011)                         ? 128'h4F_52_49_00_00_00_00_00 :  // is_ori 
	                  (funct3 == 3'b111 & opcode == 7'b0010011)                         ? 128'h41_4E_44_49_00_00_00_00 :  // is_andi 
	                  (funct3 == 3'b001 & funct7 == 7'b0000000 & opcode == 7'b0010011)  ? 128'h53_4C_4C_49_00_00_00_00 :  // is_slli
	                  (funct3 == 3'b101 & funct7 == 7'b0000000 & opcode == 7'b0010011)  ? 128'h53_52_4C_49_00_00_00_00 :  // is_srli
	                  (funct3 == 3'b101 & funct7 == 7'b0100000 & opcode == 7'b0010011)  ? 128'h53_52_41_49_00_00_00_00 :  // is_srai
	                  (S_type & funct3 == 3'b010)                                       ? 128'h53_57_00_00_00_00_00_00 :  // is_sw
	                  (S_type & funct3 == 3'b000)                                       ? 128'h53_42_00_00_00_00_00_00 :  // is_sb
	                  (S_type & funct3 == 3'b001)                                       ? 128'h53_48_00_00_00_00_00_00 :  // is_sh
                      (B_type & funct3 == 3'b101)                                       ? 128'h42_47_45_00_00_00_00_00 :  // is_bge 
	                  (B_type & funct3 == 3'b000)                                       ? 128'h42_45_51_00_00_00_00_00 :  // is_beq 
	                  (B_type & funct3 == 3'b100)                                       ? 128'h42_4C_54_00_00_00_00_00 :  // is_blt 
	                  (B_type & funct3 == 3'b001)                                       ? 128'h42_4E_45_00_00_00_00_00 :  // is_bne 
	                  (B_type & funct3 == 3'b110)                                       ? 128'h42_4C_54_55_00_00_00_00 :  // is_bltu
	                  (B_type & funct3 == 3'b111)                                       ? 128'h42_47_45_55_00_00_00_00 :  // is_bgeu
                      opcode == 7'b0010111                                              ? 128'h41_55_49_50_43_00_00_00 :  // is_auipc
	                  opcode == 7'b0110111                                              ? 128'h4C_55_49_00_00_00_00_00 :  // is_lui
	                  (J_type)                                                          ? 128'h4A_41_4C_00_00_00_00_00 :  //  is_jal
                                                                                          128'h00_00_00_00_00_00_00_00;


	// System-Type
	// wire fence  = (opcode == 7'b0001111 & funct3 == 3'b000);
	// wire ecall  = (opcode == 7'b1110011 & funct3 == 3'b000 & instruction[31:25] == 12'b000000000000);
	// wire ebreak = (opcode == 7'b1110011 & funct3 == 3'b000 & instruction[31:25] == 12'b000000000001);

endmodule

