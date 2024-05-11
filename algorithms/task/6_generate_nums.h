//
// Created by lenovo on 11.05.24.
//

#ifndef CODE_6_GENERATE_NUMS_H
#define CODE_6_GENERATE_NUMS_H

#include <stdio.h>
#include <string.h>

#define ASCII_SHIFT 48


void generate_nums(const char* filename) {
    int num[] = {1,2,3,4,5,6,7,8,9};


    FILE* file = fopen(filename, "r");

    char res[10] = "";
    char s[10] = "";
    fscanf(file, "%s", s);

    fclose(file);


    unsigned int len_s = strlen(s);

    char* rec_ptr = res;
    char* read_ptr = s;
    unsigned int i_ind = 0;
    unsigned int d_ind = len_s;


    while (i_ind != d_ind) {
        printf("%d %d\n", i_ind, d_ind);
        if (*read_ptr == 'I') {
            *rec_ptr = (char) (num[i_ind] + ASCII_SHIFT);
            i_ind++;
        } else {
            *rec_ptr = (char) (num[d_ind] + ASCII_SHIFT);
            d_ind--;
        }

        read_ptr++;
        rec_ptr++;
    }

    *rec_ptr = (char) (num[i_ind] + ASCII_SHIFT);


    file = fopen(filename, "w");

    fprintf(file, "%s", res);

    fclose(file);
}

#endif //CODE_6_GENERATE_NUMS_H
