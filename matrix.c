#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 256
#define M 256

int random_int() {
    return 1 + rand() % (9999 - 0 + 1);
}

void multiplyMatrix(int **m1, int **m2, int **res) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            res[i][j] = 0;
            for (int k = 0; k < N; k++) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

int main() {
    srand(time(0));

    int **matrix_a = (int **)malloc(N * sizeof(int *));
    int **matrix_b = (int **)malloc(N * sizeof(int *));
    int **res = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        matrix_a[i] = (int *)malloc(M * sizeof(int));
        matrix_b[i] = (int *)malloc(M * sizeof(int));
        res[i] = (int *)malloc(M * sizeof(int));
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matrix_a[i][j] = random_int();
            matrix_b[i][j] = random_int();
        }
    }

    multiplyMatrix(matrix_a, matrix_b, res);

    for (int i = 0; i < N; i++) {
        free(matrix_a[i]);
        free(matrix_b[i]);
    }
    free(matrix_a);
    free(matrix_b);

    return 0;
}
