#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    char unique_chars[1000];
    int count[1000] = {0};
    int unique_count = 0;

    for (int i = 0; i < n; i++) {
        char ch;
        scanf(" %c", &ch);

        // แปลงเป็นตัวพิมพ์เล็ก (ถ้าเป็นพิมพ์ใหญ่)
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }

        // ค้นหาว่าตัวอักษรนี้เคยเจอหรือยัง
        int found_index = -1;
        for (int j = 0; j < unique_count; j++) {
            if (unique_chars[j] == ch) {
                found_index = j;
                break;
            }
        }

        // ถ้าเคยเจอแล้ว ให้เพิ่มความถี่
        if (found_index != -1) {
            count[found_index]++;
        } 
        // ถ้ายังไม่เคยเจอ ให้เพิ่มเป็นตัวอักษรใหม่
        else {
            unique_chars[unique_count] = ch;
            count[unique_count] = 1;
            unique_count++;
        }
    }

    // แสดงผลตามลำดับที่รับเข้ามา
    for (int i = 0; i < unique_count; i++) {
        printf("%c: %d\n", unique_chars[i], count[i]);
    }

    return 0;
}
