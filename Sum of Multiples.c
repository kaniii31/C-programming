#include <stdio.h>

int main() {
    int x, limit, i, sum = 0;

    printf("Enter X: ");
    scanf("%d", &x);

    printf("Enter Limit: ");
    scanf("%d", &limit);

    for(i = x; i <= limit; i += x) {
        sum += i;
    }

    printf("Sum of multiples = %d", sum);

    return 0;
}
