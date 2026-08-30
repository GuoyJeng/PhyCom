#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;

    // Allocate memory for the string "Arnold Schwarzenegger" (including null terminator)
    str = (char *) malloc(22 * sizeof(char));

    // Copy "Porsche Arnold" into the allocated memory
    strcpy(str, "Arnold Schwarzenegger");

    // Print the string
    char *ptr = str;
    while (*ptr)
        printf("%c", *ptr++);

    // Free the allocated memory
    free(str);
    free(NULL);

    printf("\n");
    return 0;
}
