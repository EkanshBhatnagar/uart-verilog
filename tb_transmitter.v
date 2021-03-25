`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:50:54 03/25/2021
// Design Name:   uart_transmitter
// Module Name:   C:/Verilog/project/uart_new/tb_transmitter.v
// Project Name:  uart_new
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: uart_transmitter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_transmitter;

	// Inputs
	reg [7:0] data_in;
	reg clk;
	reg tx_start;

	// Outputs
	wire tx_busy;
	wire data_out;

	// Instantiate the Unit Under Test (UUT)
	uart_transmitter uut (
		.tx_busy(tx_busy), 
		.data_out(data_out), 
		.data_in(data_in), 
		.clk(clk), 
		.tx_start(tx_start)
	);

	initial begin
		clk = 1;
		forever #50 clk = ~clk;
	end

	initial begin
		// Initialize Inputs
		data_in = 8'b11001111;
		tx_start = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		tx_start = 1;
	end
      
endmodule

