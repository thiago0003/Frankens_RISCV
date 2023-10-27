/* verilator lint_off DECLFILENAME */
/* verilator lint_off WIDTHTRUNC */
 // Modulo de memoria de programa 
module dmem( input clk, mem_write,
             input  [ 3:0] byte_en,
             input  [31:0] addr,
             input  [ 8:0] vaddr,
             input  [31:0] write_data,
             output [31:0] read_data,
             output [31:0] vdata
);

  reg [31:0] RAM [0:31];
  integer i;

  initial
  begin
    RAM[0] = 32'h00000000;
    RAM[1] = 32'h00000000;
    RAM[2] = 32'h00000000;
    RAM[3] = 32'h00000000;
    RAM[4] = 32'h00000000;
    RAM[5] = 32'h00000000;
    RAM[6] = 32'h00000000;
    RAM[7] = 32'h00000000;
    RAM[8] = 32'h00000000;
    RAM[9] = 32'h00000000;
    RAM[10] = 32'h00000000;
    RAM[11] = 32'h00000000;
    RAM[12] = 32'h00000000;
    RAM[13] = 32'h00000000;
    RAM[14] = 32'h00000000;
    RAM[15] = 32'h00000000;
    RAM[16] = 32'h00000000;
    RAM[17] = 32'h00000000;
    RAM[18] = 32'h00000000;
    RAM[19] = 32'h00000000;
    RAM[20] = 32'h00000000;
    RAM[21] = 32'h00000000;
    RAM[22] = 32'h00000000;
    RAM[23] = 32'h00000000;
    RAM[24] = 32'h00000000;
    RAM[25] = 32'h00000000;
    RAM[26] = 32'h00000000;
    RAM[27] = 32'h00000000;
    RAM[28] = 32'h00000000;
    RAM[29] = 32'h00000000;
    RAM[30] = 32'h00000000;
    RAM[31] = 32'h00000000;
  end

  assign vdata = RAM[{25'b0000000000000000000000000, vaddr[8:2]}]; // word aligned
  assign read_data = RAM[addr[31:2]]; // word aligned
  
  always @(posedge clk) 
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
endmodule

// Modulo de memoria das instruçoes
module imem( input  [8:0]  pc,
             output [31:0] instr
);

  reg [31:0] RAM[0:9];

  initial
  begin
    RAM[0] = 32'h00000293;
    RAM[1] = 32'h12c00313;
    RAM[2] = 32'h0002c383;
    RAM[3] = 32'h00138393;
    RAM[4] = 32'h00728023;
    RAM[5] = 32'h00128293;
    RAM[6] = 32'h0062d463;
    RAM[7] = 32'hfedff06f;
    RAM[8] = 32'h00000293;
    RAM[9] = 32'hfe5ff06f;
  end

  assign instr = RAM[{25'b0000000000000000000000000, pc[8:2]}]; // word aligned
endmodule
