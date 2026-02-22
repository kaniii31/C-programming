#include <stdio.h>

int main() {
    int n, i, j, k, l, target;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Quadruplets:\n");

    for(i = 0; i < n-3; i++)
        for(j = i+1; j < n-2; j++)
            for(k = j+1; k < n-1; k++)
                for(l = k+1; l < n; l++)
                    if(a[i] + a[j] + a[k] + a[l] == target)
                        printf("%d %d %d %d\n", a[i], a[j], a[k], a[l]);

    return 0;
}
