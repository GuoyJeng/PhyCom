#include <stdio.h>

int main() {
	char name[21], surname[21], nickname[21], id[9];
	scanf("%s %s %s %s", name, surname, nickname, id);
	printf("Hello World, my name is %s (%s)\n\n", nickname, name);
	printf("Student ID: %s\n", id);
	printf("Name: %s %s\n", name, surname);
	printf("Nickname: %s", nickname);
	return 0;		
}

