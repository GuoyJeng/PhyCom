// Struct Find option
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
 
struct student_info {
    char name[100];
    char surname[100];
    int age;
    char sex[10];
    char id[20];
    float gpa;
};
 
int compare_name(const void *a, const void *b) {
    struct student_info *s1 = (struct student_info *) a;
    struct student_info *s2 = (struct student_info *) b;
    return strcasecmp(s1->name, s2->name);
}
 
int compare_surname(const void *a, const void *b) {
    struct student_info *s1 = (struct student_info *) a;
    struct student_info *s2 = (struct student_info *) b;
    return strcasecmp(s1->surname, s2->surname);
}
 
int compare_id(const void *a, const void *b) {
    struct student_info *s1 = (struct student_info *) a;
    struct student_info *s2 = (struct student_info *) b;
    long ix = atol(s1->id), iy = atol(s2->id);
    if (ix < iy) return -1;
    if (ix > iy) return 1;
    return 0;
}
 
int main() {
    struct student_info std_info[20];
 
    for (int i = 0; i < 20; i++) {
        scanf("%s %s %s %d %s %f", 
            std_info[i].name, 
            std_info[i].surname, 
            std_info[i].sex,
            &std_info[i].age,
            std_info[i].id,
            &std_info[i].gpa
        );
    }
 
    char option[20];
    scanf("%s", option);
 
    if (strcasecmp(option, "name") == 0) {
        qsort(std_info, 20, sizeof(struct student_info), compare_name);
    } else if (strcasecmp(option, "surname") == 0) {
        qsort(std_info, 20, sizeof(struct student_info), compare_surname);
    } else if (strcasecmp(option, "id") == 0) {
        qsort(std_info, 20, sizeof(struct student_info), compare_id);
    }
 
    for (int i = 0; i < 20; i++) {
        if (strcasecmp(std_info[i].sex, "Male") == 0) {
            printf("Mr ");
        } else if ((strcasecmp(std_info[i].sex, "Female") == 0)) {
            printf("Miss ");
        }
     
        printf("%c %s (%d) ID: %s GPA %.2f\n", std_info[i].name[0], std_info[i].surname, std_info[i].age, std_info[i].id, std_info[i].gpa);
    }
 
 
    return 0;
}
