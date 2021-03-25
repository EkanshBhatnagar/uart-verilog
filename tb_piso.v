`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:46:05 03/25/2021
// Design Name:   piso_8bit
// Module Name:   C:/Verilog/project/uart_new/tb_piso.v
// Project Name:  uart_new
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: piso_8bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_piso;

	// Inputs
	reg [7:0] parallel_in;
	reg shift;
	reg load;

	// Outputs
	wire serial_out;

	// Instantiate the Unit Under Test (UUT)
	piso_8bit uut (
		.serial_out(serial_out), 
		.parallel_in(parallel_in), 
		.shift(shift), 
		.load(load)
	);

	initial begin
		shift = 1;
		forever #50 shift = ~shift;
	end
	

	initial begin
		// Initialize Inputs
		parallel_in = 8'b10001111;
		load = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100 load = 0;
		

	end
      
endmodule

