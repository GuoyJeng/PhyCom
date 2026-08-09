#include <stdio.h>
#include <stdlib.h>

int main() {
    char size1[10], size2[10];
    int num1 = 0, num2 = 0;

    // รับค่าสตริง 2 ข้อความ
    if (scanf("%s %s", size1, size2) != 2) return 0;

    // แปลงขนาดที่ 1 เป็นตัวเลข (เริ่มวนลูปตั้งแต่ index 1 เพื่อข้ามอักษรตัวแรก)
    for (int i = 1; size1[i] != '\0'; i++) {
        if (size1[i] >= '0' && size1[i] <= '9') {
            num1 = num1 * 10 + (size1[i] - '0');
        }
    }

    // แปลงขนาดที่ 2 เป็นตัวเลข
    for (int i = 1; size2[i] != '\0'; i++) {
        if (size2[i] >= '0' && size2[i] <= '9') {
            num2 = num2 * 10 + (size2[i] - '0');
        }
    }

    // คำนวณผลต่างของขนาด
    int diff = num1 - num2;
    if (diff < 0) {
        diff = -diff; // ปรับให้เป็นค่าบวก
    }

    // คำนวณ 2^diff ด้วย Bitwise Shift (1LL << diff)
    long long result = 1LL << diff;

    printf("%lld\n", result);

    return 0;
}