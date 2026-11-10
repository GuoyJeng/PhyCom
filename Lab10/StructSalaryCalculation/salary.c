#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct Record{
    char id[10];
    char name[100];
    long salary;
    long sales;
};
 
int main(){
    int n;
    char target[10];
    scanf("%d", &n);
    struct Record data[n];
    for (int i = 0; i < n; i++)
        scanf(" %s %s %ld %ld",data[i].id,data[i].name, &data[i].salary, &data[i].sales);
    scanf(" %s",target);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(target,data[i].id)==0){
            double cmpt = data[i].sales*2.0/100.0;
            printf("%s\n%s\n%ld\n%.2lf\n%ld\n%.2lf\n",data[i].id,data[i].name,data[i].sales,cmpt,data[i].salary,data[i].salary+cmpt);
            return 0;
        }
    }
    printf("ID not found !!!\n");
    return 0;
}
