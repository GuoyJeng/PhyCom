#include <stdio.h>

int main() {
    char name[31];
    char surname[31];
    char id[9];
    char birthdate[11];
    float gpa;
    scanf("%30s", name);
    scanf("%30s", surname);
    scanf("%8s", id);
    scanf("%10s", birthdate);
    int d, m, y;
    char s1, s2;
    if (sscanf(birthdate, "%d%c%d%c%d", &d, &s1, &m, &s2, &y) == 5) {
        snprintf(birthdate, sizeof(birthdate), "%02d-%02d-%04d", d, m, y);
    } else {
        for (int i = 0; birthdate[i] != '\0'; i++) {
            if (birthdate[i] == '/')
                birthdate[i] = '-';
        }
    }
    scanf("%f", &gpa);
    printf("Fullname: %s %s\n", name, surname);
    printf("ID: %s\n", id);
    printf("DOB: %s\n", birthdate);
    printf("GPA: %.2f", gpa);
}
