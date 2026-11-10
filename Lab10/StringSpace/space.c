#include <stdio.h>

int main() {
    char text[151];
    scanf("%150[^\n]", text);
    char *r = text;

    while (*r != '\0') {
        if (*r == ' ') {
            r++;
            continue;
        }
        printf("%c", *r);
        r++;
    }
}
