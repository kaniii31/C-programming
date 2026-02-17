#include <stdio.h>

int main() {
    int n, sq, temp, digits = 0;
    int power = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    sq = n * n;
    temp = n;

    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    for(int i = 1; i <= digits; i++) {
        power *= 10;
    }

    if(sq % power == n)
        printf("Automorphic Number");
    else
        printf("Not an Automorphic Number");

    return 0;
}
