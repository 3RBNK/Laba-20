//
// Created by lenovo on 11.05.24.
//

#ifndef CODE_5_GET_SUBMATRIX_H
#define CODE_5_GET_SUBMATRIX_H

#include <stdio.h>
#include <stdlib.h>

#include "../../data_structures/matrix/matrix.h"


int get_submatrix(matrix mat) {
    int m = mat.n_rows;
    int n = mat.n_cols;
    int res = 0;

    for (int i = 1; i < m; i++)
        for (int j = 0; j < n; j++)
            if (mat.values[i][j])
                mat.values[i][j] += mat.values[i - 1][j];

    for (int i = 0; i < m; i++) {
        int stack[n];
        int top = -1;
        int sums[n + 1];
        sums[0] = 0;

        for (int j = 0; j < n; j++) {
            while (top != -1 && mat.values[i][stack[top]] >= mat.values[i][j])
                top--;
            if (top != -1) {
                int k = stack[top];
                sums[j + 1] = sums[k + 1] + mat.values[i][j] * (j - k);
            } else
                sums[j + 1] = mat.values[i][j] * (j + 1);
            stack[++top] = j;
        }

        for (int j = 0; j <= n; j++)
            res += sums[j];
    }
    return res;
}

#endif //CODE_5_GET_SUBMATRIX_H
