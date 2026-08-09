#include <stdio.h>

int main() {
    double matrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %lf", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((matrix[i][j] == 0 && i != j) || (i == 0 && j == 0)) {
                continue;
            } else if (i == j && matrix[i][j] == matrix[i - 1][j - 1]) {
                continue;
            } 
            printf("This is not a scalar matrix");
            return 0;
        }
    } printf("This is a scalar matrix");
}
