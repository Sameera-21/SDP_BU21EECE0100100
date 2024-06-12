//Create a simple program for an AVR microcontroller to blink an LED connected to pin PD3 in a continuous loop with equal on and off durations of 500 milliseconds each.

#include <avr/io.h> // AVR I/O definitions
#include <util/delay.h> // Delay functions

// Initialize output pin
void IO_Init() {
    // Set PD3 as output (LED)
    DDRD |= (1 << PD3);
}

int main() {
    IO_Init(); // Call the function to initialize I/O

    while (1) { // Infinite loop
        // Turn on the LED
        PORTD |= (1 << PD3);
        _delay_ms(500); // Wait for 500 milliseconds

        // Turn off the LED
        PORTD &= ~(1 << PD3);
        _delay_ms(500); // Wait for 500 milliseconds
    }
}
