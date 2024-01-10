#include <stdio.h>

#define N 3

void displayMatrix(double mat[][N], int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%.2f\t", mat[i][j]);
    }
    printf("\n");
  }
}

double determinant(double mat[][N], int n) {
  double det = 1;
  int sign = 1;
  double temp[N][N];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      temp[i][j] = mat[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    if (temp[i][i] == 0) {
      return 0;
    }

    for (int j = i + 1; j < n; j++) {
      double ratio = temp[j][i] / temp[i][i];

      for (int k = 0; k < n; k++) {
        temp[j][k] -= ratio * temp[i][k];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    det *= temp[i][i];
  }

  return det * sign;
}

int main(void) {
  double mat[N][N] = {{4, 7, 1}, {2, 6, 3}, {1, 2, 5}};

  printf("Original Matrix:\n");
  displayMatrix(mat, N, N);

  double det = determinant(mat, N);
  printf("\nDeterminant: %.2f\n", det);

  return 0;
}
