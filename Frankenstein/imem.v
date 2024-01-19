/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */


// Modulo de registradores
module imem(   input  wire        clk, 
               input  wire        write,
               input  wire [31:0] pc, addr_in, 
               input  wire [31:0] data, 
               output wire [31:0] instr);
					
  // localparam slow_bit=17;

  reg [31:0] ram[0:127];

  // `include "riscv_assembly.v"
  //  integer    L1_      = 28;
  //  integer    wait_    = 12;
   
  //  initial begin
  //   LI(gp,32'h400000); 
  //   LI(a0,0);

  //   Label(wait_);
  //     LI(t0,1);
  //     SLLI(t0,t0,slow_bit);
  //     ADDI(a0,a0,1);


  //   Label(L1_);
  //     SW(a0,gp,4);
  //     CALL(LabelRef(wait_));

  //     endASM();
  //  end

  initial     
	begin
    ram[0] = 32'h004001b7;
    ram[1] = 32'h00000533;
    ram[2] = 32'h00100293;
    ram[3] = 32'h01129293;
    ram[4] = 32'h00150513;
    ram[5] = 32'h00A1A223;
    ram[6] = 32'hFFFFF317;
    ram[7] = 32'hFF4300E7;

	end

	always @(posedge clk) 
		if (write) 
			ram[addr_in] <= data;	
		
	assign instr = ram[pc[31:2]]; 
endmodule
