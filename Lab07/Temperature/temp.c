#include <stdio.h>
#include <ctype.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main() {
    double num;
    char fc;
    scanf("%lf %c", &num, &fc);
    if (tolower(fc) == 'c') {
        printFarenheit(celsiusToFahrenheit(num));
    } else if (tolower(fc) == 'f') {
        printCelcius(fahrenheitToCelcius(num));
    }
}

double celsiusToFahrenheit(double celcius) {
    double result = 32 + celcius * 1.8;
    return result;
}

double fahrenheitToCelcius(double fahrenheit) {
    double result = (fahrenheit - 32) / 1.8;
    return result;
}

void printFarenheit(double fahrenheit) {
    printf("%.2lf f", fahrenheit);
}

void printCelcius(double celcius) {
    printf("%.2lf c", celcius);
}
