//
// Created by lenovo on 13.05.24.
//

#ifndef CODE_11_AUTO_COMPLETION_H
#define CODE_11_AUTO_COMPLETION_H

#include <stdio.h>
#include <stdlib.h>

#include "../../data_structures/string/string_.h"

#define MAX_REQUEST 128


typedef struct request {
    word_descriptor sequence;
    int position;
} request;


typedef struct requests {
    request request[MAX_REQUEST];
    size_t size;
} requests;


void free_requests(requests* rs) {
    for (int i = 0; i < rs->size; i++) {
        rs->request[i].position = 0;
        rs->request[i].sequence.begin = NULL;
        rs->request[i].sequence.end = NULL;
    }

    rs->size = 0;
}


void _print_request(request* r) {
    printf("%d ", r->position);
    print_word(r->sequence);
}


void auto_completion(const char* filename) {
    FILE* file = fopen(filename, "r");

    long long int n, q;
    fscanf(file, "%lld", &n);
    fscanf(file, "%lld", &q);

    _bag.size = 0;
    char* begin = _string_buffer;
    for (int i = 0; i < n; i++) {
        fscanf(file, "%s", begin);
        get_word_without_space(begin, &_bag.words[_bag.size]);
        begin = _bag.words[_bag.size].end + 1;
        _bag.size++;
    }

    requests rs = {.size = 0};
    for (int i = 0; i < q; i++) {
        fscanf(file, "%d", &rs.request[i].position);
        fscanf(file, "%s", begin);
        get_word_without_space(begin, &rs.request[i].sequence);
        begin = rs.request[i].sequence.end + 1;
        rs.size++;
    }

    fclose(file);


    file = fopen(filename, "w");

    for (int i = 0; i < q; i++) {
        int amount = 0;
        for (int j = 0; j < n; j++) {
            if (is_sub_word(rs.request[i].sequence, _bag.words[j])) {
                amount++;

                if (amount == rs.request[i].position)
                    fprintf(file,"%d\n", j + 1);
            }
        }
        if (amount < rs.request[i].position)
            fprintf(file,"-1\n");
    }

    fclose(file);

    free_string(_string_buffer);
    free_bag(&_bag);
    free_requests(&rs);
}

#endif //CODE_11_AUTO_COMPLETION_H
