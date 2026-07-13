#include <stdio.h>

int main() {
	char num[6];
	scanf("%5s", num);
	for (int i = 0; i < 5; i++) {
        int all = 0;
        for (int j = 0; j < i; j++) {
            printf("%c", 32);
            all += 1;
        }
        for (int j = 0; j < i + 1; j++) {
            printf("%c", num[j]);
            all += 1;
        }
        for (int j = all; j < 80; j++) {
            printf("%c", 32);
        }
    }
	return 0;
}
