
//Data Memory 
module dmem #(
  parameter int BYTE_WIDTH = 8,
             ADDRESS_WIDTH = 9,
						   BYTES = 4,
		        DATA_WIDTH_R = BYTE_WIDTH * BYTES
)
(
	input [ADDRESS_WIDTH-1:0] addr1,
	input [BYTES-1:0] be1,
	input [DATA_WIDTH_R-1:0] data_in1, 
	input we1, clk,
	output [DATA_WIDTH_R-1:0] data_out1);
	localparam RAM_DEPTH = 1 << ADDRESS_WIDTH;

	// model the RAM with two dimensional packed array
	logic [BYTES-1:0][BYTE_WIDTH-1:0] ram[0:RAM_DEPTH-1];

	reg [DATA_WIDTH_R-1:0] data_reg1;
	reg [DATA_WIDTH_R-1:0] data_reg2;

  initial
    $readmemh("dmem.txt", ram);
	// port A
	always@(posedge clk)
	begin
		if(we1) begin
          // edit this code if using other than four bytes per word
			if(be1[0]) ram[addr1][0] <= data_in1[ 7: 0];
			if(be1[1]) ram[addr1][1] <= data_in1[15: 8];
			if(be1[2]) ram[addr1][2] <= data_in1[23:16];
			if(be1[3]) ram[addr1][3] <= data_in1[31:24];
		end
      data_reg1 <= ram[addr1];
      
	end

	assign data_out1 = data_reg1;

endmodule 


//Instruction Memory
module imem #(
  parameter int BYTE_WIDTH = 8,
             ADDRESS_WIDTH = 9,
						   BYTES = 4,
		        DATA_WIDTH_R = BYTE_WIDTH * BYTES
)
(
	input [ADDRESS_WIDTH-1:0] addr1,
	input clk,
	output [DATA_WIDTH_R-1:0] data_out1);
	localparam RAM_DEPTH = 1 << ADDRESS_WIDTH;

	// model the RAM with two dimensional packed array
	logic [BYTES-1:0][BYTE_WIDTH-1:0] ram[0:RAM_DEPTH-1];

	reg [DATA_WIDTH_R-1:0] data_reg1;
	
  initial
    $readmemh("imem.txt", ram);
	 
	always@(posedge clk)
      data_reg1 <= ram[addr1];
    
	assign data_out1 = data_reg1;

endmodule 

