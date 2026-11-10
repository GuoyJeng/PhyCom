#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct count {
    int character;
    int words;
    int line;
};

int main() {
    struct count Count = {0, 0, 0};
    char text[451];
    scanf("%450[^\n]", text);
    while (text[0] != '.') {
        char *p = text;
        while (*p != '\0') {
            if (*p == ' ') {
                Count.words++;
            } else if (isalpha(*p)) {
                Count.character++;
            }
            p++;
        }
        Count.words++;
        Count.line++;
        scanf(" %450[^\n]", text);
    }
    printf("Char = %d, word = %d, line = %d", Count.character, Count.words, Count.line);
}
