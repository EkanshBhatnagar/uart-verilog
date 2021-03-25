`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:06:27 03/25/2021
// Design Name:   sipo_8bit
// Module Name:   C:/Verilog/project/uart_new/tb_sipo.v
// Project Name:  uart_new
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sipo_8bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_sipo;

	// Inputs
	reg serial_in,shift;
	reg clk;
	
	// Outputs
	wire [7:0] parallel_out;

	// Instantiate the Unit Under Test (UUT)
	sipo_8bit uut (
		.parallel_out(parallel_out), 
		.serial_in(serial_in), 
		.shift(shift),
		.clk(clk)
	);
	
	initial begin
		clk = 1;
		forever #50 clk = ~clk;
	end
	

	initial begin
		// Initialize Inputs
		serial_in = 0;
		//clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		shift = 1;
		#100 serial_in = 1; 
		#100 serial_in = 0; 
		#100 serial_in = 0; 
		#100 serial_in = 0; 
		#100 serial_in = 1; 
		#100 serial_in = 1;
		#100 serial_in = 1; 
		#100 serial_in = 1; 
		#100 shift = 0;
		
	end
      
endmodule

