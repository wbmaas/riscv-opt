#include <stdlib.h>

int main() {
    int rows = 64;
    int cols = 64;

    double *A = (double *)malloc(rows * cols * sizeof(double));
    double *B = (double *)malloc(cols * cols * sizeof(double));
    double *C = (double *)malloc(rows * cols * sizeof(double));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            // initialize matrix
            int index = i * cols + j;
            A[index] = index + 0.1234;
            B[index] = index + 0.4321;

            // calculate MxM
            C[index] = 0;
            for (int k = 0; k < cols; ++k) {
                C[index] += A[i * cols + k] * B[k * cols + j];
            }
        }
    }

    free(A);
    free(B);
    free(C);

    return 0;
}
