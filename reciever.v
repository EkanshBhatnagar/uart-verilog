`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:01:22 03/25/2021 
// Design Name: 
// Module Name:    reciever 
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
module reciever(data_out,stop_error,parity_error, serial_in,clk);
	input serial_in,clk;
	output parity_error,stop_error;
	output[7:0] data_out;
	
	wire shift_wire, parity_load_wire, check_stop_wire;
	
	
	fsm_reciever fsm1(shift_wire,parity_load_wire,check_stop_wire,serial_in,parity_error,clk);
	sipo_8bit sipo1(data_out,serial_in,shift_wire,clk);
	parity_checker p1(parity_error, serial_in, data_out, parity_load_wire);
	stop_checker s1(stop_error,check_stop_wire,serial_in);
	


endmodule


module sipo_8bit(parallel_out, serial_in,shift, clk);
	input clk,serial_in,shift;
	output[7:0] parallel_out;
	reg[7:0] temp;


	always@(posedge clk) begin
		if(shift)
		temp = {temp[6:0],serial_in};
	end
	
	assign parallel_out = temp;
	
endmodule
	
module parity_checker(parity_error, parity_in, data_in,load);
	input parity_in,load;
	input[7:0] data_in;
	
	output parity_error;
	
	wire[7:0] w;
	
	xor x1(w[0],data_in[0],data_in[1]);
	xor x2(w[1],w[0],data_in[2]);
	xor x3(w[2],w[1],data_in[3]);
	xor x4(w[3],w[2],data_in[4]);
	xor x5(w[4],w[3],data_in[5]);
	xor x6(w[5],w[4],data_in[6]);
	xor x7(w[6],w[5],data_in[7]);
	xor x8(w[7],parity_in,w[6]);
	
	and a1(parity_error, w[7],load);
	
endmodule

module stop_checker(stop_error,check_stop,serial_in);
	input check_stop, serial_in;
	output reg stop_error;
	
	always@(check_stop) begin
		if(check_stop) begin
			if(serial_in == 1)
				stop_error = 0;
			else
				stop_error = 1;
		end
	end
endmodule

module fsm_reciever(shift,parity_load,check_stop,start,parity_error,clk);
	input start,parity_error,clk;
	output reg shift,parity_load,check_stop;
	
	parameter[1:0] IDLE = 2'b00;
	parameter[1:0] DATA = 2'b01;
	parameter[1:0] PARITY = 2'b10;
	parameter[1:0] STOP = 2'b11;
	
	reg[1:0] state,next;
	reg[3:0] count;
	
	always@(posedge clk)
		state = next;
	
	always@(posedge clk) begin
		next = 2'bx;
		
		case(state)
		IDLE: begin
				if(!start) begin 
					next = DATA;
					count = 0;
					end
				else
					next = IDLE;
				end
		DATA: begin
				if(count < 4'd7) begin
					next = DATA;
					count = count + 1;
					end
				else 
					next = PARITY;
				end
		PARITY: begin
					if(parity_error)
						next = IDLE;
					else
						next = STOP;
				  end
		STOP: next = IDLE;
		default: next = IDLE;
		endcase
	end
	
	always@(posedge clk) begin
		if(next == DATA)
			shift = 1;
		else if(next == PARITY) begin
			shift = 0;
			parity_load = 1;
			end
		else if(next == STOP) begin
			parity_load = 0;
			check_stop = 1;
			end
		else begin
			shift = 0;
			parity_load = 0;
			check_stop = 0;
		end
	end
	
	
endmodule



