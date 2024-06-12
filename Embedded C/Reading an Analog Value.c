//Implement a program for an AVR microcontroller to read an analog voltage from a sensor connected to ADC channel 0, 
and then use the obtained value to control the brightness of an LED through PWM (Pulse Width Modulation) on pin PD6 (Arduino pin 6).

#include <avr/io.h> // AVR I/O definitions
#include <util/delay.h> // Delay functions

// Initialize ADC
void ADC_Init() {
    // Set the reference voltage to AVcc (5V)
    ADMUX = (1 << REFS0);

    // Set the ADC prescaler to 128 for 125kHz ADC clock (assuming 16MHz system clock)
    ADCSRA = (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);

    // Enable the ADC
    ADCSRA |= (1 << ADEN);
}

// Read ADC value from specified channel
uint16_t ADC_Read(uint8_t channel) {
    // Select the ADC channel (must be between 0 and 7)
    channel &= 0x07; // Ensure channel is in range
    ADMUX = (ADMUX & 0xF8) | channel;

    // Start the conversion
    ADCSRA |= (1 << ADSC);

    // Wait for the conversion to complete
    while (ADCSRA & (1 << ADSC));

    // Read the ADC value
    return ADC;
}

// Initialize PWM
void PWM_Init() {
    // Set Fast PWM mode with non-inverting output on OC0A (PD6/Arduino pin 6)
    TCCR0A = (1 << WGM00) | (1 << WGM01) | (1 << COM0A1);

    // Set prescaler to 64 and start the timer
    TCCR0B = (1 << CS01) | (1 << CS00);

    // Set PD6 (OC0A) as output
    DDRD |= (1 << PD6);
}

// Set PWM duty cycle
void set_PWM(uint8_t value) {
    OCR0A = value; // Set the PWM duty cycle
}

int main() {
    uint16_t adc_result;
    uint8_t pwm_value;
    
    ADC_Init(); // Initialize ADC
    PWM_Init(); // Initialize PWM

    while (1) { // Infinite loop
        adc_result = ADC_Read(0); // Read from ADC channel 0

        // Map the 10-bit ADC value to an 8-bit PWM value
        pwm_value = adc_result >> 2; // Dividing by 4 to fit 10-bit value into 8-bit

        set_PWM(pwm_value); // Set the PWM duty cycle

        _delay_ms(100); // Small delay to debounce and stabilize reading
    }
}
