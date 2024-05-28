#include <stdio.h>
#include <math.h>

int main() {
    double base;
    int exponent;

    // Input base and exponent from the user
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate power using pow() function from math library
    double result = pow(base, exponent);

    // Display the result
    printf("%lf raised to the power of %d is: %lf\n", base, exponent, result);

    return 0;
}
