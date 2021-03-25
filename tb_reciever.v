`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:28:14 03/25/2021
// Design Name:   reciever
// Module Name:   C:/Verilog/project/uart_new/tb_reciever.v
// Project Name:  uart_new
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: reciever
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_reciever;

	// Inputs
	reg serial_in;
	reg clk;

	// Outputs
	wire [7:0] data_out;
	wire stop_error;
	wire parity_error;

	// Instantiate the Unit Under Test (UUT)
	reciever uut (
		.data_out(data_out), 
		.stop_error(stop_error), 
		.parity_error(parity_error), 
		.serial_in(serial_in), 
		.clk(clk)
	);

	initial begin
		clk = 1;
		forever #50 clk = ~clk;
	end

	initial begin
		// Initialize Inputs
		serial_in = 1;

		// Wait 100 ns for global reset to finish
		#100;
       
		// Add stimulus here
		serial_in = 0;
		#100 serial_in = 1;
		#100 serial_in = 0;
		#100 serial_in = 0;
		#100 serial_in = 0;
		#100 serial_in = 1;
		#100 serial_in = 1;
		#100 serial_in = 1;
		#100 serial_in = 1;
		
	end
      
endmodule

