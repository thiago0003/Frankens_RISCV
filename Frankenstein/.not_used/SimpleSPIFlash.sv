module SimpleSPIFlash( 
    input wire 	       clk,          // system clock
    input wire 	       rstrb,        // read strobe		
    input wire [19:0]  word_address, // address of the word to be read

    output wire [31:0] rdata,        // data read
    output wire        rbusy,        // asserted if busy receiving data			    

		             // SPI flash pins
    output wire        CLK,  // clock
    output reg         CS_N, // chip select negated (active low)		
    output wire        MOSI, // master out slave in (data to be sent to flash)
    input  wire        MISO  // master in slave out (data received from flash)
);

   reg [5:0]  snd_bitcount;
   reg [31:0] cmd_addr;
   reg [5:0]  rcv_bitcount;
   reg [31:0] rcv_data;
   wire       sending   = (snd_bitcount != 0);
   wire       receiving = (rcv_bitcount != 0);
   wire       busy = sending | receiving;
   assign     rbusy = !CS_N; 
   
   assign  MOSI  = cmd_addr[31];
   initial CS_N  = 1'b1;
   assign  CLK   = !CS_N && !clk; // CLK needs to be inverted (sample on posedge, shift of negedge) 
                                  // and needs to be disabled when not sending/receiving (&& !CS_N).

   // since least significant bytes are read first, we need to swizzle...
   assign rdata = {rcv_data[7:0],rcv_data[15:8],rcv_data[23:16],rcv_data[31:24]};
   
   always @(posedge clk) 
   begin
      if(rstrb) 
      begin
         CS_N <= 1'b0;
         cmd_addr <= {8'h03, 2'b00, word_address[19:0], 2'b00};
         snd_bitcount <= 6'd32;
      end 
      else begin
         if(sending) 
         begin
	         if(snd_bitcount == 1) 
            begin
	            rcv_bitcount <= 6'd32;
	         end

	         snd_bitcount <= snd_bitcount - 6'd1;
	         cmd_addr <= {cmd_addr[30:0],1'b1};
	      end
	 
         if(receiving) 
         begin
	         rcv_bitcount <= rcv_bitcount - 6'd1;
	         rcv_data <= {rcv_data[30:0], MISO};
	      end
	 
         if(!busy) 
         begin
	         CS_N <= 1'b1;
	      end
      end
   end
endmodule
