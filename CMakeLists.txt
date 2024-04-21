cmake_minimum_required(VERSION 3.26)
project(code C)

set(CMAKE_C_STANDARD 11)

add_executable(code main.c
        data_structures/matrix/matrix.c
        data_structures/matrix/matrix.h
        algorithms/task/1_fill_matrix.h
        algorithms/task/2_game_life.h)
