#include <stdio.h>
#include <ctype.h>

void convert(char str[]);
void reverse(char str[]);
int check(char str1[], char str2[]);

int main() {
    char str1[102], str2[102];
    scanf("%[^\n] %[^\n]", str1, str2);
    reverse(str1);
    reverse(str2);
    printf("*** Results ***\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("***************\n");
    convert(str1);
    convert(str2);
    if (check(str1, str2)) {
        printf("Both strings are the same.");
    } else {
        printf("Both strings are not the same.");
    }
}

void convert(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

void reverse(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == toupper(str[i])) {
            str[i] = tolower(str[i]);
        } else {
            str[i] = toupper(str[i]);
        }
    }
}

int check(char str1[], char str2[]) {
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    } return 1;
}
