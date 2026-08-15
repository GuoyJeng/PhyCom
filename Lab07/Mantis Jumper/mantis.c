#include <stdio.h>

int fibo(int num);

int main() {
    int num, result = 0;
    scanf("%d", &num);
    printf("method = %d", fibo(num + 1));
}

int fibo(int num) {
    if (num < 2) {
        return num;
    } return fibo(num - 1) + fibo(num - 2);
}
