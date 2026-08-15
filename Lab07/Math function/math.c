#include <stdio.h>

double getValue();
double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size); 

int main() {
    int size;
    scanf("%d", &size);
    double ans[size];
    for (int i = 0; i < size; i++) {
        ans[i] = getValue();
    }
    printf("%d Values\n", size);
    printf("Min: %.3lf\n", findMin(ans, size));
    printf("Max: %.3lf\n", findMax(ans, size));
    printf("Avg: %.3lf", findAvg(ans, size));
}

double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}

double findMin(double array[], int size) {
    double min = array[0];
    for (int i = 0; i < size; i++) {
        if (min > array[i]) {
            min = array[i];
        }
    } return min;
}

double findMax(double array[], int size) {
    double max = array[0];
    for (int i = 0; i < size; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    } return max;
}

double findAvg(double array[], int size) {
    double avg = 0;
    for (int i = 0; i < size; i++) {
        avg += array[i];
    } 
    double arraySize = (double) size;
    return avg / arraySize;
}
