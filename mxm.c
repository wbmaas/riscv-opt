#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double rand_double() {
    double div = RAND_MAX / (9999 - (-9999));
    return -9999 + (rand() / div);
}

int main() {
    srand(time(0));
    int rows = 256;
    int cols = 256;

    double **matrix_a = (double **)malloc(rows * sizeof(double *));
    double **matrix_b = (double **)malloc(rows * sizeof(double *));
    double **matrix_res = (double **)malloc(rows * sizeof(double *));

    for (int i = 0; i < rows; i++) {
        matrix_a[i] = (double *)malloc(cols * sizeof(double));
        matrix_b[i] = (double *)malloc(cols * sizeof(double));
        matrix_res[i] = (double *)malloc(cols * sizeof(double));
        for (int j = 0; j < cols; j++) {
            matrix_a[i][j] = rand_double();
            matrix_b[i][j] = rand_double();
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix_res[i][j] = 0;
            for (int k = 0; k < rows; k++) {
                matrix_res[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }

    return 0;
}
