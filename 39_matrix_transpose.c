#include <stdio.h>

void transposeMatrix(int mat[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

void displayMatrix(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int result[3][3];

    int rows = 3;
    int cols = 3;

    transposeMatrix(mat, result, rows, cols);

    printf("Original Matrix:\n");
    displayMatrix(mat, rows, cols);

    printf("\nTransposed Matrix:\n");
    displayMatrix(result, cols, rows);

    return 0;
}

