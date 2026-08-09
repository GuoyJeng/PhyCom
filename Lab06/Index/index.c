#include <stdio.h>

int main() {
    int N[] = {1, 3, 9, 7, 11, 15, 19}, M[] = {2, 20, 8, 10, 4, 6, 16, 18}, num, check, check1;
    scanf("%d", &num);
    check = 0;
    check1 = 0;
    int collect;
    while (num > 20 || num < 1) {
        scanf("%d", &num);
    }
    for (int i = 0; i < 7; i++) {
        if (N[i] == num) {
            check++;
            collect = i;
        }
    }
    for (int i = 0; i < 8; i++) {
        if (M[i] == num) {
            check1++;
            collect = i;
        }
    }
    if (check == 1) {   
        printf("%d is in N at index [%d]", N[collect], collect);
    } else if (check1 == 1) {
        printf("%d is in M at index [%d]", M[collect], collect);
    } else {
        printf("%d is not in neither M nor N", num);
    }
}
