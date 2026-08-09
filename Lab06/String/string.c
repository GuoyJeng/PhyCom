#include <stdio.h>

int main() {
    char str[100];
    unsigned int index;
    scanf("%[^\n]", str);
    scanf(" %u", &index);
    for (unsigned int i = 0; i < index; i++) {
        printf("%c", str[i]);
    }
}
