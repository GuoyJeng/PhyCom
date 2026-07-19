#include <stdio.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double result = a * c - (a * c * (b / 100));
    printf("%.2lf", result);
    return 0;
}
