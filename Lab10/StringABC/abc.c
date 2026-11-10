#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int comp(const void *a, const void *b){
    const char x = *(const char *) a;
    const char y = *(const char *) b;
 
    return (x > y) - (x < y);;
}
 
int main(){
    char text[201];
    scanf("%200[^\n]",text);
    int n = strlen(text) / sizeof(text[0]);
    qsort(text, n,sizeof(text[0]),comp);
    char *c = text;
    while(*c != '\0')
        printf("%c", *(c++));
}
