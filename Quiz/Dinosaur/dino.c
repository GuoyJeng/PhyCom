#include <stdio.h>

int main() {
    int hp, atk, num = 0;
    scanf("%d %d", &hp, &atk);
    for (int i = hp; i > 0; i -= atk) {
        printf("%d\n", i);
        num += 1;
    }
    printf("0\n");
    printf("%d", num);
    return 0;
}
