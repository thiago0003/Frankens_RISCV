

//IMPORTED BLOCK:inverterC
module inverterC( 
A,
Q
); 

//-----------Input Ports--------------- 
input A;

//-----------Output Ports--------------- 
output Q; 

//-------------Code Start----------------- 
assign Q = ! A;

endmodule




//IMPORTED BLOCK:bus_to_wires
// Bloco separador de barramento de 8 bits para uso na ferramenta 
module bus_to_wires (in,out_0,out_1,out_2,out_3,out_4,out_5,out_6,out_7);

// Inputs e Outputs
input wire [7:0] in;
output wire out_0,out_1,out_2,out_3,out_4,out_5,out_6,out_7;

// Comportamento do circuito
assign out_0 = in[0];
assign out_1 = in[1];
assign out_2 = in[2];
assign out_3 = in[3];
assign out_4 = in[4];
assign out_5 = in[5];
assign out_6 = in[6];
assign out_7 = in[7];

endmodule




//IMPORTED BLOCK:one_hz_clock
`define clock_frequnecy 27_000_000
module one_hz_clock #(parameter DELAY = 1000)(input clk,            // clk input
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




//IMPORTED BLOCK:screen
module screen
#(
  parameter STARTUP_WAIT = 32'd10000000
)
(
    input clk,
    output ioSclk,
    output ioSdin,
    output ioCs,
    output ioDc,
    output ioReset,
    output [9:0] pixelAddress,
    input [7:0] pixelData
);

  localparam STATE_INIT_POWER = 3'd0;
  localparam STATE_LOAD_INIT_CMD = 3'd1;
  localparam STATE_SEND = 3'd2;
  localparam STATE_CHECK_FINISHED_INIT = 3'd3;
  localparam STATE_LOAD_DATA = 3'd4;
  localparam STATE_START = 3'd7;

  reg [32:0] counter = 0;
  reg [2:0] state = STATE_START;

  reg dc = 1;
  reg sclk = 1;
  reg sdin = 0;
  reg reset = 1;
  reg cs = 0;

  reg [7:0] dataToSend = 0;
  reg [2:0] bitNumber = 0;  
  reg [9:0] pixelCounter = 0;

  localparam SETUP_INSTRUCTIONS = 23;
  reg [(SETUP_INSTRUCTIONS*8)-1'b1:0] startupCommands = {
    8'hAE,  // display off

    8'h81,  // contast value to 0x7F according to datasheet
    8'h7F,  

    8'hA6,  // normal screen mode (not inverted)

    8'h20,  // horizontal addressing mode
    8'h00,  

    8'hC8,  // normal scan direction

    8'h40,  // first line to start scanning from

    8'hA1,  // address 0 is segment 0

    8'hA8,  // mux ratio
    8'h3f,  // 63 (64 -1)

    8'hD3,  // display offset
    8'h00,  // no offset

    8'hD5,  // clock divide ratio
    8'h80,  // set to default ratio/osc frequency

    8'hD9,  // set precharge
    8'h22,  // switch precharge to 0x22 default

    8'hDB,  // vcom deselect level
    8'h20,  //  0x20 

    8'h8D,  // charge pump config
    8'h14,  // enable charge pump

    8'hA4,  // resume RAM content

    8'hAF   // display on
  };
  reg [7:0] commandIndex = SETUP_INSTRUCTIONS * 8;

  assign ioSclk = sclk;
  assign ioSdin = sdin;
  assign ioDc = dc;
  assign ioReset = reset;
  assign ioCs = cs;

  assign pixelAddress = pixelCounter;

  always @(posedge clk) begin
    case (state)
      STATE_START: begin
        counter <= 0;
        reset <= 1;
        dc <= 1;
        sclk <= 1;
        sdin <= 0;
        cs <= 0;
        state <= STATE_INIT_POWER;

      end
      STATE_INIT_POWER: begin
        counter <= counter + 1;
        if (counter < STARTUP_WAIT*2)
          reset <= 1;
        else if (counter < STARTUP_WAIT * 3)
          reset <= 0;
        else if (counter < STARTUP_WAIT * 4)
          reset <= 1;
        else begin
          state <= STATE_LOAD_INIT_CMD;
          counter <= 33'b0;
        end
      end
      STATE_LOAD_INIT_CMD: begin
        dc <= 0;
        dataToSend <= startupCommands[(commandIndex-1)-:8'd8];
        state <= STATE_SEND;
        bitNumber <= 3'd7;
        cs <= 0;
        commandIndex <= commandIndex - 8'd8;
      end
      STATE_SEND: begin
        counter <= counter +32'd1;
        if(counter[1] == 1'b0) begin
          sclk <= 0;
          sdin <= dataToSend[bitNumber];
        end
        else  if(counter[1:0] == 2'b10) begin
          sclk <= 1;
        end
        else begin
          if(bitNumber == 0) begin
            state <= STATE_CHECK_FINISHED_INIT;
            counter <= 33'd0;
          end else
            bitNumber <= bitNumber - 1;
        end                    
      end
      
      STATE_CHECK_FINISHED_INIT: begin
          cs <= 1;
          if (commandIndex == 0) begin
            state <= STATE_LOAD_DATA; 
          end
          else
            state <= STATE_LOAD_INIT_CMD; 
      end
      STATE_LOAD_DATA: begin
        pixelCounter <= pixelCounter + 1'b1;
        cs <= 0;
        dc <= 1;
        bitNumber <= 3'd7;
        state <= STATE_SEND;
        dataToSend <= pixelData;
      end
      default:
        state <= STATE_INIT_POWER;
        
    endcase
  end
endmodule



//IMPORTED BLOCK:textEngine
module textEngine (
    input clk,
    input [9:0] pixelAddress,
    input [7:0] charOutput,
    output [7:0] pixelData,
    output [5:0] charAddress
    
);
    reg [7:0] fontBuffer [1519:0];
    initial $readmemh("font.hex", fontBuffer);

    wire [2:0] columnAddress;
    wire topRow;

    reg [7:0] outputBuffer;
    wire [7:0] chosenChar;

    always @(posedge clk) begin
        outputBuffer <= fontBuffer[((chosenChar-8'd32) << 4) + (columnAddress << 1) + (topRow ? 0 : 1)];
    end 

    assign charAddress = {pixelAddress[9:8],pixelAddress[6:3]};
    assign columnAddress = pixelAddress[2:0];
    assign topRow = !pixelAddress[7];

    assign chosenChar = (charOutput >= 8'd32 && charOutput <= 8'd126) ? charOutput : 8'd32;
    assign pixelData = outputBuffer;
endmodule



//IMPORTED BLOCK:mux4_8
module mux4_8(clk, sinalA, sinalB, sinalC, sinalD, select, muxOut);
  // I/O Port Declaration
  input clk;
  input [7:0] sinalA, sinalB, sinalC, sinalD;
  input [1:0] select;
  output reg [7:0]muxOut;
  initial begin
    	muxOut = 8'b0;
  end
  // Case Block - Choosing the output
  always @(posedge clk) begin
    case (select)
      0 : muxOut <= sinalA;
      1 : muxOut <= sinalB;
      2 : muxOut <= sinalC;
      3 : muxOut <= sinalD;
    endcase
  end
endmodule



//IMPORTED BLOCK:stringbyte
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



//IMPORTED BLOCK:bus_to_bus_4_5
module bus_to_bus_4_5 (in,out_45); 
  // Inputs e Outputs 
  input wire [7:0] in; 
  output wire [1:0] out_45;
  // Comportamento do circuito 
  assign out_45[0] = in[4];
  assign out_45[1] = in[5];
endmodule



//IMPORTED BLOCK:blockram
module blockram #(
  parameter   BYTE_WIDTH = 8,
              ADDRESS_WIDTH = 32,
		      DEPTH = 50,
		      BYTES = 4,
		      DATA_WIDTH_R = BYTE_WIDTH * BYTES
)
(	
	input [ADDRESS_WIDTH-1:0] addr,
	input [BYTES-1:0] be,
	input [DATA_WIDTH_R-1:0] data_in, 
	input we, clk,
	output [DATA_WIDTH_R-1:0] data_out);


	// model the RAM with two dimensional packed array
	reg [BYTE_WIDTH-1:0] ram[0:DEPTH-1][0:BYTES-1];

	reg [DATA_WIDTH_R-1:0] data_reg;

 	// port A
	always@(posedge clk)
	begin
		if(we) begin
		   // edit this code if using other than four bytes per word
			if(be[0]) ram[addr[31:2]][0] <= data_in[ 7: 0];
			if(be[1]) ram[addr[31:2]][1] <= data_in[15: 8];
			if(be[2]) ram[addr[31:2]][2] <= data_in[23:16];
			if(be[3]) ram[addr[31:2]][3] <= data_in[31:24];
		end
		
      data_reg <= {ram[addr[31:2]][3], ram[addr[31:2]][2], ram[addr[31:2]][1], ram[addr[31:2]][0]};
	end

	assign data_out = data_reg;
endmodule




//IMPORTED BLOCK:power_on_reset
module power_on_reset(
  input clk, 
  output resetn);

  reg [2:0] q;
 
  always@(posedge clk)
       q <= {q,1'b1};

  assign resetn = &q;
endmodule



//IMPORTED BLOCK:imem
module imem(   input  wire        clk, 
               input  wire        write,
               input  wire [31:0] pc, addr_in, 
               input  wire [31:0] data, 
               output wire [31:0] instr);
					
  reg [31:0] ram[0:127];

  initial     
	begin
ram[1] = 32'h00000013;
ram[2] = 32'h000007b7;
ram[3] = 32'h00078793;
ram[4] = 32'h09600713;
ram[5] = 32'hfff70713;
ram[6] = 32'h00e7a223;
ram[7] = 32'h000007b7;
ram[8] = 32'h00078793;
ram[9] = 32'h0047a703;
ram[10] = 32'h000007b7;
ram[11] = 32'h00078793;
ram[12] = 32'h00e7a023;
ram[13] = 32'h000007b7;
ram[14] = 32'h00078793;
ram[15] = 32'h0047a703;
ram[16] = 32'h09600793;
ram[17] = 32'hfce7f0e3;
ram[18] = 32'h000007b7;
ram[19] = 32'h00078793;
ram[20] = 32'h0007a783;
ram[21] = 32'h00f00733;
ram[22] = 32'h000007b7;
ram[23] = 32'h06478793;
ram[24] = 32'h00e7a023;

	end

	always @(posedge clk) 
		if (write) 
			ram[addr_in] <= data;	
		
	assign instr = ram[pc[31:2]]; 
endmodule




//IMPORTED BLOCK:register
module register(input  wire        clk, 
               input  wire        reg_write,
               input  wire [4:0]  reg_addr1, reg_addr2, addr, 
               input  wire [31:0] write_reg, 
               output wire [31:0] rd1, rd2);
					
  reg [31:0] rf[31:0];

	always @(posedge clk) 
		if (reg_write) 
			rf[addr] <= write_reg;	
		
	assign rd1 = (reg_addr1 != 5'b0) ? rf[reg_addr1] : 32'b0; 
	assign rd2 = (reg_addr2 != 5'b0) ? rf[reg_addr2] : 32'b0;
endmodule




//IMPORTED BLOCK:franken_riscv
module franken_riscv( input  		    clk, reset,
                      output reg [31:0] pc,
                      input         [31:0] instruction,
                      output reg	    mem_write_Mem,
			          output reg [3: 0] byte_enable,
                      output reg [31:0] alu_result_Exec, 
			          output reg [31:0] write_data,
                      input  	 [31:0] read_data,
					  output reg 		reg_write_WB, // Register Bank 
					  output	 [4:0]  RS1, RS2, 
					  output reg [4:0]  RD_WB,
					  output reg [31:0] write_reg_WB,
					  input 	 [31:0] src1_Dec, src2_Dec	
);

	// Variáveis
		
		// reg Exec 
		reg is_conditional_jump_Exec, mem_write_Exec, mem_read_Exec, reg_write_Exec;
		reg [4:0] RD_Exec;
		reg [31:0] jump_add_Exec, src2_Exec;

		// reg Mem
		reg mem_read_Mem, reg_write_Mem;
		reg [31:0] alu_result_Mem, data_load;
		reg [4:0] RD_Mem;
	
	//------------------------------------------------- FETCH ------------------------------------------------- //
	
	// Atualiza nosso valor de PC
	wire [31:0] next_pc =	reset 				? 32'b0:
						is_conditional_jump_Dec	? jump_add_Exec: // Flush: Force pc to stay in instruction
						stall 					? pc + 32'd4:
						pc + 32'd4;

	// current_state == FETCH
	always @(posedge clk)
    	pc <= next_pc;

	//------------------------------------------------- DECODE -------------------------------------------------//
	
	reg [6:0] funct7_, opcode;
	reg [4:0] rd_, rs1, rs2;
	reg [2:0] funct3_;
	reg [31:0] imm, pc_dec;
	reg[1:0] Fwd_A, Fwd_B;
	reg stall;

	always @(negedge clk)
	begin

		// Recebe os valores que sao passados na instruçao
		opcode <= instruction[6:0];

		rd_ <= instruction[11:7];

		funct3_ <= instruction[14:12];

		rs1 <= instruction[19:15];

		rs2 <= instruction[24:20];

		funct7_ <= instruction[31:25];

		imm <=	(instruction[6:0] == 7'b1100111 | instruction[6:0] == 7'b0000011 | instruction[6:0] == 7'b0010011) ? ({{20{instruction[31]}},instruction[31:20]}):
				(instruction[6:0] == 7'b0100011) ? ({{20{instruction[31]}},instruction[31:25],instruction[11:7]}):		
				(instruction[6:0] == 7'b1100011) ? ({{19{instruction[31]}},instruction[31],instruction[7],instruction[30:25],instruction[11:8],1'b0}):
				(instruction[6:0] == 7'b0110111 | instruction[6:0] == 7'b0010111) ? ({instruction[31:12],12'b0}):
				(instruction[6:0] == 7'b1101111) ? ({{11{instruction[31]}}, instruction[31],instruction[19:12],instruction[20],instruction[30:21],1'b0}):
			   	32'b0;

		pc_dec <= pc;

		// ------------- Forwarding ------------- //
		if(reg_write_Exec && (RD_Exec == instruction[19:15] && instruction[19:15] != 5'b0))
			Fwd_A <= 2'b10;
		else if(reg_write_Mem && (RD_Mem == instruction[19:15] && instruction[19:15] != 5'b0))
			Fwd_A <= 2'b01;
		else
			Fwd_A <= 2'b00;

		if(reg_write_Exec && (RD_Exec == instruction[24:20] && instruction[24:20] != 5'b0))
			Fwd_B <= 2'b10;
		else if(reg_write_Mem && (RD_Mem == instruction[24:20] && instruction[24:20] != 5'b0))
			Fwd_B <= 2'b01;
		else
			Fwd_B <= 2'b00;

		// ------------- Hazard Detection ------------- //
		if(mem_read_Exec &&  (RD_Exec == instruction[11:7] || RD_Exec == instruction[24:20]) && RD_Exec != 5'b00000)
			stall <= 1;
		else
			stall <= 0;
	end
	
	//Instruction Type 

	// R-Type 
	wire R_type  = (opcode == 7'b0110011);
	wire is_add  = (R_type & funct3 == 3'b000 & funct7 == 7'b0000000);
	wire is_sub	 = (R_type & funct3 == 3'b000 & funct7 == 7'b0100000);
	wire is_xor	 = (R_type & funct3 == 3'b100 & funct7 == 7'b0000000);
	wire is_or 	 = (R_type & funct3 == 3'b110 & funct7 == 7'b0000000);
	wire is_and  = (R_type & funct3 == 3'b111 & funct7 == 7'b0000000);
	wire is_sltu = (R_type & funct3 == 3'b011 & funct7 == 7'b0000000);
	wire is_sll  = (R_type & funct3 == 3'b001 & funct7 == 7'b0000000);
	wire is_slt	 = (R_type & funct3 == 3'b010 & funct7 == 7'b0000000);
	wire is_srl  = (R_type & funct3 == 3'b101 & funct7 == 7'b0000000);
	wire is_sra  = (R_type & funct3 == 3'b101 & funct7 == 7'b0100000);


	// I-Type
	wire I_type   = (opcode == 7'b1100111 | opcode == 7'b0000011 | opcode == 7'b0010011);
	wire is_jalr  = (funct3 == 3'b000 & opcode == 7'b1100111);
	wire is_lb    = (funct3 == 3'b000 & opcode == 7'b0000011);
	wire is_lh    = (funct3 == 3'b001 & opcode == 7'b0000011);
	wire is_lw    = (funct3 == 3'b010 & opcode == 7'b0000011);
	wire is_lbu   = (funct3 == 3'b100 & opcode == 7'b0000011);
	wire is_lhu   = (funct3 == 3'b101 & opcode == 7'b0000011);
	wire is_addi  = (funct3 == 3'b000 & opcode == 7'b0010011);
	wire is_slti  = (funct3 == 3'b010 & opcode == 7'b0010011);
	wire is_sltiu = (funct3 == 3'b011 & opcode == 7'b0010011);
	wire is_xori  = (funct3 == 3'b100 & opcode == 7'b0010011);
	wire is_ori   = (funct3 == 3'b110 & opcode == 7'b0010011);
	wire is_andi  = (funct3 == 3'b111 & opcode == 7'b0010011);
	wire is_slli  = (funct3 == 3'b001 & funct7 == 7'b0000000 & opcode == 7'b0010011);
	wire is_srli  = (funct3 == 3'b101 & funct7 == 7'b0000000 & opcode == 7'b0010011);
	wire is_srai  = (funct3 == 3'b101 & funct7 == 7'b0100000 & opcode == 7'b0010011);
	

	// S-Type
	wire S_type = (opcode == 7'b0100011);
	wire is_sw  = (S_type & funct3 == 3'b010);
	wire is_sb  = (S_type & funct3 == 3'b000);
	wire is_sh  = (S_type & funct3 == 3'b001);
	

	// B-Type
	wire B_type  = (opcode == 7'b1100011);
	wire is_bge  = (B_type & funct3 == 3'b101);
	wire is_beq  = (B_type & funct3 == 3'b000);
	wire is_blt  = (B_type & funct3 == 3'b100);
	wire is_bne  = (B_type & funct3 == 3'b001);
	wire is_bltu = (B_type & funct3 == 3'b110);
	wire is_bgeu = (B_type & funct3 == 3'b111);


	// U-Type 
	wire U_type = (opcode == 7'b0110111 | opcode == 7'b0010111);
	wire is_auipc = opcode == 7'b0010111;
	wire is_lui = opcode == 7'b0110111;
	

	// J-Type
	wire J_type = (opcode == 7'b1101111);
	wire is_jal = (J_type);


	// System-Type
	wire fence  = (opcode == 7'b0001111 & funct3 == 3'b000);
	// wire ecall  = (opcode == 7'b1110011 & funct3 == 3'b000 & instruction[31:25] == 12'b000000000000);
	// wire ebreak = (opcode == 7'b1110011 & funct3 == 3'b000 & instruction[31:25] == 12'b000000000001);
	
	// Decodificaçao das instruçoes e seus respectivos tipos 
	// wire [4:0] RS1;
	assign RS1 = (R_type | I_type | S_type | B_type) 	? rs1 : 5'b000000;
	
	// wire [4:0] RS2;
	assign RS2 = (R_type | S_type | B_type)         	? rs2 : 5'b000000;

	wire [4:0] RD_Dec;
	assign RD_Dec = (R_type | I_type | U_type | J_type) ? rd_ : 5'b000000;
	
	wire [2:0] funct3;
	assign funct3 = (R_type | I_type | S_type | B_type) ? funct3_ : 3'b000;
	
	wire [6:0] funct7;
	assign funct7 = (R_type)                            ? funct7_ : 7'b000000;


	//---------------------------- Controler ---------------------------------------------//

		// -------------- Sianis de Controle Exec -------------- //
		//Condiçao de salto
		wire is_conditional_jump_Dec = (is_beq || is_bne || is_blt || is_bge || is_jal || is_jalr || is_bgeu);


		// -------------- Sinais de Controle Memory -------------- //
		wire mem_write_Dec = S_type;
		wire mem_read_Dec = (is_lb || is_lbu || is_lh || is_lhu || is_lw);

		// -------------- Sinais de Controle WB -------------- //
		wire reg_write_Dec = (R_type || S_type || B_type || I_type || U_type) && RD_Dec != 5'b0;

	wire [31:0] src1_forward, src2_forward;

	assign src1_forward =	(Fwd_A == 2'b10) ? alu_result_Mem:
							(Fwd_A == 2'b01) ? write_reg_WB:
							src1_Dec; 

	assign src2_forward =	(Fwd_B == 2'b10) ? alu_result_Mem:
							(Fwd_B == 2'b01) ? write_reg_WB:
							src2_Dec; 

	// current_state == EXEC
	always @(posedge clk)
	begin

		// Exec
		is_conditional_jump_Exec <= is_conditional_jump_Dec;

		//Memory 
		mem_write_Exec <= mem_write_Dec;
		mem_read_Exec <= mem_read_Dec;
		src2_Exec <= src2_Dec;

		// WB
		reg_write_Exec <= reg_write_Dec;
		RD_Exec  <= RD_Dec;

		//-------------------------------------ALU-------------------------------------------------//

		// Caso nossa instruçao seja de JUMP, temos que calcular a nova posiçao para nosso PC.
		jump_add_Exec <=	is_jal 										          ? pc_dec 			  + $signed(imm):
							is_jalr 									          ? $signed(src2_forward) + $signed(imm):
							(is_beq  && ($signed(src1_forward) == $signed(src2_forward))) ? pc_dec		 	  + $signed(imm):
							(is_bne  && ($signed(src1_forward) != $signed(src2_forward))) ? pc_dec 			  + $signed(imm):
							(is_blt  && ($signed(src1_forward)  < $signed(src2_forward))) ? pc_dec			  + $signed(imm):
							(is_bltu && (src1_forward  < src2_forward)) 				  ? pc_dec			  + $signed(imm):
							(is_bge  && ($signed(src1_forward) >= $signed(src2_forward))) ? pc_dec 			  + $signed(imm):
							(is_bgeu && (src1_forward >= src2_forward)) 				  ? pc_dec 			  + $signed(imm):
							pc_dec + 32'd4;

		alu_result_Exec <=  is_add   	? $signed(src1_forward) + $signed(src2_forward):
							is_addi		? $signed(src1_forward) + $signed(imm):
							is_sub		? $signed(src1_forward) - $signed(src2_forward):
							is_andi		? $signed(src1_forward) & $signed(imm):
							is_and		? $signed(src1_forward) & $signed(src2_forward):
							is_or		? $signed(src1_forward) | $signed(src2_forward):
							is_ori		? $signed(src1_forward) | $signed(imm): 
							is_slli		? $signed(src1_forward) << $signed(imm[4:0]):
							is_srli		? $signed(src1_forward) >> $signed(imm[4:0]):
							is_auipc	? $signed(pc_dec) + $signed(imm):
							J_type   	? jump_add_Exec:
							S_type 		? $signed(src1_forward) + $signed(imm): 
							is_lui		? imm:
							is_xor		? $signed(src1_forward) ^ $signed(src2_forward):
							is_xori		? $signed(src1_forward) ^ $signed(imm):
							is_lb		? src1_forward + imm:
							is_lbu		? src1_forward + imm:
							is_lh		? src1_forward + imm:
							is_lhu	    ? src1_forward + imm:
							is_lw	    ? src1_forward + imm:
							is_sltiu	? src1_forward < imm:
							is_slti		? $signed(src1_forward) < $signed(imm):
							is_sltu		? src1_forward < src2_forward:
							is_sll		? $signed(src1_forward) << $signed(src2_forward):
							is_slt		? $signed(src1_forward) < $signed(src2_forward):
							is_srl		? $signed(src1_forward) >> $signed(src2_forward):
							is_srai     ? $signed(src1_forward) >>> $signed(imm[4:0]):
							is_sra      ? $signed(src1_forward) >>> $signed(src2_forward):
							32'b0;
	end

	// current_state == MEM
	always @(negedge clk)
		begin

			//Memory 
			mem_write_Mem <= mem_write_Exec;
			mem_read_Mem <= mem_read_Exec; // Não utilizado (ainda)

			// WB
			reg_write_Mem <= reg_write_Exec;
			RD_Mem  <= RD_Exec;
			alu_result_Mem <= alu_result_Exec;
			// write_reg_Mem <= write_reg_Exec;


			//-------------------------------------MEMORY ACCESS-------------------------------------------------//

			// Valor que sera salvo na nossa memoria e a condicional de escrita
			write_data <= is_sw ? src2_Exec : (is_sb ? (alu_result_Exec[1:0]==3 ? {src2_Exec[7:0], 24'h000000} : 
													   alu_result_Exec[1:0]==2 ? {8'h00, src2_Exec[7:0], 16'h0000} :
													   alu_result_Exec[1:0]==1 ? {16'h0000, src2_Exec[7:0], 8'h00} :
																				 {24'h000000, src2_Exec[7:0]}) :
											  is_sh ?  alu_result_Exec[1:0]==2 ? {src2_Exec[15:0], 16'h0000} :
																				 {16'h0000, src2_Exec[15:0]} :
																								32'bX);
			
			// Escrita alinhada na memoria
			byte_enable <= is_lbu || is_sb ? (alu_result_Exec[1:0]==3 ? 4'b1000 : // sb/lb
											  alu_result_Exec[1:0]==2 ? 4'b0100 : 
											  alu_result_Exec[1:0]==1 ? 4'b0010 : 
																		4'b0001): 
						   is_lh || is_sh  ? (alu_result_Exec[1:0]==2 ? 4'b1100 : // sh/lh
																		4'b0011):
																		4'b1111;  // lw/sw
			
			//Acerta a posiçao para ser lido em memoria 
			data_load <= is_lbu ? (alu_result_Exec[1:0]==3 ? {24'h000000, read_data[31:24]} : 
							   	   alu_result_Exec[1:0]==2 ? {24'h000000, read_data[23:16]} : 
							       alu_result_Exec[1:0]==1 ? {24'h000000, read_data[15: 8]} : 
														     {24'h000000, read_data[ 7: 0]}):
					 	 is_lb  ? (alu_result_Exec[1:0]==3 ? {24'h000000, $signed(read_data[31:24])} : 
							   	   alu_result_Exec[1:0]==2 ? {24'h000000, $signed(read_data[23:16])} : 
							       alu_result_Exec[1:0]==1 ? {24'h000000, $signed(read_data[15: 8])} : 
														     {24'h000000, $signed(read_data[ 7: 0])}):
					 	 is_lh  ? (alu_result_Exec[1:0]==2 ? {{16{read_data[31]}}, $signed(read_data[31:16])} :
					 									     {{16{read_data[31]}}, $signed(read_data[15: 0])}):
					 	 is_lhu ? (alu_result_Exec[1:0]==2 ? {16'h000000, read_data[31:16]} :
														     {16'h000000, read_data[15: 0]}):
																	 	  read_data;
		end

	// current_state == WB
	always @(posedge clk)
		begin
			reg_write_WB <= reg_write_Mem;
			RD_WB  <= RD_Mem;
			write_reg_WB <= mem_read_Mem ? data_load : alu_result_Mem;
		end

endmodule




//IMPORTED BLOCK:alu_decoder
module alu_decoder (
   input             clk,
   input      [31:0] instruction,R1, R2, RD,
   output reg [127 :0] data_out1, data_out2, data_out3, data_out4 
   );

   wire [127:0] hex_code;

   always @(posedge clk)
   begin
    data_out1 <= hex_code;

	data_out2[127:95] <= R_type ? 32'h52_44_3A_00 : 32'h49_4D_4D_3A;
	data_out2[63:0]   <= R_type ? RD_ : imm_;

	if(U_type)
		data_out3 <= 128'h0;
	else if(is_jalr)
		data_out3 <= 128'h52_31_00_2B_00_49_4D_4D;
	else if(J_type || B_type)
		data_out3 <= 128'h50_43_3A_00_2B_00_49_4D_4D;
	else
	begin
		data_out3[127:95] <= 32'h52_31_3A_00;
		data_out3[63:0]   <= R1_;
	end

	data_out4[127:95] <= I_type || U_type || J_type ? 32'h52_44_3A_00 : 32'h52_32_3A_00;
    data_out4[63:0] <= I_type || U_type || J_type ? RD_ : R2_;
   end

   wire [63:0] R1_, R2_, RD_, imm_;
   ascii_decoder ascii_decoder1_1(R1[3 : 0], R1_[7:0]);
   ascii_decoder ascii_decoder1_2(R1[7 : 4], R1_[15:8]);
   ascii_decoder ascii_decoder1_3(R1[11: 8], R1_[23:16]);
   ascii_decoder ascii_decoder1_4(R1[15:12], R1_[31:24]);
   ascii_decoder ascii_decoder1_5(R1[19:16], R1_[39:32]);
   ascii_decoder ascii_decoder1_6(R1[23:20], R1_[47:40]);
   ascii_decoder ascii_decoder1_7(R1[27:24], R1_[55:48]);
   ascii_decoder ascii_decoder1_8(R1[31:28], R1_[63:56]);

   ascii_decoder ascii_decoder2_1(R2[3 : 0], R2_[7:0]);
   ascii_decoder ascii_decoder2_2(R2[7 : 4], R2_[15:8]);
   ascii_decoder ascii_decoder2_3(R2[11: 8], R2_[23:16]);
   ascii_decoder ascii_decoder2_4(R2[15:12], R2_[31:24]);
   ascii_decoder ascii_decoder2_5(R2[19:16], R2_[39:32]);
   ascii_decoder ascii_decoder2_6(R2[23:20], R2_[47:40]);
   ascii_decoder ascii_decoder2_7(R2[27:24], R2_[55:48]);
   ascii_decoder ascii_decoder2_8(R2[31:28], R2_[63:56]);

   ascii_decoder ascii_decoder3_1(imm[3 : 0], imm_[7:0]);
   ascii_decoder ascii_decoder3_2(imm[7 : 4], imm_[15:8]);
   ascii_decoder ascii_decoder3_3(imm[11: 8], imm_[23:16]);
   ascii_decoder ascii_decoder3_4(imm[15:12], imm_[31:24]);
   ascii_decoder ascii_decoder3_5(imm[19:16], imm_[39:32]);
   ascii_decoder ascii_decoder3_6(imm[23:20], imm_[47:40]);
   ascii_decoder ascii_decoder3_7(imm[27:24], imm_[55:48]);
   ascii_decoder ascii_decoder3_8(imm[31:28], imm_[63:56]);

   ascii_decoder ascii_decoder4_1(RD[3 : 0], RD_[7:0]);
   ascii_decoder ascii_decoder4_2(RD[7 : 4], RD_[15:8]);
   ascii_decoder ascii_decoder4_3(RD[11: 8], RD_[23:16]);
   ascii_decoder ascii_decoder4_4(RD[15:12], RD_[31:24]);
   ascii_decoder ascii_decoder4_5(RD[19:16], RD_[39:32]);
   ascii_decoder ascii_decoder4_6(RD[23:20], RD_[47:40]);
   ascii_decoder ascii_decoder4_7(RD[27:24], RD_[55:48]);
   ascii_decoder ascii_decoder4_8(RD[31:28], RD_[63:56]);

	// Recebe os valores que sao passados na instruçao
	wire [6:0] opcode;
	assign opcode = instruction[6:0];
	wire [4:0] rd_;
	assign rd_ = instruction[11:7];
	wire [2:0] funct3_;
	assign funct3_ = instruction[14:12];
	wire [4:0] rs1;
	assign rs1 = instruction[19:15];
	wire [4:0] rs2;
	assign rs2 = instruction[24:20];
	wire [6:0] funct7_;
	assign funct7_ = instruction[31:25];

    wire [2:0] funct3;
	assign funct3 = (R_type | I_type | S_type | B_type) ? funct3_ : 3'b000;
	
	wire [6:0] funct7;
	assign funct7 = (R_type)                            ? funct7_ : 7'b000000;
	
	//Instruction Type 

	// R-Type 
	wire R_type  = (opcode == 7'b0110011);                                 
    
    // I-Type
	wire I_type   = (opcode == 7'b1100111 | opcode == 7'b0000011 | opcode == 7'b0010011);

    // S-Type
	wire S_type = (opcode == 7'b0100011);

    // B-Type
	wire B_type  = (opcode == 7'b1100011);

	// U-Type 
	wire U_type = (opcode == 7'b0110111 | opcode == 7'b0010111);

    // J-Type
	wire J_type = (opcode == 7'b1101111);

    wire [31:0] imm;
	assign imm = (I_type) ? ({{20{instruction[31]}},instruction[31:20]}):
				 (S_type) ? ({{20{instruction[31]}},instruction[31:25],instruction[11:7]}):		
				 (B_type) ? ({{19{instruction[31]}},instruction[31],instruction[7],instruction[30:25],instruction[11:8],1'b0}):
				 (U_type) ? ({instruction[31:12],12'b0}):
				 (J_type) ? ({{11{instruction[31]}}, instruction[31],instruction[19:12],instruction[20],instruction[30:21],1'b0}):
				 32'b0;

	wire is_jalr  = (funct3 == 3'b000 & opcode == 7'b1100111);

                                                                                         // ASCII HEX
    assign hex_code = (R_type & funct3 == 3'b000 & funct7 == 7'b0000000)                ? 128'h41_44_44_00_52_31_00_2B_00_52_32_3A :  // is_add
	                  (R_type & funct3 == 3'b000 & funct7 == 7'b0100000)                ? 128'h53_55_42_00_52_31_00_2D_00_52_32_3A :  // is_sub
	                  (R_type & funct3 == 3'b100 & funct7 == 7'b0000000)                ? 128'h58_4F_52_00_52_31_00_5E_00_52_32_3A :  // is_xor
	                  (R_type & funct3 == 3'b110 & funct7 == 7'b0000000)                ? 128'h4F_52_00_52_31_00_7C_00_52_32_3A :  // is_or
	                  (R_type & funct3 == 3'b111 & funct7 == 7'b0000000)                ? 128'h41_4E_44_00_52_31_00_26_00_52_32_3A :  // is_and
	                  (R_type & funct3 == 3'b011 & funct7 == 7'b0000000)                ? 128'h53_4C_54_55_00_52_31_00_3C_00_2B_52_32 :  // is_sltu
	                  (R_type & funct3 == 3'b001 & funct7 == 7'b0000000)                ? 128'h53_4C_4C_00_52_31_3C_3C_00_52_32 :  // is_sll
	                  (R_type & funct3 == 3'b010 & funct7 == 7'b0000000)                ? 128'h53_4C_54_00_52_31_00_3C_00_52_32 :  // is_slt
	                  (R_type & funct3 == 3'b101 & funct7 == 7'b0000000)                ? 128'h53_52_4C_00_52_31_00_3E_00_52_32 :  // is_srl
	                  (R_type & funct3 == 3'b101 & funct7 == 7'b0100000)                ? 128'h53_52_41_00_52_31_00_3E_3E_3E_00_52_32 :  // is_sra
	                  (funct3 == 3'b000 & opcode == 7'b1100111)                         ? 128'h4A_41_4C_52_50_43_2B_52_31_00_2B_00_49_4D_4D :  // is_jalr 
	                  (funct3 == 3'b000 & opcode == 7'b0000011)                         ? 128'h4C_42_00_38_62_69_74_73 :  // is_lb 
	                  (funct3 == 3'b001 & opcode == 7'b0000011)                         ? 128'h4C_48_00_31_36_62_69_74_73 :  // is_lh 
	                  (funct3 == 3'b010 & opcode == 7'b0000011)                         ? 128'h4C_57_00_33_32_62_69_74_73 :  // is_lw 
	                  (funct3 == 3'b100 & opcode == 7'b0000011)                         ? 128'h4C_42_55_00_2B_38_62_69_74_73:  // is_lbu 
	                  (funct3 == 3'b101 & opcode == 7'b0000011)                         ? 128'h4C_48_55_00_2B_31_36_62_69_74_73 :  // is_lhu 
	                  (funct3 == 3'b000 & opcode == 7'b0010011)                         ? 128'h41_44_44_49_00_52_31_00_2B_00_49_4D_4D :  // is_addi 
	                  (funct3 == 3'b010 & opcode == 7'b0010011)                         ? 128'h53_4C_54_49_00_52_31_00_3C_00_49_4D_4D :  // is_slti 
	                  (funct3 == 3'b011 & opcode == 7'b0010011)                         ? 128'h53_4C_54_49_55_00_52_31_00_3C_00_2B_49_4D_4D :  // is_sltiu 
	                  (funct3 == 3'b100 & opcode == 7'b0010011)                         ? 128'h58_4F_52_49_00_52_31_00_5E_00_49_4D_4D :  // is_xori 
	                  (funct3 == 3'b110 & opcode == 7'b0010011)                         ? 128'h4F_52_49_00_52_31_00_7C_00_49_4D_4D :  // is_ori 
	                  (funct3 == 3'b111 & opcode == 7'b0010011)                         ? 128'h41_4E_44_49_00_52_31_00_26_00_49_4D_4D :  // is_andi 
	                  (funct3 == 3'b001 & funct7 == 7'b0000000 & opcode == 7'b0010011)  ? 128'h53_4C_4C_49_00_52_31_00_3C_3C_00_49_4D_4D :  // is_slli
	                  (funct3 == 3'b101 & funct7 == 7'b0000000 & opcode == 7'b0010011)  ? 128'h53_52_4C_49_00_52_31_00_3E_3E_00_49_4D_4D :  // is_srli
	                  (funct3 == 3'b101 & funct7 == 7'b0100000 & opcode == 7'b0010011)  ? 128'h53_52_41_49_00_52_31_00_3E_3E_3E_00_49_4D_4D :  // is_srai
	                  (S_type & funct3 == 3'b010)                                       ? 128'h53_57_00_33_32_62_69_74_73 :  // is_sw
	                  (S_type & funct3 == 3'b000)                                       ? 128'h53_42_00_38_62_69_74_73 :  // is_sb
	                  (S_type & funct3 == 3'b001)                                       ? 128'h53_48_00_31_36_62_69_74_73 :  // is_sh
                      (B_type & funct3 == 3'b101)                                       ? 128'h42_47_45_00_52_31_00_3E_3D_00_52_32 :  // is_bge 
	                  (B_type & funct3 == 3'b000)                                       ? 128'h42_45_51_00_52_31_00_3D_3D_00_52_32 :  // is_beq 
	                  (B_type & funct3 == 3'b100)                                       ? 128'h42_4C_54_00_52_31_00_3C_00_52_32 :  // is_blt 
	                  (B_type & funct3 == 3'b001)                                       ? 128'h42_4E_45_00_52_31_00_21_3D_00_52_32 :  // is_bne 
	                  (B_type & funct3 == 3'b110)                                       ? 128'h42_4C_54_55_00_2B_52_31_00_3C_00_2B_52_32 :  // is_bltu
	                  (B_type & funct3 == 3'b111)                                       ? 128'h42_47_45_55_00_2B_52_31_00_3E_3D_00_2B_52_32 :  // is_bgeu
                      opcode == 7'b0010111                                              ? 128'h41_55_49_50_43 :  // is_auipc
	                  opcode == 7'b0110111                                              ? 128'h4C_55_49_00_49_4D_4D :  // is_lui
	                  (J_type)                                                          ? 128'h4A_41_4C_00_50_43_00_2B_00_49_4D_4D :  //  is_jal
                                                                                          128'h00;

endmodule


module ascii_decoder(
		input [3:0] value,
		output reg [7:0] ascii
);
	always @(value)
	begin
		case (value)
			4'h0 : ascii = 8'h30;
			4'h1 : ascii = 8'h31;
			4'h2 : ascii = 8'h32;
			4'h3 : ascii = 8'h33;
			4'h4 : ascii = 8'h34;
			4'h5 : ascii = 8'h35;
			4'h6 : ascii = 8'h36;
			4'h7 : ascii = 8'h37;
			4'h8 : ascii = 8'h38;
			4'h9 : ascii = 8'h39;
			4'hA : ascii = 8'h41;
			4'hB : ascii = 8'h42;
			4'hC : ascii = 8'h43;
			4'hD : ascii = 8'h44;
			4'hE : ascii = 8'h45;
			4'hF : ascii = 8'h46;
			default: ascii = 8'h00;
		endcase
	end
endmodule



// Automatically generated by ChipInventor Cloud EDA Tool - 2.1
// Careful: this file (hdl.v) will be automatically replaced when you ask
// to generate code from BLOCKS buttons.
module top (

  output wire sck1,
  output wire sda1,
  output wire cs1,
  output wire dc1,
  output wire res1,
  input wire clk

);

//Internal Wires
 wire w_1;
 wire w_2;
 wire [4:0] w_3;
 wire [4:0] w_4;
 wire [4:0] w_5;
 wire [31:0] w_6;
 wire [31:0] w_7;
 wire [31:0] w_9;
 wire w_12;
 wire [7:0] w_13;
 wire [9:0] w_14;
 wire w_15;
 wire w_16;
 wire [127:0] w_17;
 wire [7:0] w_18;
 wire [7:0] w_19;
 wire [7:0] w_23;
 wire [7:0] w_25;
 wire [7:0] w_26;
 wire [7:0] w_27;
 wire [1:0] w_28;
 wire [127:0] w_31;
 wire [127:0] w_32;
 wire [127:0] w_33;
 wire [31:0] w_34;
 wire [31:0] w_35;
 wire [31:0] w_37;
 wire [3:0] w_38;
 wire [31:0] w_39;
 wire w_40;
 wire [31:0] w_41;

//Instances os Modules
register blk219_2 (
         .clk (w_1),
         .reg_write (w_2),
         .reg_addr1 (w_3),
         .reg_addr2 (w_4),
         .addr (w_5),
         .write_reg (w_6),
         .rd1 (w_7),
         .rd2 (w_9),

     );

power_on_reset blk217_4 (
         .clk (w_1),
         .resetn (w_12)
     );

screen blk85_7 (
         .ioSclk (sck1),
         .ioSdin (sda1),
         .ioCs (cs1),
         .ioDc (dc1),
         .ioReset (res1),
         .clk (clk),
         .pixelData (w_13),
         .pixelAddress (w_14)
     );

inverterC blk5_21 (
         .A (w_12),
         .Q (w_15)
     );

stringbyte blk128_26 (
         .clk (clk),
         .mudar (w_16),
         .strng (w_17),
         .sbyte (w_18)
     );

bus_to_wires blk28_27 (
         .out_0 (w_16),
         .in (w_19),

     );

textEngine blk86_28 (
         .clk (clk),
         .pixelData (w_13),
         .pixelAddress (w_14),
         .charAddress (w_19),
         .charOutput (w_23),

     );

mux4_8 blk125_36 (
         .clk (clk),
         .sinalA (w_18),
         .muxOut (w_23),
         .sinalB (w_25),
         .sinalC (w_26),
         .sinalD (w_27),
         .select (w_28)
     );

bus_to_bus_4_5 blk132_38 (
         .in (w_19),
         .out_45 (w_28)
     );

one_hz_clock blk80_42 (
         .clk (clk),
         .out (w_1),

     );

stringbyte blk128_43 (
         .clk (clk),
         .mudar (w_16),
         .sbyte (w_25),
         .strng (w_31)
     );

stringbyte blk128_44 (
         .clk (clk),
         .mudar (w_16),
         .sbyte (w_27),
         .strng (w_32)
     );

stringbyte blk128_45 (
         .clk (clk),
         .mudar (w_16),
         .sbyte (w_26),
         .strng (w_33)
     );

imem blk218_50 (
         .pc (w_34),
         .instr (w_35),

     );

blockram blk216_51 (
         .clk (w_1),
         .addr (w_37),
         .be (w_38),
         .data_in (w_39),
         .we (w_40),
         .data_out (w_41)
     );

alu_decoder blk221_53 (
         .clk (clk),
         .R1 (w_7),
         .R2 (w_9),
         .data_out1 (w_17),
         .data_out2 (w_31),
         .data_out4 (w_32),
         .data_out3 (w_33),
         .instruction (w_35),
         .RD (w_5)
     );

franken_riscv blk220_54 (
         .reg_write_WB (w_2),
         .RS1 (w_3),
         .RS2 (w_4),
         .RD_WB (w_5),
         .write_reg_WB (w_6),
         .src1_Dec (w_7),
         .src2_Dec (w_9),
         .reset (w_15),
         .clk (w_1),
         .pc (w_34),
         .instruction (w_35),
         .alu_result_Exec (w_37),
         .byte_enable (w_38),
         .write_data (w_39),
         .mem_write_Mem (w_40),
         .read_data (w_41),

     );


endmodule
