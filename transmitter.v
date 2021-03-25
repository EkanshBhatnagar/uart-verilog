`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:07:43 03/25/2021 
// Design Name: 	
// Module Name:    transmitter 
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

module uart_transmitter(tx_busy,data_out,data_in,clk,tx_start);
	input clk;
	input[7:0] data_in;
	input tx_start;
	
	output data_out;
	output tx_busy;
	wire load_wire,piso_out,parity_wire;
	wire[1:0] sel_wire;

	fsm_transmitter f1(load_wire, sel_wire, tx_busy,tx_start, clk);
	piso_8bit p1(piso_out,data_in,clk,load_wire);
	parity_gen parity1(parity_wire, data_in);
	mux_4x1 m1(data_out, {1'b1,parity_wire,piso_out,1'b0},sel_wire);
endmodule

module piso_8bit(serial_out, parallel_in, shift,load);
	input shift,load;
	input[7:0] parallel_in;
	
	output reg serial_out;
	
	reg[7:0] internal_reg;

	always@(posedge shift)
	begin
	if(load)
		internal_reg <= parallel_in;
	else
	begin
		serial_out <= internal_reg[7];
		internal_reg <= internal_reg << 1;
	end
	end
endmodule

module parity_gen(parity,data_in);
	input[7:0] data_in;
	
	output parity;
	
	wire[6:0] w;

	xor x1 (w[0],data_in[0],data_in[1]);
	xor x2 (w[1],data_in[2],w[0]);
	xor x3 (w[2],data_in[3],w[1]);
	xor x4 (w[3],data_in[4],w[2]);
	xor x5 (w[4],data_in[5],w[3]);
	xor x6 (w[5],data_in[6],w[4]);
	xor x7 (parity,data_in[7],w[5]);
	

endmodule

module mux_4x1(out, in,sel);
	input[3:0] in;
	input[1:0] sel;
	
	output out;

	assign out = in[sel];
endmodule

module fsm_transmitter(load,sel,busy,start,clk);
	output reg load,busy;
	output reg[1:0] sel;
	input start;
	input clk;

	parameter[2:0] IDLE = 3'b000; 
	parameter[2:0] START = 3'b001; 
	parameter[2:0] DATA = 3'b010; 
	parameter[2:0] PARITY = 3'b011; 
	parameter[2:0] STOP = 3'b100;

	reg[2:0] state,next;
	reg[3:0] count;

	always@(posedge clk) begin
		if(!start) begin
		state= IDLE;
		end
		else
		state=next;
	end

	always@(posedge clk) begin
	next = 3'bx;
	
	case(state)
	IDLE: if(start)
		next=START;
	      else 
		next=IDLE;
	START: begin
		next=DATA;
		count = 0;
	       end
	DATA: begin 
		if(count < 4'd7) begin
	      		next = DATA;
			count = count + 1;
		end
		else
			next = PARITY;
	      end
	PARITY: next = STOP;
	STOP: next=IDLE;
	endcase

	end
	
	always@(posedge clk) begin
	if(next == START) begin
		load = 1;
		sel = 2'b00;
		busy = 1;
		end
	else if(next == DATA) begin
		load = 0;
		sel = 2'b01;
		end
	else if(next == PARITY) 
		sel = 2'b10;
	else if(next == STOP)
		sel = 2'b11;
	else begin
		sel = 2'b11;
		busy = 0;
		load = 1;
		end
	end
	       
endmodule



			






