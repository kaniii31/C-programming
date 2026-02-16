#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, num, avg;

    printf("Enter number of values: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    avg = sum / n;

    printf("Average = %.2f", avg);

    return 0;
}
