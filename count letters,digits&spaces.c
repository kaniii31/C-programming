#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int letters = 0, digits = 0, spaces = 0, i;

    printf("Enter string: ");
    getchar();
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i]))
            letters++;
        else if(isdigit(str[i]))
            digits++;
        else if(str[i] == ' ')
            spaces++;
    }

    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d", spaces);

    return 0;
}
