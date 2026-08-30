#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, check = 0;
    char *str;

    scanf("%d %d", &n, &m);

    str = (char *) malloc((n + 1) * sizeof(char));
    scanf(" %[^\n]", str);


    char *ptr = str;

    while (*ptr != '\0') {
        if (check++ % m == 0) {
            printf("%c", *ptr);
        }
        ptr++;
    }

    free(str);
    return 0;
}
