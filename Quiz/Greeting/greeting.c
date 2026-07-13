#include <stdio.h>

int main() {
	char ans[201];
	scanf("%[^\n]%*c", ans);
	printf("Hello, %s!", ans);
	return 0;
}

