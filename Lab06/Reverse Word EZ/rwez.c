#include <stdio.h>

int main() {
    char str[101];
    scanf("%[^\n]", str);
    int check;
    for (int i = 0; str[i] != '\0'; i++) {
        check = i;
    }
    char result[check + 1];
    int num = 0;
    for (int i = check; i > -1; i--) {
        result[num] = str[i];
        num++;
    }
    result[num] = '\0';
    printf("%s", result);
    return 0;
}
