#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double pi = 3.14159265359;
    scanf("%lf %lf %lf", &a, &b, &c);
    double radius = b / 2.0;
    double volume = pi * pow(radius, 2) * c;
    double baht = a / volume;
    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf", baht);
    return 0;
}
