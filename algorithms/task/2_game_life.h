//
// Created by Kirill on 21.04.2024.
//

#ifndef CODE_2_GAME_LIFE_H
#define CODE_2_GAME_LIFE_H

#include <stdio.h>
#include <stdbool.h>
#include "../../data_structures/matrix/matrix.h"


bool is_point_alive(matrix *m, int i, int j) {
    bool is_alive = m->values[i][j];

    int left_i = i > 0 ? i - 1 : i;
    int right_i = i < m->n_rows - 1 ? i + 1 : i;
    int left_j = j > 0 ? j - 1 : j;
    int right_j = j < m->n_cols - 1 ? j + 1 : j;

    int amount_units = 0;

    for (int row_i = left_i; row_i <= right_i; row_i++)
        for (int col_j = left_j; col_j <= right_j; col_j++)
            if (row_i != i && col_j != j && m->values[i][j])
                amount_units++;

    if (is_alive && amount_units < 2) {
        return false;
    } else if (is_alive && (amount_units == 2 || amount_units == 3)) {
        return true;
    } else if (is_alive && amount_units > 3) {
        return false;
    } else if (!is_alive && amount_units == 3) {
        return true;
    }
}


void game_life(const char* filename) {
    FILE* file = fopen(filename, "rb");
    int m, n;
    fread(&m, sizeof(int), 1, file);
    fread(&n, sizeof(int), 1, file);

    matrix mat = get_mem_matrix(m, n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            fread(&mat.values[i][j], sizeof(int), 1, file);

    matrix res_mat = get_mem_matrix(m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            res_mat.values[i][j] = (int) is_point_alive(&mat, i, j);

    fclose(file);


    file = fopen(filename, "wb");

    fwrite(&m, sizeof(int), 1, file);
    fwrite(&n, sizeof(int), 1, file);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            fwrite(&res_mat.values[i][j], sizeof(int), 1, file);

    free_mem_matrix(&mat);
    free_mem_matrix(&res_mat);

    fclose(file);
}

#endif //CODE_2_GAME_LIFE_H
