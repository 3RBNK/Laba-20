//
// Created by Kirill on 21.04.2024.
//

#ifndef CODE_1_FILL_MATRIX_H
#define CODE_1_FILL_MATRIX_H

#include <stdio.h>
#include "../../data_structures/matrix/matrix.h"


typedef struct coord {
    int row1;
    int col1;
    int row2;
    int col2;
} coord;


void fill_matrix(const char* filename) {
    FILE* file = fopen(filename, "rb");

    int n;
    fread(&n, sizeof(int), 1, file);

    matrix m = get_mem_matrix(n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            m.values[i][j] = 0;

    coord c;
    while(fread(&c, sizeof(coord), 1, file) == 1)
        for (int i = c.row1; i <= c.row2; i++)
            for (int j = c.col1; j <= c.col2; j++)
                m.values[i][j]++;

    fclose(file);


    file = fopen(filename, "wb");

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            fwrite(&m.values[i][j], sizeof(int), 1, file);


    free_mem_matrix(&m);
    fclose(file);
}


#endif //CODE_1_FILL_MATRIX_H
