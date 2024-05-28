#include <stdio.h>
#include <stdint.h>

// Function to flip even positioned bits in a 16-bit unsigned integer
uint16_t flip_even_bits(uint16_t num) {
    for (int i = 0; i < 16; i += 2) {
        num ^= (1 << i); // Flip the bit at position i
    }
    return num;
}

int main() {
    uint16_t num;
    printf("Enter a 16-bit unsigned integer: ");
    scanf("%hu", &num);

    uint16_t result = flip_even_bits(num);
    printf("After flipping the even positioned bits: %hu\n", result);

    return 0;
}
