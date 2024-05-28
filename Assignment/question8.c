#include <stdio.h>
#include <stdint.h>

// Function to convert a 48-bit binary pattern into a MAC address string
void binary_to_mac(const uint8_t *binary, char *mac) {
    sprintf(mac, "%02x:%02x:%02x:%02x:%02x:%02x",
            binary[0], binary[1], binary[2],
            binary[3], binary[4], binary[5]);
}

int main() {
    uint8_t binary[6];
    char mac[18];

    printf("Enter the 48-bit binary pattern as 6 hexadecimal values (e.g., 01 23 45 67 89 ab): ");
    scanf("%hhx %hhx %hhx %hhx %hhx %hhx", 
          &binary[0], &binary[1], &binary[2], 
          &binary[3], &binary[4], &binary[5]);

    binary_to_mac(binary, mac);

    printf("MAC address: %s\n", mac);

    return 0;
}
