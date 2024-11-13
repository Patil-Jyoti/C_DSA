#include <stdio.h>

int main() {
    int arr[5] = {8, 3, 1, 9, 4}; // Array of 5 one-digit numbers
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the minimum is the first element

        // Find the minimum element in the remaining unsorted array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
