#include <stdio.h>

int main() {
    int a[100], n, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;

    printf("Reversed array:\n");
    for(i = n-1; i >= 0; i--)
        printf("%d ", *(p+i));

    return 0;
}
