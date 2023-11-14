/* verilator lint_off DECLFILENAME */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off MULTITOP */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off EOFNEWLINE */
/* verilator lint_off INITIALDLY */

 // Modulo de memoria de programa 
// module dmem #(
//   parameter   BYTE_WIDTH = 8,
//               ADDRESS_WIDTH = 32,
// 		        DEPTH = 1200,
// 		        BYTES = 4,
// 		        DATA_WIDTH_R = BYTE_WIDTH * BYTES
// )
// (	
// 	input [ADDRESS_WIDTH-1:0] addr1,
// 	input [ADDRESS_WIDTH-1:0] addr2,
// 	input [BYTES-1:0] be1,
// 	input [DATA_WIDTH_R-1:0] data_in1, 
// 	input we1, clk,
// 	output [DATA_WIDTH_R-1:0] data_out1,
// 	output [DATA_WIDTH_R-1:0] data_out2);
	
// 	// model the RAM with two dimensional packed array
// 	reg [BYTES-1:0][BYTE_WIDTH-1:0] ram[0:DEPTH-1];

// 	reg [DATA_WIDTH_R-1:0] data_reg1;
// 	reg [DATA_WIDTH_R-1:0] data_reg2;
	
// 	integer i;

// 	initial
// 	 for (i = 0; i < DEPTH; i++)begin
// 	 	ram[i[31:2]][0] <= 8'b00000000;
// 	 	ram[i[31:2]][1] <= 8'b00000000;
// 	 	ram[i[31:2]][2] <= 8'b00000000;
// 	 	ram[i[31:2]][3] <= 8'b00000000;
// 	 end
  
//  // port A
// 	always@(posedge clk)
// 	begin
// 		if(we1) begin
// 		   // edit this code if using other than four bytes per word
// 			if(be1[0]) ram[addr1[31:2]][0] <= data_in1[ 7: 0];
// 			if(be1[1]) ram[addr1[31:2]][1] <= data_in1[15: 8];
// 			if(be1[2]) ram[addr1[31:2]][2] <= data_in1[23:16];
// 			if(be1[3]) ram[addr1[31:2]][3] <= data_in1[31:24];
// 		end
//       data_reg1 <= ram[addr1[31:2]];
// 	end
	
// 	assign data_out1 = data_reg1;
	
// 	// port B
// 	always@(posedge clk)
// 	begin	   
// 		data_reg2 <= ram[addr2[31:2]];
// 	end
	
// 	assign data_out2 = data_reg2;
// endmodule

module dmem #(
parameter BYTE_WIDTH = 8,
          ADDRESS_WIDTH = 32,
          DEPTH = 1200,
		  BYTES = 4,
		  DATA_WIDTH_R = BYTE_WIDTH * BYTES
)
(   input             clk, mem_write,
    input      [ 3:0] byte_en,
    input      [31:0] addr,
    input      [31:0] vaddr,
    input      [31:0] write_data,
    output     [31:0] read_data,
    output     [31:0] vdata
);

  reg [BYTES-1:0][BYTE_WIDTH-1:0] ram[0:DEPTH-1];
  
  wire [31:0] vdata_;
  reg [DATA_WIDTH_R-1:0] data_reg2;
	
	// initial
	// 	$readmemh("mem.txt", ram);
	
	assign vdata = data_reg2;
	assign read_data = ram[addr[31:2]];
  
  always @(posedge clk)
  begin
    if (mem_write) 
	 begin
        //$display("RAM[%d] = %h -> %h (%b)", addr, read_data, write_data, byte_en);
		if (byte_en[0]) ram[addr[31:2]][0] <= write_data[ 7: 0];
		if (byte_en[1]) ram[addr[31:2]][1] <= write_data[15: 8];
		if (byte_en[2]) ram[addr[31:2]][2] <= write_data[23:16];
		if (byte_en[3]) ram[addr[31:2]][3] <= write_data[31:24];
	 end
	 
		data_reg2 <= ram[vaddr[31:2]];
	end
endmodule

// Modulo de memoria das instruçoes
module imem( input  [31:0]  pc,
             output [31:0] instr
);

  reg [31:0] RAM[0:63]; 
  
  initial     
	begin
	RAM[0] =  32'h00000493;
	RAM[1] =  32'h01c0006f;
	RAM[2] =  32'h000007b7;
	RAM[3] =  32'h00078793;
	RAM[4] =  32'h009787b3;
	RAM[5] =  32'h00100713;
	RAM[6] =  32'h00e78023;
	RAM[7] =  32'h00148493;
	RAM[8] =  32'h000027b7;
	RAM[9] =  32'h00078793;
	RAM[10] = 32'h57f78793;
	RAM[11] = 32'hfc97dee3;
	RAM[12] = 32'h00000073;
	// RAM[13] = 32'h000027b7;
	// RAM[14] = 32'h00078793;
	// RAM[15] = 32'h57f78793;
	// RAM[16] = 32'hfc97d4e3;
	// RAM[17] = 32'h00000073;
	end

  assign instr = RAM[pc[31:2]]; // word aligned
endmodule
