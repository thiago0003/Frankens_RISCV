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
