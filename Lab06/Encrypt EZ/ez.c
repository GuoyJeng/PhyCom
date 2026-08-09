#include <stdio.h>
#include <ctype.h>

int main() {
    char str[205], check[27] = "abxypqrmncedkljoshtufvzgwi";
    
    if (scanf("%[^\n]", str) == 1) {
        for (int i = 0; str[i] != '\0'; i++) {
            for (int j = 0; check[j] != '\0'; j++) {
                if (str[i] == toupper(check[j])) {
                    str[i] = toupper(check[(j - 5 + 26) % 26]);
                    break; // หยุดลูป j ทันทีหลังเปลี่ยนตัวอักษรเสร็จ
                } else if (str[i] == check[j]) {
                    str[i] = check[(j - 5 + 26) % 26];
                    break; // หยุดลูป j ทันทีหลังเปลี่ยนตัวอักษรเสร็จ
                }
            }
        }
        printf("%s\n", str);
    }
    
    return 0;
}