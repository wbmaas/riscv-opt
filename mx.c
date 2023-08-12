#include "m-512x512.h"

int main() {
    int matrix_res[N][M] = {0};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matrix_res[i][j] = 0;
            for (int k = 0; k < N; k++) {
                matrix_res[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }

    return 0;
}
