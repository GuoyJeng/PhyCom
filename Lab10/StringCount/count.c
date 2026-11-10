#include <stdio.h>
#include <ctype.h>

int main() {
    char text[151];
    char check;
    int result = 0;
    scanf("%c", &check);
    scanf(" %150[^\n]", text);
    char *r = text;
    while (*r != '\0') {
        if (tolower(check) == tolower(*r)) {
            result++;
        }
        r++;
    }
    printf("%d", result);
}
