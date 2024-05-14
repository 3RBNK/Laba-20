#include <stdio.h>

#include "algorithms/task/1_fill_matrix.h"
#include "algorithms/task/2_game_life.h"
#include "algorithms/task/3_median_filter.h"
#include "algorithms/task/4_get_domains.h"


void test() {
    test_fill_matrix();
    test_game_life();
    test_median_filter();
    test_get_domains();
}


int main() {
    test();

    return 0;
}
