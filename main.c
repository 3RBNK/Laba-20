#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#include "algorithms/task/7_binary_tree.h"


int main() {
    vector nums = createVector(30);

    int num[] = {3, 2, 1, 6, 0, 5};
    int n = 6;

    for (int i = 0; i < n; i++)
        pushBack(&nums, num[i]);

    vector result = generate_tree(&nums);

    print_vector(&result);

    return 0;
}
