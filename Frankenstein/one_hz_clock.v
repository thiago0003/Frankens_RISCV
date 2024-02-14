//IMPORTED BLOCK:one_hz_clock
`define clock_frequnecy 25_000_000
module one_hz_clock #(parameter DELAY = 1000)
				 	 (input clk,            // clk input
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
