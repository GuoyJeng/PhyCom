#include <stdio.h>

int main() {
    float cm, km;
    scanf("%f %f", &cm, &km);
    float m = cm / 100.0;
    float bmi = km / (m * m);
    printf("%f", bmi);
    return 0;
}
