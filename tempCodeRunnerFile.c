
    printf("\nDigit frequencies:\n");
    for (int i = 0; i < NUM_DIGITS; i++) {
        printf("Digit %d: %d\n", i, frequency[i]);
    }

    // Display unique numbers (after removing duplicates)
    printf("\nUnique numbers after removing duplicates:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", uniqueNumbers[i]);