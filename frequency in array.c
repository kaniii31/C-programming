#include <stdio.h>

int main() {
    int n, i, j, count;
    int a[100];
    int visited[100] = {0};

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Frequency of each element:\n");

    for(i = 0; i < n; i++) {
        if(visited[i] == 1)
            continue;

        count = 1;
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d times\n", a[i], count);
    }

    return 0;
}
