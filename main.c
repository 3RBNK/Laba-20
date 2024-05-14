#include "algorithms/task/1_fill_matrix.h"
#include "algorithms/task/2_game_life.h"
#include "algorithms/task/3_median_filter.h"
#include "algorithms/task/4_get_domains.h"
#include "algorithms/task/5_get_submatrix.h"
#include "algorithms/task/6_generate_nums.h"
#include "algorithms/task/7_binary_tree.h"
#include "algorithms/task/8_rearrange_string.h"
#include "algorithms/task/11_auto_completion.h"


void test() {
    test_fill_matrix();
    test_game_life();
    test_median_filter();
    test_get_domains();
    test_get_submatrix();
    test_generate_nums();
    test_generate_tree();
    test_rearrange_string();
    test_auto_completion();
}


int main() {
    test();

    return 0;
}
