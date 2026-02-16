#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digits = 0, rem;
    double sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if((int)sum == n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
