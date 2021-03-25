`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:10:50 03/25/2021 
// Design Name: 
// Module Name:    uart 
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
module uart(tx_busy,tx_out,rx_out,stop_error,parity_error,rx_in,tx_in,tx_start,clk);
		input clk,tx_start,rx_in;
		input[7:0] tx_in;
		output tx_busy,stop_error,parity_error,tx_out;
		output[7:0] rx_out;
		
		uart_transmitter t1(tx_busy,tx_out,tx_in,clk,tx_start);
		reciever r1(rx_out,stop_error,parity_error,rx_in,clk);

endmodule
