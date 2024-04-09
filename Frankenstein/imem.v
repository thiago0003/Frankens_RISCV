/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */


// Modulo de registradores
module imem(   input  wire        clk, 
               input  wire        write,
               input  wire [31:0] pc, addr_in, 
               input  wire [31:0] data, 
               output wire [31:0] instr);
					
  // localparam slow_bit=17;

  reg [31:0] ram[0:255];

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
ram[0] = 32'hfe010113;
ram[1] = 32'h00112e23;
ram[2] = 32'h00812c23;
ram[3] = 32'h02010413;
ram[4] = 32'hfe042623;
ram[5] = 32'h00000513;
ram[6] = 32'h00000317;
ram[7] = 32'h024300e7;
ram[8] = 32'hfec42503;
ram[9] = 32'h00000317;
ram[10] = 32'h018300e7;
ram[11] = 32'hfec42783;
ram[12] = 32'h00178793;
ram[13] = 32'hfef42623;
ram[14] = 32'hfe9ff06f;
ram[15] = 32'hfe010113;
ram[16] = 32'h00812e23;
ram[17] = 32'h02010413;
ram[18] = 32'hfea42623;
ram[19] = 32'h00128293;
ram[20] = 32'h01729293;
ram[21] = 32'hfec42783;
ram[22] = 32'h00f2a023;
ram[23] = 32'hfef42623;
ram[24] = 32'h00000013;
ram[25] = 32'h01c12403;
ram[26] = 32'h02010113;
ram[27] = 32'h00008067;
ram[28] = 32'hfe010113;
ram[29] = 32'h00812e23;
ram[30] = 32'h02010413;
ram[31] = 32'hfea42623;
ram[32] = 32'hfeb42423;
ram[33] = 32'h00000813;
ram[34] = 32'h00000293;
ram[35] = 32'hfe842783;
ram[36] = 32'h00128293;
ram[37] = 32'h01829293;
ram[38] = 32'h00f282b3;
ram[39] = 32'hfe842703;
ram[40] = 32'h02000793;
ram[41] = 32'h00f71c63;
ram[42] = 32'hfec42783;
ram[43] = 32'h00f2a023;
ram[44] = 32'hfef42623;
ram[45] = 32'hfff00793;
ram[46] = 32'h0400006f;
ram[47] = 32'hfe842703;
ram[48] = 32'h01000793;
ram[49] = 32'h00f71e63;
ram[50] = 32'hfec42783;
ram[51] = 32'h00f282b3;
ram[52] = 32'h0002a803;
ram[53] = 32'hfef42623;
ram[54] = 32'h010007b3;
ram[55] = 32'h01c0006f;
ram[56] = 32'hfec42783;
ram[57] = 32'h00f2a023;
ram[58] = 32'h00f282b3;
ram[59] = 32'h0002a803;
ram[60] = 32'hfef42623;
ram[61] = 32'h010007b3;
ram[62] = 32'h00f00533;
ram[63] = 32'h01c12403;
ram[64] = 32'h02010113;
ram[65] = 32'h00008067;
	end

		
	assign instr = ram[pc[31:2]]; 
endmodule




// RX
//ram[0] = 32'h00100093;
//ram[1] = 32'h01809093;
//ram[2] = 32'h01008093;
//ram[3] = 32'h0080a023;
//ram[4] = 32'hffdff06f;
