#include <stdio.h>

int main() {
    char fname1[31];
    char sname1[31];
    char person2[31];
    char person3[31];
    char surname2[31];
    char surname3[31];
    char middle3[31];
    scanf("%30s", fname1);
    scanf("%30s", sname1);
    scanf("%30s %30s", person2, surname2);
    scanf("%30s %30s %30s", person3, middle3, surname3);

    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s %s\n", person2, surname2);
    printf("Person 3: %s %s %s", person3, middle3, surname3);

    return 0;
}
