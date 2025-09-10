#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the order of the square matrix (n): ");
    scanf("%d", &n);

    int mat1[n][n], mat2[n][n], sum[n][n];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Add matrices
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Print the result
    printf("Sum of the two matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}