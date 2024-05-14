#include <stdio.h>

#include "algorithms/task/1_fill_matrix.h"
#include "algorithms/task/2_game_life.h"
#include "algorithms/task/3_median_filter.h"
#include "algorithms/task/4_get_domains.h"
#include "algorithms/task/5_get_submatrix.h"
#include "algorithms/task/6_generate_nums.h"


void test() {
    test_fill_matrix();
    test_game_life();
    test_median_filter();
    test_get_domains();
    test_get_submatrix();
    test_generate_nums();
}


int main() {
    test();

    return 0;
}
