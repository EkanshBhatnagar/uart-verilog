`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:27:10 03/25/2021
// Design Name:   parity_checker
// Module Name:   C:/Verilog/project/uart_new/tb_parity_check.v
// Project Name:  uart_new
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: parity_checker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_parity_check;

	// Inputs
	reg parity_in;
	reg [7:0] data_in;

	// Outputs
	wire parity_error;

	// Instantiate the Unit Under Test (UUT)
	parity_checker uut (
		.parity_error(parity_error), 
		.parity_in(parity_in), 
		.data_in(data_in)
	);

	initial begin
		// Initialize Inputs
		parity_in = 0;
		data_in = 8'b0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		data_in = 8'b10001111;
		#100 parity_in = 1;
		
	end
      
endmodule

