#include <stdio.h>

int main() {
    int octal, decimal = 0, rem, i = 0;
    int binary[32], j;

    printf("Enter octal number: ");
    scanf("%d", &octal);

    // Octal to Decimal
    int temp = octal;
    int base = 1;
    while(temp != 0) {
        rem = temp % 10;
        decimal += rem * base;
        base *= 8;
        temp /= 10;
    }

    // Decimal to Binary
    while(decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary = ");
    for(j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
