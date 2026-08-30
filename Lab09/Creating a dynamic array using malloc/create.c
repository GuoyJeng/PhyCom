#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i;
    int *arr;

    scanf("%d", &size);

    // Allocate memory for the array
    arr = (___) malloc(___);

    // Populate the array
    for (i = 0; i < size; i++)
        *(___) = i + 1;

    int *ptr = ___;  // Point to the first element of the array

    // Print the array in order using pointers
    printf("Array elements in order: ");
    while (___)
        printf("%d ", ___);

    printf("\n");

    // Print the array in reverse using pointers
    printf("Array elements in reverse: ");
    while (___)
        printf("%d ", ___);  // Move the pointer to the previous element
    printf("\n");

    // Free the allocated memory
    free(___);

    return 0;
}