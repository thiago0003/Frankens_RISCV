//IMPORTED BLOCK:one_hz_clock
// `define clock_frequnecy 25_000_000
module one_hz_clock (input clk,            // clk input
					  output reg clk_out_div2);  // output pin

  reg [20:0] count;
 
  initial begin
    clk_out_div2 = 0;
  	count = 0;
  end
 
  always @(posedge clk) begin
    count <= count + 1;
    if (count == 192000) begin
      count <= 0;
      clk_out_div2 <= ~clk_out_div2;
    end
  end
endmodule
