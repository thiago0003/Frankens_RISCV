module led (
    input clk,          // clk input
    input rst,        // rst input
    output wire [5:0] led    // 6 LEDS pin
);

reg [23:0] counter;
reg [5:0] LEDS;

always @(posedge clk or negedge rst) begin
    if (!rst)
        counter <= 24'd0;
    else if (counter < 24'd1349_9999)       // 0.5s delay
        counter <= counter + 1'b1;
    else
        counter <= 24'd0;
end

always @(posedge clk or negedge rst) begin
    if (!rst)
        LEDS <= 6'b111110;
    else if (counter == 24'd1349_9999)       // 0.5s delay
        LEDS[5:0] <= {LEDS[4:0],LEDS[5]};
    else
        LEDS <= LEDS;
end

assign led = LEDS;

endmodule