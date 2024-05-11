cmake_minimum_required(VERSION 3.26)
project(code C)

set(CMAKE_C_STANDARD 11)

add_executable(code main.c
        data_structures/matrix/matrix.c
        data_structures/matrix/matrix.h
        algorithms/task/1_fill_matrix.h
        algorithms/task/2_game_life.h
        algorithms/task/3_median_filter.h
        data_structures/vector/vector.c
        "algorithms/task/5_get_submatrix.h"
        algorithms/task/6_generate_nums.h
        algorithms/task/8_rearrange_string.h
        algorithms/task/9_filter_nums.h
)
