#include <stdio.h>

int main() {
    unsigned char num, swapped;

    printf("Enter a hexadecimal number (0-FF): ");
    scanf("%hhx", &num);

    swapped = (num << 4) | (num >> 4);

    printf("After swapping nibbles: %02X\n", swapped);

    return 0;
}
