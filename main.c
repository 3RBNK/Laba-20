#include <stdio.h>
#include <stdbool.h>

#include "algorithms/task/8_rearrange_string.h"


int main() {
    char s[] = "abc";
    char res[100] = "";

    int num[] = {0, 1, 2};
    int n = 3;

    rearrange_string(s, res, num, n);

    puts(res);

    return 0;
}
