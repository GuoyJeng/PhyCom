#include <stdio.h>

int main() {
    unsigned int a, index[5];
    scanf("%u %u %u %u %u", &index[0], &index[1], &index[2], &index[3], &index[4]);
    scanf(" %u", &a);
    printf("Value at index %u is %u", a, index[a]);
}
