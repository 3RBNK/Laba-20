//
// Created by lenovo on 11.05.24.
//

#ifndef CODE_8_REARRANGE_STRING_H
#define CODE_8_REARRANGE_STRING_H

#include <stdio.h>


void rearrange_string(const char* s, char* res, const int a[], const int n) {
    for (int i = 0; i < n; i++)
        res[i] = s[a[i]];
}

#endif //CODE_8_REARRANGE_STRING_H
