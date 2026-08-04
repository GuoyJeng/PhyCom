#include <stdio.h>

int main() {
    double score;
    scanf("%lf", &score);
    if (100 >= score && score >= 80) {
        printf("A");
    } else if (80 > score && score >= 70) {
        printf("B");
    } else if (70 > score && score >= 60) {
        printf("C");
    } else if (60 > score && score >= 50) {
        printf("D");
    } else if (50 > score && score >= 0) {
        printf("F");
    } else {
        printf("Out of Range");
    } return 0;
}
