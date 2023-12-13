/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */

module dmem #(
parameter DEPTH = 1200
)
(   input             clk, mem_write,
    input      [ 3:0] byte_en,
    input      [31:0] addr,
    input      [31:0] vaddr,
    input      [31:0] write_data,
    output     [31:0] read_data,
    output     [31:0] vdata
);

  reg [31:0] ram[0:DEPTH-1];
  
  wire [31:0] vdata_;
  reg [31:0] data_reg2;
	
	// initial
	// 	$readmemh("mem.txt", ram);
	
	assign vdata = data_reg2;
	assign read_data = ram[addr[31:2]];
  
  always @(posedge clk)
  begin
    if (mem_write) 
	 begin
        //$display("RAM[%d] = %h -> %h (%b)", addr, read_data, write_data, byte_en);
		if (byte_en[0]) ram[addr[31:2]][ 7: 0] <= write_data[ 7: 0];
		if (byte_en[1]) ram[addr[31:2]][15: 8] <= write_data[15: 8];
		if (byte_en[2]) ram[addr[31:2]][23:16] <= write_data[23:16];
		if (byte_en[3]) ram[addr[31:2]][31:24] <= write_data[31:24];
	 end
	 
		data_reg2 <= ram[vaddr[31:2]];
	end
endmodule
