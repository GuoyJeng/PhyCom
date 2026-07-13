#include <stdio.h>

int main() {
    char num[6];
    scanf("%5s", num);
    char result[6] = {num[2], num[3], num[4], num[0], num[1], '\0'};
    printf("%s", result);
    return 0;
}
