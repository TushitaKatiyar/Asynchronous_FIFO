`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:23:14 12/31/2024 
// Design Name: 
// Module Name:    asyncfifo 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module asyncfifo( 
input wr_clk,
input rd_clk,
input rst,
input wr_en,
input rd_en,
input [7:0] write_data,
output reg [7:0] read_data,
output wire empty,
output wire full
    );
	 parameter fifo_depth=8;
	 parameter add_size=4;
	 
	 reg [3:0] wptr, rptr;
	 wire [3:0] wptr_gray, rptr_gray;
	 
	 //fifo memory of 8 entries of 8 bit wide
	 reg [7:0] mem [7:0];
	 
	 reg [3:0] wptr_gray_sync, rptr_gray_sync;
	 reg [3:0] wptr_gray_ff1, wptr_gray_ff2, rptr_gray_ff1, rptr_gray_ff2;
	 //write data
	 always @(posedge wr_clk)
	 begin
	 if(rst)
	 begin 
	 wptr<=4'b0000;
	 end
	 else if (wr_en&&!full)
	 begin 
	 mem[wptr]<=write_data;
	 wptr<=wptr+1;
	 end
	 end
	 //read data
	  always @(posedge rd_clk)
	 begin
	 if(rst)
	 begin 
	 rptr<=4'b0000;
	 end
	 else if (rd_en&&!empty)
	 begin 
	 read_data<=mem[rptr];
	 rptr<=rptr+1;
	 end
	 end
	 //b2g
	 assign wptr_gray=wptr^(wptr>>1);
	 assign rptr_gray=rptr^(rptr>>1);
//synchronise write pointer in read clock domain
    always @(posedge rd_clk) begin
	 if(rst) begin
	 wptr_gray_ff1<=0;
	 wptr_gray_ff2<=0;
	 wptr_gray_sync<=0;
	 end
	 else begin
	 wptr_gray_ff1<=wptr_gray;
	 wptr_gray_ff2<=wptr_gray_ff1;
	 wptr_gray_sync<=wptr_gray_ff2;
	 end
	 end
	 //synchronise read pointer in write clock domain
    always @(posedge wr_clk) begin
	 if(rst) begin
	 rptr_gray_ff1<=0;
	 rptr_gray_ff2<=0;
	 rptr_gray_sync<=0;
	 end
	 else begin
	 rptr_gray_ff1<=rptr_gray;
	 rptr_gray_ff2<=rptr_gray_ff1;
	 rptr_gray_sync<=rptr_gray_ff2;
	 end
	 end
	 //empty condition
	 assign empty=(rptr_gray==wptr_gray_sync);
	 //full condition
	 assign full=((wptr_gray[3]!=rptr_gray_sync[3])&&(wptr_gray[2:0]==rptr_gray_sync[2:0]));
	 
endmodule
