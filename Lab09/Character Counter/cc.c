#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char *str;

    str = (char *) malloc(22 * sizeof(char));

    scanf("%[^\n]", str);

    char *ptr = str;
    int small = 0, big = 0, num = 0;

    while (*ptr != '\0') {
        if (islower(*ptr)) {
            small++;
        } else if (isupper(*ptr)) {
            big++;
        } else if (isdigit(*ptr)) {
            num++;
        } ptr++;
    }
    printf("Lowercase letters: %d\n", small);
    printf("Uppercase letters: %d\n", big);
    printf("Digits: %d", num);
    return 0;
}
