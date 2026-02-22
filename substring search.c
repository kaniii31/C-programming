#include <stdio.h>
#include <string.h>

int main() {
    char text[200], pattern[100];
    int i, j, found, count = 0;

    printf("Enter DNA sequence: ");
    scanf("%s", text);

    printf("Enter DNA pattern: ");
    scanf("%s", pattern);

    int n = strlen(text);
    int m = strlen(pattern);

    printf("Pattern found at positions: ");

    for(i = 0; i <= n - m; i++) {
        found = 1;
        for(j = 0; j < m; j++) {
            if(text[i + j] != pattern[j]) {
                found = 0;
                break;
            }
        }
        if(found) {
            printf("%d ", i + 1);
            count++;
        }
    }

    printf("\nTotal occurrences: %d", count);

    return 0;
}
