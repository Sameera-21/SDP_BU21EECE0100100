//The objective of this code is to configure an 8051 microcontroller to transmit the character 'B' over serial communication using a baud rate of 4800 bits per second.

#include <reg51.h> // Include header file for 8051 microcontroller

void main(void)
{
	TMOD = 0X20; // Use Timer 1, mode 2 for serial communication
	TH1 = 0XFA; // Set TH1 to achieve 4800 baud rate
	SCON = 0X50; // Set serial mode: 8-bit data, variable baud rate, enable receiver
	TR1 = 1; // Start Timer 1 for serial communication
	
	while(1)
	{
		SBUF ='B'; // Load 'B' character into serial buffer for transmission
		while(TI==0); // Wait until the transmission is complete
		TI=0; // Clear transmit interrupt flag for the next transmission
	}
}
