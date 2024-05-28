#include <stdio.h>
#include <stdint.h>

// Function to clear the 6th and 19th bits in a 32-bit unsigned integer
uint32_t clear_6th_and_19th_bits(uint32_t num) {
    num &= ~(1 << 5);  // Clear the 6th bit (bit positions start from 0)
    num &= ~(1 << 18); // Clear the 19th bit
    return num;
}

int main() {
    uint32_t num;
    printf("Enter a 32-bit unsigned integer: ");
    scanf("%u", &num);

    uint32_t result = clear_6th_and_19th_bits(num);
    printf("After clearing the 6th and 19th bits: %u\n", result);

    return 0;
}
