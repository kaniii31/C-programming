#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float r1 = (-b + sqrtf(b*b - 4*a*c)) / (2*a);
    float r2 = (-b - sqrtf(b*b - 4*a*c)) / (2*a);
    printf("Roots: %.2f , %.2f\n", r1, r2);
    return 0;
}
