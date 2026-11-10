// ********************
// *      Arnold      *
// *  Schwarzenegger  * n-2 -> Math.ceil((n-2)-len / 2)
// ********************
 
 
#include <stdio.h>
#include <math.h>
#include <string.h>
 
int main(){
    int width;
    char text1[50];
    char text2[40];
    scanf("%d",&width);
    scanf(" %49[^\n]", text1);
    scanf(" %39[^\n]", text2);
 
    for (int i = 0; i < width; i++)
        printf("*");
    printf("\n");
    printf("*");
    int left = (width-strlen(text1)-2)/2;
    int right = left;
    if ((width-strlen(text1) - 2) % 2 != 0)
        left+=1;
    for (int j = 0; j < left; j++)
    printf(" ");
    printf("%s",text1);
    for (int j = 0; j < right; j++)
    printf(" ");
    printf("*\n");
     
    printf("*");
    left = (width-strlen(text2)-2)/2;
    right = left;
    if ((width-strlen(text2) - 2) % 2 != 0){
        left+=1;
    }
    for (int j = 0; j < left; j++)
        printf(" ");
    printf("%s",text2);
    for (int j = 0; j < right; j++)
        printf(" ");
    printf("*\n");
    for (int i = 0; i < width; i++)
        printf("*");
    printf("\n");
 
}
