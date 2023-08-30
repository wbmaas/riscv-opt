#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define M 10

int random_int() {
    return 1 + rand() % (9999 - 0 + 1);
}

double rand_double() {
    double div = RAND_MAX / (9999 - (-9999));
    return -9999 + (rand() / div);
}

int main(int argc, char *argv[]) {
    srand(time(0));

    int rows = N;
    int cols = M;

    if (argv[0] != NULL) {
        rows = atoi(argv[1]);
    }
    if (argv[1] != NULL) {
        cols = atoi(argv[2]);
    }

    double **matrix_a = (double **)malloc(rows * sizeof(double *));
    double **matrix_b = (double **)malloc(rows * sizeof(double *));
    double **res = (double **)malloc(rows * sizeof(double *));
    for (int i = 0; i < rows; i++) {
        matrix_a[i] = (double *)malloc(cols * sizeof(double));
        matrix_b[i] = (double *)malloc(cols * sizeof(double));
        res[i] = (double *)malloc(cols * sizeof(double));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix_a[i][j] = rand_double();
            matrix_b[i][j] = rand_double();
        }
    }

    printf("#define N %d\n", rows);
    printf("#define M %d\n\n", cols);
    printf("int matrix_a[N][M] = {\n");
    for (int j = 0; j < rows; j++) {
        printf("    {");
        for (int k = 0; k < cols; k++) {
            printf("%f", matrix_a[j][k]);
            if (k < cols - 1) {
                printf(", ");
            }
        }
        printf("},\n");
    }
    printf("};\n\n");

    printf("int matrix_b[N][M] = {\n");
    for (int j = 0; j < rows; j++) {
        printf("    {");
        for (int k = 0; k < cols; k++) {
            printf("%f", matrix_b[j][k]);
            if (k < cols - 1) {
                printf(", ");
            }
        }
        printf("},\n");
    }
    printf("};\n\n");

    for (int i = 0; i < rows; i++) {
        free(matrix_a[i]);
        free(matrix_b[i]);
    }
    free(matrix_a);
    free(matrix_b);

    return 0;
}
