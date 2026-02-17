#include <stdio.h>

int main() {
    int n, temp, sum = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    if(n % sum == 0)
        printf("Harshad Number");
    else
        printf("Not a Harshad Number");

    return 0;
}
