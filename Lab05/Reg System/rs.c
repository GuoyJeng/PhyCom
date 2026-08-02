#include <stdio.h>

int main() {
    int age, height, weight, allAge, allHeight, allWeight, first, second, third, forth;
    first = 0;
    second = 0;
    third = 0;
    forth = 0;
    allAge = 0;
    allHeight = 0;
    allWeight = 0;
    for (int i = 0; i < 50; i++) {
        scanf(" %d %d %d", &age, &height, &weight);
        if (age >= 20 && height >= 160) {
            first++;
        } else if (age < 20 && (height <= 180 || weight >= 60)) {
            second++;
        } if (age >= 30 && weight >= 40 && weight <= 80) {
            third++;
        } if (age < 40 && (weight < 85 || height <= 200)) {
            forth++;
        }
        allAge += age;
        allHeight += height;
        allWeight += weight;
    }
    float avgAge = allAge / 50.0;
    float avgHeight = allHeight / 50.0;
    float avgWeight = allWeight / 50.0;
    printf("Age >= 20 and Height >= 160: %d\n", first);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", second);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", third);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", forth);
    printf("Average Age: %.0f\n", avgAge);
    printf("Average Height: %.2f\n", avgHeight);
    printf("Average Weight: %.2f", avgWeight);
}
