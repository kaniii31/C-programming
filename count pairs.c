#include <stdio.h>

int main() {
    int n, diff, i, j, count = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter difference: ");
    scanf("%d", &diff);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] - arr[j] == diff || arr[j] - arr[i] == diff)
                count++;
        }
    }

    printf("Number of pairs = %d", count);

    return 0;
}
