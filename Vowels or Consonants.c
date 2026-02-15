#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("%c is a Vowel\n", ch);
    else if ((ch >= 'a' && ch <= 'z'))
        printf("%c is a Consonant\n", ch);
    else
        printf("%c is not an alphabet\n", ch);
    return 0;
}
