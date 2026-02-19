#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int min, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    min = max = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i];
    }

    printf("Difference = %d", max - min);

    return 0;
}
