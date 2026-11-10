#include <stdio.h>
 
int main(){
    char text[201];
    scanf("%200[^\n]",text);
    char *p = text;
    printf("%c.",*p++);
    while(*p != ' ')
        p++;
    printf("%c.",*++p);
}
