#include <stdio.h>
#include <string.h>

int main() {
    char message[200];
    char banned[20][50];
    int n, i, count = 0;

    printf("Enter user message: ");
    getchar();
    fgets(message, sizeof(message), stdin);

    printf("Enter number of banned words: ");
    scanf("%d", &n);

    printf("Enter banned words:\n");
    for(i = 0; i < n; i++) {
        scanf("%s", banned[i]);
    }

    printf("Banned words detected:\n");

    for(i = 0; i < n; i++) {
        if(strstr(message, banned[i]) != NULL) {
            printf("%s\n", banned[i]);
            count++;
        }
    }

    printf("Total banned words found: %d", count);

    return 0;
}
