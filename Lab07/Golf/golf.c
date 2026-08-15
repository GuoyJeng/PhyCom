#include <stdio.h>
#include <math.h>

int main() {
    double pi = 3.141592653589793, radius, degree, u, h;
    scanf("%lf %lf", &degree, &u);
    radius = (degree * pi) / 180;
    h = (pow(u, 2) * pow(sin(radius), 2)) / (2 * 9.81);
    printf("theta (degree) : %.0lf\n", degree);
    printf("u (m/s) : %.0lf\n", u);
    printf("h (m) : %.4lf", h);
}
