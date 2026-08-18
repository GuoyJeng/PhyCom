#include <stdio.h>
#include <ctype.h>

int main() {
    char str[27] = "abxypqrmncedkljoshtufvzgwi", check[201];
    scanf("%[^\n]", check);
    int i = 0;
    while (check[i] != '\0') {
        int num = 0;
        if (check[i] != ' ') {
            for (int j = 0; str[j] != '\0'; j++) {
                if (str[j] == tolower(check[i])) {
                    num = j;
                    break;
                }
            }
            num = (num + 5 + 26) % 26;
            if (check[i] == toupper(check[i])) {
                check[i] = toupper(str[num]);
            } else {
                check[i] = str[num];
            }
        } i++;
    } printf("%s", check);
    return 0;
}
