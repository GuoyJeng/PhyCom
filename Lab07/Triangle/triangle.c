#include <stdio.h>
#include <math.h>

double perimeter(double x, double y, double z);
double area(double x, double y);

int main() {
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = sqrt((a * a) + (b * b));
    printf("Perimeter: %.2lf\n", perimeter(a, b, c));
    printf("Area: %.2lf", area(a, b));
    return 0;
}

double perimeter(double x, double y, double z) {
    return x + y + z;
}

double area(double x, double y) {
    double s = x * y * 0.5;
    return s;
}
