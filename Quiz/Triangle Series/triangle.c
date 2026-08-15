#include <stdio.h>

int main() {
    unsigned int num, result = 0;
    scanf("%u", &num);
    for (int i = 1; i <= num; i++) {
        result += i;
    } printf("%u", result);
}
