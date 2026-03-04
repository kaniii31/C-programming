#include <stdio.h>

// Recursive Fibonacci
int fib(int n) {
    if(n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int limit, i = 0, sum = 0, term;

    printf("Enter limit: ");
    scanf("%d", &limit);

    while(1) {
        term = fib(i);

        if(term > limit)
            break;

        if(term % 2 == 0)
            sum += term;

        i++;
    }

    printf("Sum of even Fibonacci numbers = %d", sum);

    return 0;
}
