#include <stdio.h>
#include <stdlib.h>

#define NUM_DIGITS 10

// Function to check if a digit is present in an array
int isDigitInArray(int digit, int *array, int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == digit) {
            return 1; // Digit found
        }
    }
    return 0; // Digit not found
}

int main() {
    int numbers[100];
    int frequency[NUM_DIGITS] = {0};
    int uniqueNumbers[100];
    int uniqueCount = 0;

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate frequency of each digit and collect unique numbers
    for (int i = 0; i < n; i++) {
        int num = abs(numbers[i]); // Handle negative numbers by taking absolute value

        // Count frequency of digits in the current number
        while (num > 0) {
            int digit = num % 10;
            frequency[digit]++;
            num /= 10;
        }

        // Collect unique numbers
        if (!isDigitInArray(numbers[i], uniqueNumbers, uniqueCount)) {
            uniqueNumbers[uniqueCount] = numbers[i];
            uniqueCount++;
        }
    }

    // Display frequency of each digit
    printf("\nDigit frequencies:\n");
    for (int i = 0; i < NUM_DIGITS; i++) {
        printf("Digit %d: %d\n", i, frequency[i]);
    }

    // Display unique numbers (after removing duplicates)
    printf("\nUnique numbers after removing duplicates:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", uniqueNumbers[i]);
    }
    printf("\n");

    return 0;
}
