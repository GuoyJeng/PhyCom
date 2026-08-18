#include <stdio.h>

int main() {
    char str[101], palindrome[101];
    scanf("%[^\n]", str);
    int num = 0, start = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        num++;
    }
    for (int i = num - 1; i > -1; i--) {
        palindrome[start++] = str[i];
    }
    palindrome[start + 1] = '\0';
    for (int i = 0; i < num; i++) {
        if (str[i] != palindrome[i]) {
            printf("It is not Palindrome.");
            return 0;
        }
    }
    printf("It is Palindrome.");
}
