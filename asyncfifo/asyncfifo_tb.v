`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:31:36 12/31/2024
// Design Name:   asyncfifo
// Module Name:   /home/ise/asyncfifo/asyncfifo_tb.v
// Project Name:  asyncfifo
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: asyncfifo
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module asyncfifo_tb;
   parameter FIFO_DEPTH=8;
	parameter ADD_SIZE=4;

	// Inputs
	reg wr_clk;
	reg rd_clk;
	reg rst;
	reg wr_en;
	reg rd_en;
	reg [7:0] write_data;

	// Outputs
	wire [7:0] read_data;
	wire empty;
	wire full;

	// Instantiate the Unit Under Test (UUT)
	asyncfifo #(.fifo_depth(FIFO_DEPTH),
	            .add_size(ADD_SIZE))
					uut (
		.wr_clk(wr_clk), 
		.rd_clk(rd_clk), 
		.rst(rst), 
		.wr_en(wr_en), 
		.rd_en(rd_en), 
		.write_data(write_data), 
		.read_data(read_data), 
		.empty(empty), 
		.full(full)
	);
	always #5 wr_clk=~wr_clk;
	always #7 rd_clk=~rd_clk;

	initial begin
		// Initialize Inputs
		wr_clk = 0;
		rd_clk = 0;
		rst = 1;
		wr_en = 0;
		rd_en = 0;
		write_data = 8'd0;
		
		#20
		rst=0;
		//write data
		@(negedge wr_clk);//negedge is used to avoid conflict with posedge(data is written into fifo)of design samples
		repeat(FIFO_DEPTH) begin
		if(!full) begin 
		wr_en=1;
		write_data=$random;
		@(negedge wr_clk);
		end 
		end
		wr_en=0;
		
		#50;//wait for read operation
		
		@(negedge rd_clk);
		repeat(FIFO_DEPTH) begin
		if(!empty) begin 
		rd_en=1;
		@(negedge rd_clk);
		end 
		end
      rd_en=0;
		
		#50;
		
		//write more data once emptied
		@(negedge wr_clk);
		repeat(FIFO_DEPTH/2) begin
		if(!full) begin 
		wr_en=1;
		write_data=$random;
		@(negedge wr_clk);
		end 
		end
      wr_en=0;
    
      #50;
      //simultaneous read and write
      wr_en=1;
      rd_en=1;
		repeat(FIFO_DEPTH/2) begin
		if(!full && !empty) begin
		write_data=$random;
		@(negedge wr_clk);
		end 
		end
      wr_en=0; 	
      rd_en=0;
      #100;
      $stop	;	
        
		// Add stimulus here

	end
      
endmodule

