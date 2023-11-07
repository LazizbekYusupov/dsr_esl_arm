#include <stdio.h>
#include <stdlib.h>
#include "3d_vector_lib.h"

int main(void)
{
    size_t output_dot_product = 0;
    three_d_vector_t vector_output;
    three_d_vector_t vector_1;
    three_d_vector_t vector_2;

    vector_init(&vector_output);
    vector_init(&vector_1);
    vector_init(&vector_2);

    vector_assign(&vector_1, 1, 2, 3);
    vector_assign(&vector_2, 4, 5, 7);

    return 0;
}