#include <stdio.h>
#include <ctype.h>

int check(char first[], char second[]);
int partition(char arr[][61], int low, int high);
void quickSort(char arr[][61], int low, int high);
void cap(char name[]);
void swap(char first[], char second[]);

int main() {
    int num;
    scanf("%d", &num);
    char allName[num][61];
    for (int i = 0; i < num; i++) {
        scanf(" %[^\n]", allName[i]);
        cap(allName[i]);
    }
    
    quickSort(allName, 0, num - 1);
    
    for (int i = 0; i < num; i++) {
        printf("%s\n", allName[i]);
    }
    return 0;
}

int check(char first[], char second[]) {
    int i = 0;
    while (first[i] != '\0' && second[i] != '\0') {
        if (first[i] != second[i]) {
            return first[i] < second[i];
        } i++;
    } return first[i] < second[i];
}

int partition(char arr[][61], int low, int high) {
    int i = low - 1;
    for (int j = low; j <= high; j++) {
        if (check(arr[j], arr[high])) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(char arr[][61], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void swap(char first[], char second[]) {
    char collect[61];
    int i = 0;
    while (second[i] != '\0') {
        collect[i] = second[i];
        i++;
    } collect[i] = '\0';
    i = 0;
    while (first[i] != '\0') {
        second[i] = first[i];
        i++;
    } second[i] = '\0';
    i = 0;
    while (collect[i] != '\0') {
        first[i] = collect[i];
        i++;
    } first[i] = '\0';
}

void cap(char name[]) {
    int space = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            space = 1;
        } else if (i == 0 || space) {
            name[i] = toupper(name[i]);
            space = 0;
        } else {
            name[i] = tolower(name[i]);
        }
    }
}
