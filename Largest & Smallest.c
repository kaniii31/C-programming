#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("Largest = %d\n", a);
        printf("Smallest = %d\n", b);
    }else {
        printf("Largest = %d\n", b);
        printf("Smallest = %d\n", a);
    }
    return 0;
}
