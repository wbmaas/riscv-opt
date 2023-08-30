#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double rand_double() {
    double div = RAND_MAX / (9999 - (-9999));
    return -9999 + (rand() / div);
}

int main() {
    int rows = 256;
    int cols = 256;

    double *A = (double *)malloc(rows * cols * sizeof(double));
    double *B = (double *)malloc(cols * cols * sizeof(double));
    double *C = (double *)malloc(rows * cols * sizeof(double));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            A[i * cols + j] = rand_double();
            B[i * cols + j] = rand_double();
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            C[i * cols + j] = 0;
            for (int k = 0; k < cols; ++k) {
                C[i * cols + j] += A[i * cols + k] * B[k * cols + j];
            }
        }
    }

    free(A);
    free(B);
    free(C);

    return 0;
}
