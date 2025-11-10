#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function to place pivot correctly
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choosing the last element as pivot
    int i = low - 1;  // Index for smaller elements
 int j;
    for ( j = low; j < high; j++) {
        if (arr[j] <= pivot) {  // If current element is smaller than pivot
            i++;
            swap(&arr[i], &arr[j]);  // Swap elements
        }
    }

    swap(&arr[i + 1], &arr[high]);  // Swap pivot to its correct position
    return (i + 1);  // Return pivot index
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Get partition index

        quickSort(arr, low, pi - 1);  // Recursively sort left partition
        quickSort(arr, pi + 1, high); // Recursively sort right partition
    }
}

// Function to print the array
void printArray(int arr[], int size) {
	int i;
    for ( i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function
int main() {
    int arr[] = {75, 45, 40, 80, 35, 78, 98, 30, 39, 100};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    printArray(arr, n);
    
    return 0;
}

