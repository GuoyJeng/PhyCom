#include <stdio.h>

int main() {
    int n, check, check1;
    scanf("%d", &n);
    check = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == check || j == check1) {
                printf("-");
            } else {
                printf("#");
            }
        }
        check -= 1;
        check1 += 1;
        printf("\n");
    }
}
