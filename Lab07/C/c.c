#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    double result = sqrt(x * x + y * y);
    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf", x, y, result);
    return 0;
}
