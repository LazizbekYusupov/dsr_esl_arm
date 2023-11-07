#include <stdio.h>
#include <stdlib.h>
#include "3d_vector_lib.h"

int main(void)
{
    size_t output_dot_product = 0;
    op_result_t op_feedback = NULL;

    three_d_vector_t vector_output;
    three_d_vector_t vector_1;
    three_d_vector_t vector_2;

    vector_init(&vector_output);
    vector_init(&vector_1);
    vector_init(&vector_2);

    vector_assign(&vector_1, 1, 2, 3);
    vector_assign(&vector_2, 4, 5, 7);

    //print two vectors
    printf("vector_1 = (%zd, %zd, %zd);\n", vector_1.i, vector_1.j, vector_1.k);
    printf("vector_2 = (%zd, %zd, %zd);\n", vector_2.i, vector_2.j, vector_2.k);

    //sum
    op_feedback = vector_sum(&vector_output, &vector_1, &vector_2);

    if (op_feedback == SUCCESS)
    {
        printf("vector_output = vector_1 + vector_2 = (%zd, %zd, %zd);\n", vector_output.i, vector_output.j, vector_output.k);
        vector_init(&vector_output);
    }
    else
    {
        printf("Something went wrong!\n");
    }

    op_feedback = NULL;

    //subtract
    op_feedback = vector_sub(&vector_output, &vector_1, &vector_2);

    if (op_feedback == SUCCESS)
    {
        printf("vector_output = vector_1 - vector_2 = (%zd, %zd, %zd);\n", vector_output.i, vector_output.j, vector_output.k);
        vector_init(&vector_output);
    }
    else
    {
        printf("Something went wrong!\n");
    }

    op_feedback = NULL;

    //dot
    op_feedback = vector_dot_product(&output_dot_product, &vector_1, &vector_2);

    if (op_feedback == SUCCESS)
    {
        printf("output_dot_product = vector_1 * vector_2 = %zd;\n", output_dot_product);
    }
    else
    {
        printf("Something went wrong!\n");
    }

    op_feedback = NULL;

    //cross
    op_feedback = vector_cross_product(&vector_output, &vector_1, &vector_2);

    if (op_feedback == SUCCESS)
    {
        printf("vector_output = vector_1 x vector_2 = (%zd, %zd, %zd);\n", vector_output.i, vector_output.j, vector_output.k);
        vector_init(&vector_output);
    }
    else
    {
        printf("Something went wrong!\n");
    }

    op_feedback = NULL;

    return 0;
}