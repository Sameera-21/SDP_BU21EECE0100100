#include <stdio.h>
#include <stdint.h>

// Function to set the 5th and 12th bits in a 16-bit unsigned integer
uint16_t set_5th_and_12th_bits(uint16_t num) {
    num |= (1 << 4);  // Set the 5th bit (bit positions start from 0)
    num |= (1 << 11); // Set the 12th bit
    return num;
}

int main() {
    uint16_t num;
    printf("Enter a 16-bit unsigned integer: ");
    scanf("%hu", &num);

    uint16_t result = set_5th_and_12th_bits(num);
    printf("After setting the 5th and 12th bits: %hu\n", result);

    return 0;
}
