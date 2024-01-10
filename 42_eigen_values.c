#include <stdio.h>
#include <gsl/gsl_eigen.h>

#define N 3

int main(void) {
    gsl_matrix *m = gsl_matrix_alloc(N, N);
    gsl_vector_complex *eval = gsl_vector_complex_alloc(N);
    gsl_eigen_nonsymm_workspace *w = gsl_eigen_nonsymm_alloc(N);

    // Set your matrix values here
    double data[N][N] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}, {7.0, 8.0, 9.0}};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            gsl_matrix_set(m, i, j, data[i][j]);
        }
    }

    gsl_eigen_nonsymm(m, eval, w);

    printf("Eigenvalues:\n");
    for (int i = 0; i < N; i++) {
        gsl_complex eval_i = gsl_vector_complex_get(eval, i);
        printf("%f + %fi\n", GSL_REAL(eval_i), GSL_IMAG(eval_i));
    }

    gsl_matrix_free(m);
    gsl_vector_complex_free(eval);
    gsl_eigen_nonsymm_free(w);

    return 0;
}

