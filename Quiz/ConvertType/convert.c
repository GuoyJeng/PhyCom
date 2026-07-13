#include <stdio.h>

int main() {
	int num;
	float num1;
	char text;
	scanf("%d", &num);
	scanf("%f", &num1);
	scanf(" %c", &text);
	float test = (float) num;
	int test1 = (int) num1;
	printf("%.3f\n", test);
	printf("%d\n", test1);
	printf("%d", text);
	return 0;	
}

