//
// Created by lenovo on 08.05.24.
//

#ifndef CODE_3_MEDIAN_FILTER_H
#define CODE_3_MEDIAN_FILTER_H

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#include "../../data_structures/matrix/matrix.h"


int cmp(const void* a, const void* b) {
    return *(const unsigned int *) a - *(const unsigned int *) b;
}


int get_median_in_area(matrix* m, const int i, const int j, const int filter) {
    int *temp = (int *) malloc((filter * filter - 1) * sizeof(int));

    int size = 0;
    for (int row_i = i - filter; row_i <= i + filter; row_i++)
        for (int col_j = j - filter; col_j <= j + filter; col_j++)
            if (row_i != i && col_j != j) {
                temp[size] = m->values[row_i][col_j];
                size++;
            }

    qsort(temp, size, sizeof(int), cmp);

    int result = (temp[size / 2 - 1] + temp[size / 2]) / 2;

    free(temp);

    return result;
}


void median_filter(const char* filename) {
    FILE* file = fopen(filename, "rb");

    int n, filter;
    fread(&n, sizeof(int), 1, file);
    fread(&filter, sizeof(int), 1, file);

    filter /= 2;

    matrix m = get_mem_matrix(n, n);
    for (int i = filter; i < n; i++)
        for (int j = filter; j < n; j++)
            fread(&m.values[i][j], sizeof(int), 1, file);

    for (int i = 0; i < n - filter; i++)
        for (int j = 0; j < n - filter; j++)
            m.values[i][j] = get_median_in_area(&m, i, j, filter);

    fclose(file);


    file = fopen(filename, "wb");

    for (int i = filter; i < n; i++)
        for (int j = filter; j < n; j++)
            fwrite(&m.values[i][j], sizeof(int), 1, file);

    free_mem_matrix(&m);

    fclose(file);
}

#endif //CODE_3_MEDIAN_FILTER_H
