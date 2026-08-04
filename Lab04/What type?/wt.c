#include <stdio.h>
#include <ctype.h>

int main() {
    char check;
    scanf("%c", &check);
    if (isdigit(check)) {
        printf("number");
    } else if (islower(check)) {
        printf("lowercase");
    } else if (isupper(check)) {
        printf("uppercase");
    } else {
        printf("error");
    }   return 0;
}
