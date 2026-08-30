#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;

    // Allocate memory for the string "Arnold Schwarzenegger" (including null terminator)
    str = (char *) malloc(22 * sizeof(char));

    // Copy "Porsche Arnold" into the allocated memory
    scanf("%[^\n]s", str);

    // Print the string
    char *ptr = str;
    while (*ptr)
        *(ptr++);

    printf("%d", ptr - str);
    return 0;
}
