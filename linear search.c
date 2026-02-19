#include <stdio.h>

int main() {
    int n, i, key, found = 0;
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
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Element Found");
    else
        printf("Element Not Found");

    return 0;
}
