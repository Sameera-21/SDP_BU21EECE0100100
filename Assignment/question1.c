#include <stdio.h>
#include <stdint.h>

// Function to count the number of set bits in a given binary pattern
int count_set_bits(uint32_t num) {
    int count = 0;
    while (num) {
        count += num & 1; // Add 1 if the least significant bit is set
        num >>= 1; // Shift right by one bit
    }
    return count;
}

int main() {
    uint32_t num;
    printf("Enter a number: ");
    scanf("%u", &num);

    int result = count_set_bits(num);
    printf("Number of set bits in %u: %d\n", num, result);

    return 0;
}
