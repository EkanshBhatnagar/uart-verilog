`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:35:58 03/25/2021
// Design Name:   fsm_reciever
// Module Name:   C:/Verilog/project/uart_new/tb_fsm_reciever.v
// Project Name:  uart_new
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fsm_reciever
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_fsm_reciever;

	// Inputs
	reg start;
	reg parity_error;
	reg clk;

	// Outputs
	wire shift;
	wire parity_load;
	wire check_stop;

	// Instantiate the Unit Under Test (UUT)
	fsm_reciever uut (
		.shift(shift), 
		.parity_load(parity_load), 
		.check_stop(check_stop), 
		.start(start), 
		.parity_error(parity_error), 
		.clk(clk)
	);
	
	initial begin
		clk = 1;
		forever #50 clk = ~clk;
	end
	
	initial begin
		// Initialize Inputs
		start = 1;
		parity_error = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		start = 0;
		
	end
      
endmodule

