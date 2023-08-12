#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define M 10

int random_int() {
    return 1 + rand() % (9999 - 0 + 1);
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

    int **matrix_a = (int **)malloc(rows * sizeof(int *));
    int **matrix_b = (int **)malloc(rows * sizeof(int *));
    int **res = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix_a[i] = (int *)malloc(cols * sizeof(int));
        matrix_b[i] = (int *)malloc(cols * sizeof(int));
        res[i] = (int *)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix_a[i][j] = random_int();
            matrix_b[i][j] = random_int();
        }
    }

    printf("#define N %d\n", rows);
    printf("#define M %d\n\n", cols);
    printf("int matrix_a[N][M] = {\n");
    for (int j = 0; j < rows; j++) {
        printf("    {");
        for (int k = 0; k < cols; k++) {
            printf("%d", matrix_a[j][k]);
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
            printf("%d", matrix_b[j][k]);
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
