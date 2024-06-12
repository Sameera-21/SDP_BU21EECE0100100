//Configure an AVR microcontroller to control an LED (connected to pin PD3) based on the state of a push-button (connected to pin PD2), ensuring proper debouncing.

#include <avr/io.h> // AVR I/O definitions
#include <util/delay.h> // Delay functions

void IO_Init() {
    // Set PD2 as input (push-button) and enable internal pull-up resistor
    DDRD &= ~(1 << PD2);
    PORTD |= (1 << PD2);

    // Set PD3 as output (LED)
    DDRD |= (1 << PD3);
}

int main() {
    IO_Init(); // Initialize I/O settings

    while (1) { // Infinite loop
        // Read the state of the push-button
        if (PIND & (1 << PD2)) {
            // Button is not pressed (pull-up resistor makes it high)
            PORTD &= ~(1 << PD3); // Turn off the LED
        } else {
            // Button is pressed (pin is low)
            PORTD |= (1 << PD3); // Turn on the LED
        }

        _delay_ms(50); // Debounce delay
    }
}
