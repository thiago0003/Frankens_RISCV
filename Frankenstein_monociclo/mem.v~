/* verilator lint_off DECLFILENAME */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off MULTITOP */
/* verilator lint_off UNUSEDSIGNAL */
 // Modulo de memoria de programa 
module dmem( input clk, mem_write,
             input  [ 3:0] byte_en,
             input  [31:0] addr,
             input  [ 8:0] vaddr,
             input  [31:0] write_data,
             output [31:0] read_data,
             output reg [31:0] vdata
);

  reg [31:0] RAM [0:511];
  
  wire [31:0] vdata_;
	
	initial
		$readmemh("mem.txt", RAM);
  
  assign read_data = (mem_write) ? write_data : RAM[{2'b00, addr[31:2]}]; // word aligned
  assign vdata_ = (vaddr == addr[8:0]) ? read_data : RAM[{25'b0000000000000000000000000, vaddr[8:2]}]; // word aligned
  
  always @(posedge clk)
  begin
    if (mem_write) 
	 begin
        //$display("RAM[%d] = %h -> %h (%b)", addr, read_data, write_data, byte_en);
		if (byte_en[0])
		  RAM[addr[31:2]][ 7: 0] <= write_data[ 7: 0];
		if (byte_en[1])
		  RAM[addr[31:2]][15: 8] <= write_data[15: 8];
		if (byte_en[2])
		  RAM[addr[31:2]][23:16] <= write_data[23:16];
		if (byte_en[3])
		  RAM[addr[31:2]][31:24] <= write_data[31:24];
	 end
	
	   vdata <= vdata_;
	end
endmodule

// Modulo de memoria das instruçoes
module imem( input  [8:0]  pc,
             output [31:0] instr
);

  reg [31:0] RAM[0:63]; 

  initial     
    $readmemh("mem.txt", RAM);

  assign instr = RAM[{25'b0000000000000000000000000, pc[8:2]}]; // word aligned
endmodule
