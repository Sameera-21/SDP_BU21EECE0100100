//This code aims to create an alternating pattern on Port 1 of an 8051 microcontroller by first setting it to 0x55 and then to 0xAA repeatedly.

#include<reg51.h> // Include header file for 8051 microcontroller

void DELAY(void); // Function prototype for delay function

void main(void)
{
	while(1)
	{
		P1 = 0x55; // Set Port 1 to 0x55
		DELAY(); // Call the delay function
		P1 = 0xAA; // Set Port 1 to 0xAA
		DELAY(); // Call the delay function
	}
}

void DELAY(void)
{
	TMOD = 0x01; // Set Timer 0 in mode 1
	TH0 = 0xff; // Initialize Timer 0 high byte
	TL0 = 0xff; // Initialize Timer 0 low byte
	TR0 = 1; // Start Timer 0
	while(TF0 == 0); // Wait until Timer 0 overflow flag is set
	TR0 = 0; // Stop Timer 0
	TF0 = 0; // Clear Timer 0 overflow flag
}
