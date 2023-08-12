#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100
#define M 100

int random_int() {
    return 1 + rand() % (9999 - 0 + 1);
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

    printf("{\n");
    for (int j = 0; j < N; j++) {
        printf("    {");
        for (int k = 0; k < M; k++) {
            printf("%d, ", matrix_a[j][k]);
        }
        printf("},\n");
    }
    printf("};\n");

    for (int i = 0; i < N; i++) {
        free(matrix_a[i]);
        free(matrix_b[i]);
    }
    free(matrix_a);
    free(matrix_b);

    return 0;
}
