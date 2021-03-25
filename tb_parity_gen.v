`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:31:14 03/25/2021
// Design Name:   parity_gen
// Module Name:   C:/Verilog/project/uart_new/tb_parity_gen.v
// Project Name:  uart_new
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: parity_gen
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_parity_gen;

	// Inputs
	reg [7:0] data_in;
	reg enable;

	// Outputs
	wire parity;

	// Instantiate the Unit Under Test (UUT)
	parity_gen uut (
		.parity(parity), 
		.data_in(data_in), 
		.enable(enable)
	);

	initial begin
		// Initialize Inputs
		data_in = 0;
		enable = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		data_in = 8'b10001111;//odd 1s
		enable = 1;
		#100;
		data_in = 8'b11001111;//even 1s
	end
      
endmodule

