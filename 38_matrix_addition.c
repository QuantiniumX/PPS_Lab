#include <stdio.h>

void addMatrices(int mat1[][3], int mat2[][3], int result[][3], int rows,
                 int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
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
    int mat1[3][3];
    int mat2[3][3];
    int result[3][3];
    int rows = 3;
    int cols = 3;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Call addMatrices function
    addMatrices(mat1, mat2, result, rows, cols);

    printf("Matrix 1:\n");
    displayMatrix(mat1, rows, cols);

    printf("\nMatrix 2:\n");
    displayMatrix(mat2, rows, cols);

    printf("\nSum of the matrices:\n");
    displayMatrix(result, rows, cols);

    return 0;
}
