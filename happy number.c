#include <stdio.h>

int main() {
    int n, sum, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n != 1 && n != 4) {
        sum = 0;
        while(n > 0) {
            rem = n % 10;
            sum += rem * rem;
            n /= 10;
        }
        n = sum;
    }

    if(n == 1)
        printf("Happy Number");
    else
        printf("Not a Happy Number");

    return 0;
}
