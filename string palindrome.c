#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char s[100];
    int n, i, j;

    printf("Enter string: ");
    scanf("%s", s);

    n = strlen(s);

    int dp[n][n];

    for(i = 0; i < n; i++)
        dp[i][i] = 1;

    for(i = 2; i <= n; i++) {
        for(j = 0; j < n - i + 1; j++) {
            int k = j + i - 1;

            if(s[j] == s[k] && i == 2)
                dp[j][k] = 2;
            else if(s[j] == s[k])
                dp[j][k] = dp[j+1][k-1] + 2;
            else
                dp[j][k] = max(dp[j+1][k], dp[j][k-1]);
        }
    }

    printf("Minimum deletions = %d", n - dp[0][n-1]);

    return 0;
}
