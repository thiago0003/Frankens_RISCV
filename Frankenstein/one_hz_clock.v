//IMPORTED BLOCK:one_hz_clock
// `define clock_frequnecy 25_000_000
module one_hz_clock (input clk,            // clk input
					  output reg out);  // output pin

  reg [20:0] count;
 
  initial begin
    out = 0;
  	count = 0;
  end
 
  always @(posedge clk) begin
    count <= count + 1;
    if (count == 675000) begin
      count <= 0;
      out <= ~out;
    end
  end
endmodule
