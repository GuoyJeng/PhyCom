#include <stdio.h>

int power(int n, int ex);
int checkNum(char num);
int tonum (char str[]);

int main() {
    char size1[4], size2[4];
    scanf("%s %s", size1, size2);
    int num1 = tonum(size1), num2 = tonum(size2);
    printf("%d", power(2, num2 - num1));
    return 0;
}

int power(int n, int ex) {
    int result = 1;
    for (int i = 1; i <= ex; i++) {
        result *= n;
    } return result;
}

int checkNum(char num) {
    char check[11] = "0123456789";
    for (int i = 0; i < 10; i++) {
        if (num == check[i]) {
            return i;
        }
    }
}

int tonum (char str[]) {
    int num = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A') {
            continue;
        }
        if (num) {
            num = num * 10 + checkNum(str[i]);
        } 
        num += checkNum(str[i]);
    } return num;
}
