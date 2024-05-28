#include <stdio.h>
#include <stdint.h>

// Function to convert MAC address into a 48-bit binary pattern
void mac_to_binary(const char *mac, uint8_t *binary) {
    sscanf(mac, "%hhx:%hhx:%hhx:%hhx:%hhx:%hhx", 
           &binary[0], &binary[1], &binary[2], 
           &binary[3], &binary[4], &binary[5]);
}

int main() {
    char mac[18];
    uint8_t binary[6];

    printf("Enter MAC address in the form XX:XX:XX:XX:XX:XX: ");
    scanf("%17s", mac);

    mac_to_binary(mac, binary);

    printf("MAC address in binary: ");
    for (int i = 0; i < 6; i++) {
        printf("%02x", binary[i]);
        if (i < 5) printf(":");
    }
    printf("\n");

    return 0;
}
