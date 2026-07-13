#include <stdio.h>

int main() {
    char one[31];
    char two[31];
    char three[31];
    char four[31];
    scanf("%30s", one);
    scanf("%30s", two);
    scanf("%30s", three);
    scanf("%30s", four);
    printf("String 1: %.3s\n", one);
    printf("String 2: %.4s\n", two);
    printf("String 3: %.5s\n", three);
    printf("String 4: %.6s\n", four);
    return 0;
}
