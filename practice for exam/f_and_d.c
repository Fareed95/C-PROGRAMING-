#include <stdio.h>

// Function to find the frequency of digits in a set of numbers
void findFrequency(int arr[], int size) {
    int freq[10] = {0}; // Array to store frequency of digits (assuming digits are between 0 and 9)

    // Calculate frequency of each digit
    for (int i = 0; i < size; i++) {
        int count = 1 ;
        for (int j= i+1; j<size; j++){
            if(arr[i] == arr[j]){
                count++ ;
            }
        }
        freq[i] = count ;
    }

    // Print the frequency of each digit
    printf("Frequency of digits:\n");
    for (int i = 0; i < size; i++) {
            printf("Digit %d: %d\n", arr[i], freq[i]);
    }
}

// Function to remove duplicates from an array
#include <stdio.h>
#include <string.h>

int removeDuplicates(int arr[], int size) {
    int index = 0;

    // Iterate through the array
    for (int i = 0; i < size; i++) {
        int j;
        // Check if arr[i] is already present in the array
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to remove the duplicate
                memmove(&arr[j], &arr[j + 1], (size - j - 1) * sizeof(int));
                size--; // Decrement the size of the array
                j--;    // Adjust index to recheck the current position after shifting
            }
        }
        // If arr[i] is not present in the remaining array, add it to the resultant array
        arr[index++] = arr[i];
    }

    return index; // Return the new size of the array after removing duplicates
}

int main() {
    int arr[] = {2, 1, 1, 4, 2, 5, 2};
    // printf("%d",sizeof(arr));
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find frequency of digits
    findFrequency(arr, size);

    // Remove duplicates from the array
    int newSize = removeDuplicates(arr, size);

    // Print the resultant array without duplicates
    printf("Array without duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
