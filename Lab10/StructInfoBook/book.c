#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
typedef struct student_info{
    char first_name[60];
    char last_name[60];
    char sex[10];
    unsigned int age;
    char student_num[12];
    double grade;
} student_info;
 
int main(){
    struct student_info* stu1 = malloc(sizeof(student_info));
    scanf("%s %s %s %u %s %lf",stu1->first_name,stu1->last_name,stu1->sex,&stu1->age,stu1->student_num,&stu1->grade);
    if (strcmp(stu1->sex, "Male") == 0){
        printf("Mr ");
    }else{
        printf("Miss ");
    }
    printf("%c ",stu1->first_name[0]);
    printf("%s ",stu1->last_name);
    printf("(%u) ",stu1->age);
    printf("ID: %s ",stu1->student_num);
    printf("GPA %.2lf",stu1->grade);
}
