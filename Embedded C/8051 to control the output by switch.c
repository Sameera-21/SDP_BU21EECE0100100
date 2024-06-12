//Program an 8051 microcontroller to control the output on port P1 based on the state of two input switches connected to port P2,
demonstrating different output patterns for different switch combinations.
#include <reg51.h> // Include header file for 8051 microcontroller (assuming this file contains necessary definitions for the microcontroller being used)

sbit sw1 = P2^1; // Define switch 1 connected to pin P2.1
sbit sw2 = P2^2; // Define switch 2 connected to pin P2.2

void delay(unsigned int); // Function prototype for delay function

void main(void)
{
	sw1 = 0; // Initialize switch 1
	sw2 = 0; // Initialize switch 2
	
	while(1) // Infinite loop for continuous operation
	{
		if(sw1==0 && sw2==0) // If both switches are off
		{
			P1=0x00; // Set all bits of port P1 to 0
		}
		else if (sw1==0 && sw2==1) // If switch 1 is off and switch 2 is on
		{
			P1=0xAA; // Set alternating bits of port P1 to 1
		}
		else if (sw1==1 && sw2==0)	// If switch 1 is on and switch 2 is off
		{
			P1=0x55; // Set alternating bits of port P1 to 0
		}
		else if (sw1==1 && sw2==1)	// If both switches are on
		{
			//while(1)   // repeat forever - (commented out, might be intended for continuous toggling)
			//{
				P1=0x55; // Set alternating bits of port P1 to 0
				delay(5000); // Delay for 5000 iterations
				P1=0xAA; // Set alternating bits of port P1 to 1
				delay(5000); // Delay for 5000 iterations
			//}
		}
	}
}

void delay(unsigned int time) // Delay function definition
{
	unsigned int i, j;
	for (i=0;i<time;i++) // Outer loop for time delay
		for (j=0;j<1275;j++); // Inner loop for fine-tuning the delay
}

