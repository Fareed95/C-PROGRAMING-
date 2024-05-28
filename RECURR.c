#include <stdio.h>

// Function to calculate power using recursion
double power(double base, int exponent) {
    // Base case: when exponent is 0, return 1
    if (exponent == 0) {
        return 1;
    }
    // Recursive case: calculate power recursively
    else if (exponent > 0) {
        return base * power(base, exponent - 1);
    }
    // For negative exponents, calculate reciprocal power
    else {
        return 1 / power(base, -exponent);
    }
}

int main() {
    double base;
    int exponent;

    // Input base and exponent from the user
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate power using recursion
    double result = power(base, exponent);

    // Display the result
    printf("%lf raised to the power of %d is: %lf\n", base, exponent, result);

    return 0;
}
