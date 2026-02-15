#include <stdio.h>
int main() {
    int age;
    printf("Enter a age: ");
    scanf("%d", &age);
    if (age > 18){
        printf("%d is Eligible\n", age);
    }else{
        printf("%d is not Eligible", age);
}
    return 0;
}
