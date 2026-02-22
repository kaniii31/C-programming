#include <stdio.h>
#include <string.h>

int main() {
    char str[200], words[50][50];
    int count[50] = {0};
    int i = 0, j = 0, k = 0, max = 0, index = 0;

    printf("Enter sentence: ");
    getchar();
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            words[k][j++] = str[i];
        } else {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        i++;
    }

    int total = k;

    for(i = 0; i < total; i++) {
        for(j = 0; j < total; j++) {
            if(strcmp(words[i], words[j]) == 0)
                count[i]++;
        }
        if(count[i] > max) {
            max = count[i];
            index = i;
        }
    }

    printf("Most frequent word: %s", words[index]);

    return 0;
}
