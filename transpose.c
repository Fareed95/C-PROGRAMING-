#include <stdio.h>

#define N 3  // Define the size of the square matrix (N x N)

// Function to find the transpose of a square matrix in-place
void transpose(int matrix[N][N]) {
    // Iterate over the upper triangle of the matrix
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // Swap elements (i, j) with (j, i)
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

// Function to display a square matrix
void displayMatrix(int matrix[N][N]) {
    printf("Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original ");
    displayMatrix(matrix);

    // Find the transpose of the matrix in-place
    transpose(matrix);

    printf("\nTranspose ");
    displayMatrix(matrix);

    return 0;
}
