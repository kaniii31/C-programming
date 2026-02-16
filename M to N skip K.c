#include <stdio.h>

int main() {
    int m, n, k, i;

    printf("Enter M: ");
    scanf("%d", &m);

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter K: ");
    scanf("%d", &k);

    for(i = m; i <= n; i = i + (k + 1)) {
        printf("%d ", i);
    }

    return 0;
}
