#include <stdio.h>

int main() {
    int n, check, width;
    scanf("%d", &n);
    check = n - 1;
    width = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (check <= j) {
                break;
            } printf(" ");
        } check -= 1;
        for (int j = 0; j < width; j++) {
            printf("*");
        } 
        width += 2;
        printf("\n");
    }
}