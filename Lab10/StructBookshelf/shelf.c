#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
struct Book {
    char id[10];
    char name[100];
    char author[100];
};
 
int main(){
    int n = 0;
    char target[10];
    scanf("%d", &n);
    scanf(" %s",target);
    struct Book book_list[n];
    for (int i = 0; i < n; i++)
        scanf(" %s %s %s",book_list[i].id,book_list[i].name,book_list[i].author);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(book_list[i].id,target) == 0){
            printf("%s %s %s\n",book_list[i].id,book_list[i].name,book_list[i].author);
            return 0;
        }
    }
    printf("Not Found\n");
     
    return 0;
}
