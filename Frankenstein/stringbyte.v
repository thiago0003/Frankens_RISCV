
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
