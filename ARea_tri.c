#include <stdio.h>

// Function to calculate area of triangle recursively
void calculateArea(float *base, float *height, float *area, int step) {
    if (step == 0) {
        // Base case: calculate area using base and height
        *area = 0.5 * (*base) * (*height);
        return;
    }

    // Recursive call: continue to the next step
    calculateArea(base, height, area, step - 1);
}

int main() {
    float base, height, area;
    float *ptrBase = &base, *ptrHeight = &height, *ptrArea = &area;

    // Input base and height of the triangle
    printf("Enter the base of the triangle: ");
    scanf("%f", ptrBase);
    printf("Enter the height of the triangle: ");
    scanf("%f", ptrHeight);

    // Initial step value
    int step = 1;

    // Calculate the area using recursion
    calculateArea(ptrBase, ptrHeight, ptrArea, step);

    // Print the result
    printf("The area of the triangle is: %.2f\n", *ptrArea);

    return 0;
}
