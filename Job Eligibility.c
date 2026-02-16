#include <stdio.h>

int main() {
    int age, exp;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter experience (years): ");
    scanf("%d", &exp);

    if(age > 21 && exp > 2)
        printf("Eligible for Job");
    else
        printf("Not Eligible for Job");

    return 0;
}
