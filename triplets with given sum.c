#include <stdio.h>

int main() {
    int n, i, j, k, target;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Triplets:\n");

    for(i = 0; i < n-2; i++)
        for(j = i+1; j < n-1; j++)
            for(k = j+1; k < n; k++)
                if(a[i] + a[j] + a[k] == target)
                    printf("%d %d %d\n", a[i], a[j], a[k]);

    return 0;
}
