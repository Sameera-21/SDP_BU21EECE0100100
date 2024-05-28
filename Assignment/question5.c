#include <stdio.h>
#include <stdint.h>

// Function to pack a.b.c.d into a 32-bit unsigned integer
uint32_t pack_ip_address(uint8_t a, uint8_t b, uint8_t c, uint8_t d) {
    uint32_t ip = 0;
    ip |= (a << 24);
    ip |= (b << 16);
    ip |= (c << 8);
    ip |= d;
    return ip;
}

int main() {
    uint8_t a, b, c, d;
    printf("Enter IP address in the form of a.b.c.d (with commas): ");
    scanf("%hhu,%hhu,%hhu,%hhu", &a, &b, &c, &d);

    uint32_t packed_ip = pack_ip_address(a, b, c, d);
    printf("Packed IP address: %u\n", packed_ip);

    return 0;
}