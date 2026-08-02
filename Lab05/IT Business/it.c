#include<stdio.h>

int main() {
    char check, confirm;
    float amount, myMoney, change;
    int times = 0;
    scanf("%f %f", &amount, &myMoney);
    while (1) {
        if (times == 3) {
            break;
        }
        scanf(" %c", &check);
        if (check == 'E') {
            scanf(" %c", &confirm);
            if (confirm == 'D') {
                break;
            } times++;
        } else if (check == 'W') {
            scanf(" %f", &change);
            if (change > amount) {
                times++;
                continue;
            }
            amount -= change;
            myMoney += change;
            times = 0;
        } else if (check == 'D') {
            scanf(" %f", &change);
            if (change > myMoney) {
                times++;
                continue;
            }
            amount += change;
            myMoney -= change;
            times = 0;
        } else {
            times++;
        }
    }
    printf("%.2f\n%.2f", amount, myMoney);
    return 0;
}
