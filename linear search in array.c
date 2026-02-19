#include <stdio.h>

int main() {
    int n, i, key, pos = -1;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        printf("Element found at position %d", pos + 1);
    else
        printf("Element not found");

    return 0;
}
