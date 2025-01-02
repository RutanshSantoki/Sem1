// finding the max and min no from given 1-d array without sorting array. also swap position of minimum and maximum.

#include <stdio.h>

int main() {
    int arr[] = {3, 5, 1, 9, 2, 8, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxIndex = 0, minIndex = 0;

    // Find the max and min indices
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) maxIndex = i;
        if (arr[i] < arr[minIndex]) minIndex = i;
    }

    // Swap max and min elements
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    // Print the updated array
    printf("Array after swapping:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
