//Blink an LED connected to pin PD6 of an AVR microcontroller in a continuous loop with a delay of 500 milliseconds between each toggle.
#include <avr/io.h> // AVR I/O definitions
#include <util/delay.h> // Delay functions

int main() {
    // Set PD6 as output
    DDRD |= (1 << PD6);

    while (1) { // Infinite loop
        // Toggle the LED
        PORTD ^= (1 << PD6);
        // Delay for a short time
        _delay_ms(500);
    }

    return 0;
}
