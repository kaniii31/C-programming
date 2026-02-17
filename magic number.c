#include <stdio.h>

int main() {
    int n, sum, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n > 9) {
        sum = 0;
        while(n > 0) {
            rem = n % 10;
            sum += rem;
            n /= 10;
        }
        n = sum;
    }

    if(n == 1)
        printf("Magic Number");
    else
        printf("Not a Magic Number");

    return 0;
}
