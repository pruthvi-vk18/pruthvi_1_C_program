#include <stdio.h>

int main() {
    // Declare and initialize a one-dimensional array of integers
    int arr[5] = {10, 20, 30, 40, 50};

    // Print the elements of the array using a loop
    printf("Array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Modify an element in the array
    arr[2] = 100;

    // Print the updated array
    printf("\nUpdated Array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}