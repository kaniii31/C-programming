#include <stdio.h>

int main() {
    int n, i, key, low = 0, high, mid;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            printf("Found at position %d", mid + 1);
            return 0;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Not found");

    return 0;
}
