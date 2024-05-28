#include <stdio.h>
#include <stdint.h>

// Function to unpack a 32-bit unsigned integer into a.b.c.d format
void unpack_ip_address(uint32_t ip, uint8_t *a, uint8_t *b, uint8_t *c, uint8_t *d) {
    *a = (ip >> 24) & 0xFF;
    *b = (ip >> 16) & 0xFF;
    *c = (ip >> 8) & 0xFF;
    *d = ip & 0xFF;
}

int main() {
    uint32_t packed_ip;
    printf("Enter the packed IP address: ");
    scanf("%u", &packed_ip);

    uint8_t a, b, c, d;
    unpack_ip_address(packed_ip, &a, &b, &c, &d);
    printf("Unpacked IP address: %u.%u.%u.%u\n", a, b, c, d);

    return 0;
}
