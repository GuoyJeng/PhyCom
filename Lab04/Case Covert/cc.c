#include <stdio.h>

int main() {
    char check;
    scanf("%c", &check);
    if (123 > check && check > 96) {
        printf("%c", check - 32);
    } else if (91 > check && check > 64) {
        printf("%c", check + 32);
    } else {
        printf("error");
    }   return 0;
}
