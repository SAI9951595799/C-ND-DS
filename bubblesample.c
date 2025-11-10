#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;

    // Outer loop for each pass
    for (i = 0; i < n - 1; i++) {
        swapped = 0;  // Flag to check if a swap occurred in this pass
        
        // Inner loop for comparing adjacent elements
        for (j = 0; j < n - i - 1; j++) {
            // Swap if the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        
        // If no elements were swapped in this pass, the array is already sorted
        if (swapped == 0) {
            break;
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) 
{
    for(int i=0; i<size;i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);  // Perform Bubble Sort

    printf("Sorted array: \n");
    printArray(arr, n);  // Print the sorted array

    return 0;
}
