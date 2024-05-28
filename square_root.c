#include <stdio.h>

// Function to compute the square root using Newton-Raphson method
double squareRoot(int n) {
    // Initial guess for the square root
    double x = n;
    double epsilon = 0.000001; // Small value for precision

    // Iterate using a for loop with a fixed number of iterations
    for (int i = 0; i < 1000; i++) { // Perform a fixed number of iterations (e.g., 1000)
        double fx = x * x - n; // Compute f(x) = x^2 - n
        double dfx = 2 * x;    // Compute f'(x) = 2x

        // Update x using the Newton-Raphson formula for square root
        x = x - fx / dfx;

        // Check if the desired precision is achieved
        if (fx * fx < epsilon * epsilon) {
            break; // Exit the loop if precision is met
        }
    }

    return x;
}

int main() {
    int number;

    // Input the number
    printf("Enter a number to find its square root: ");
    scanf("%d", &number);

    // Check if the number is a non-negative integer
    if (number < 0) {
        printf("Error: Cannot find square root of a negative number.\n");
        return 1;
    }

    // Compute the square root using the squareRoot function
    double root = squareRoot(number);

    // Output the square root
    printf("Square root of %d is approximately %.6f\n", number, root);

    return 0;
}
