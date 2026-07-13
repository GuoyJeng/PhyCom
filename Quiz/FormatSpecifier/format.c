#include <stdio.h>

int main() {
	int num;
	float num1;
	char text;
	char text1[21];
	scanf("%d", &num);
	scanf("%f", &num1);
	scanf(" %c", &text);
	scanf("%20s", text1);
	printf("Integer: %d\n", num);
	printf("Float: %.3f\n", num1);
	printf("Character: %c\n", text);
	printf("String: %s", text1);
	return 0;
}
