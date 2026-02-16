#include <stdio.h>

int main() {
    float height;

    printf("Enter height in cm: ");
    scanf("%f", &height);

    if(height < 150)
        printf("Category: Dwarf");
    else if(height <= 170)
        printf("Category: Average");
    else
        printf("Category: Tall");

    return 0;
}
