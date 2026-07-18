#include <stdio.h>

int main() {
    double num1, num2, num3, num4, result, avg;
    scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);
    result = num1 + num2 + num3 + num4;
    avg = result / 4;
    printf("Summation is %.2lf\n", result);
    printf("Average is %.3lf", avg);
    return 0;
}