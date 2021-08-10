#include "lib0222.h"

void mat_mul(int n, int m, int k, int mat1[][1000], int mat2[][1000],
             int result[][1000]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            int x = 0;
            for (int kk = 0; kk < m; kk++) x += mat1[i][kk] * mat2[kk][j];
            result[i][j] = x;
        }
    }
}
