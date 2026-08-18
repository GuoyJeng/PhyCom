#include <stdio.h>
#include <ctype.h>

int find(char str, char check[]);

int main() {
    int n, index = 0, count[26];
    char alpha[27], input;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &input);
        if (find(tolower(input), alpha) != -1) {
            count[find(tolower(input), alpha)]++;
        } else {
            alpha[index] = tolower(input);
            count[index] = 1;
            index++;
            alpha[index] = '\0';
        }
    }
    for (int i = 0; alpha[i] != '\0'; i++) {
        printf("%c: %d\n", alpha[i], count[i]);
    } return 0;
}

int find(char str, char check[]) {
    for (int i = 0; check[i] != '\0'; i++) {
        if (str == check[i]){
            return i;
        }
    } return -1;
}
