/* verilator lint_off WIDTHTRUNC */ 
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off INITIALDLY */

 // Modulo de memoria de programa 
module blockram #(
  parameter   BYTE_WIDTH = 8,
              ADDRESS_WIDTH = 32,
		      DEPTH = 1200,
		      BYTES = 4,
		      DATA_WIDTH_R = BYTE_WIDTH * BYTES
)
(	
	input [ADDRESS_WIDTH-1:0] addr1,
	input [ADDRESS_WIDTH-1:0] addr2,
	input [BYTES-1:0] be1,
	input [DATA_WIDTH_R-1:0] data_in1, 
	input we1, clk,
	output [DATA_WIDTH_R-1:0] data_out1,
	output [DATA_WIDTH_R-1:0] data_out2);
	// 
	// model the RAM with two dimensional packed array
	reg [BYTES-1:0][BYTE_WIDTH-1:0] ram[0:DEPTH-1];

	reg [DATA_WIDTH_R-1:0] data_reg1;
	reg [DATA_WIDTH_R-1:0] data_reg2;

	integer i; 
	initial
	begin
		ram[1][1]  <= 8'b00000001;
		ram[11][1] <= 8'b00000001;
		ram[21][1] <= 8'b00000001;
	//  for (i = 0; i < 1200; i++)begin
	 	// ram[i[31:2]][0] <= 8'b00000000;
	 	// ram[i[31:2]][1] <= 8'b00000000;
	 	// ram[i[31:2]][2] <= 8'b00000000;
	 	// ram[i[31:2]][3] <= 8'b00000000;
	//  end
	end
  
 // port A
	always@(posedge clk)
	begin
		if(we1) begin
		   // edit this code if using other than four bytes per word
			if(be1[0]) ram[addr1[31:2]][0] <= data_in1[ 7: 0];
			if(be1[1]) ram[addr1[31:2]][1] <= data_in1[15: 8];
			if(be1[2]) ram[addr1[31:2]][2] <= data_in1[23:16];
			if(be1[3]) ram[addr1[31:2]][3] <= data_in1[31:24];
		end
      data_reg1 <= ram[addr1[31:2]];
	end

	assign data_out1 = data_reg1;

	// port B
	always@(posedge clk)
	begin	   
		data_reg2 <= ram[addr2[31:2]];
	end
    
	assign data_out2 = data_reg2;
endmodule
