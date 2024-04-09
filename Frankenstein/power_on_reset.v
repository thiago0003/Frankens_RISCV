/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off DECLFILENAME */
module power_on_reset(
  input clk, 
  output resetn);

  reg [3:0] q;
 
  always@(posedge clk)
       q <= {q,1'b1};

  assign resetn = &q;
endmodule
