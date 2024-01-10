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

void inverseMatrix(double mat[][N], double inv[][N], int n) {
  double temp[N][2 * N];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      temp[i][j] = mat[i][j];
      temp[i][j + n] = (i == j) ? 1 : 0;
    }
  }

  for (int i = 0; i < n; i++) {
    if (temp[i][i] == 0) {
      for (int k = i + 1; k < n; k++) {
        if (temp[k][i] != 0) {
          for (int j = 0; j < 2 * n; j++) {
            double tempSwap = temp[i][j];
            temp[i][j] = temp[k][j];
            temp[k][j] = tempSwap;
          }
          break;
        }
      }
    }

    double pivot = temp[i][i];

    for (int j = 0; j < 2 * n; j++) {
      temp[i][j] /= pivot;
    }

    for (int k = 0; k < n; k++) {
      if (k != i) {
        double ratio = temp[k][i];
        for (int j = 0; j < 2 * n; j++) {
          temp[k][j] -= ratio * temp[i][j];
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      inv[i][j] = temp[i][j + n];
    }
  }
}

int main(void) {
  double mat[N][N] = {{4, 7, 1}, {2, 6, 3}, {1, 2, 5}};
  double inv[N][N];

  printf("Original Matrix:\n");
  displayMatrix(mat, N, N);

  // Calculate and display inverse
  inverseMatrix(mat, inv, N);

  printf("\nInverse Matrix:\n");
  displayMatrix(inv, N, N);

  return 0;
}
