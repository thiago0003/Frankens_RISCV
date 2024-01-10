/* verilator lint_off WIDTHTRUNC */ 
/* verilator lint_off UNUSEDSIGNAL */

 // Modulo de memoria de programa 
module gowin_blockram #(
  parameter   BYTE_WIDTH = 8,
              ADDRESS_WIDTH = 32,
		      DEPTH = 750,
		      BYTES = 4,
		      DATA_WIDTH_R = BYTE_WIDTH * BYTES
)
(	
    output [31:0] DO,
    input  [31:0] DI,
    input  [13:0] AD,
    input         WRE, CE, CLK, RESET, OCE,
    input  [2 :0] BLKSEL,



	input [ADDRESS_WIDTH-1:0] addr,
	input [BYTES-1:0] be,
	input  clk,
	output [DATA_WIDTH_R-1:0] data_out
    );
	// 
	// model the RAM with two dimensional packed array
	reg [BYTE_WIDTH-1:0] ram[0:DEPTH-1][0:BYTES-1];

	reg [31:0] data_reg;

 // port A
	always @(posedge clk)
	begin
		if(WRE) begin
		   // edit this code if using other than four bytes per word
			if(be[0]) ram[addr[13:2]][0] <= DI[ 7: 0];
			if(be[1]) ram[addr[13:2]][1] <= DI[15: 8];
			if(be[2]) ram[addr[13:2]][2] <= DI[23:16];
			if(be[3]) ram[addr[13:2]][3] <= DI[31:24];
		end
		
      data_reg <= {ram[addr][3], ram[addr][2], ram[addr][1], ram[addr][0]};
	end

	assign DO = data_reg;
endmodule
