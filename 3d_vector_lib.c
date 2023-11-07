#include <stdio.h>
#include <stdlib.h>
#include "3d_vector_lib.h"

op_result_t vector_init(three_d_vector_t* input_vector)
{
    input_vector->i = 0;
    input_vector->j = 0;
    input_vector->k = 0;

    if(    input_vector->i == 0
        && input_vector->j == 0
        && input_vector->k == 0)
    {
        return SUCCESS;
    }

    return ERROR;    
}

op_result_t vector_assign(three_d_vector_t* input_vector, size_t i, size_t j, size_t k)
{
    input_vector->i = i;
    input_vector->j = j;
    input_vector->k = k;

    if(    input_vector->i == i
        && input_vector->j == j
        && input_vector->k == k)
    {
        return SUCCESS;
    }

    return ERROR; 
}

op_result_t vector_dot_product(size_t*           output,
                               three_d_vector_t* vector_1,
                               three_d_vector_t* vector_2)
{
    if(output == NULL || vector_1 == NULL || vector_2 == NULL)
    {
        return ERROR;
    }

    (*output) = vector_1->i * vector_2->i + 
                vector_1->j * vector_2->j + 
                vector_1->k * vector_2->k;

    return SUCCESS;
}

three_d_vector_t vector_cross_product(three_d_vector_t* output_vector,
                                      three_d_vector_t* vector_1, 
                                      three_d_vector_t* vector_2)
{


    return SUCCESS;
}

three_d_vector_t vector_sum(three_d_vector_t* output_vector,
                            three_d_vector_t* vector_1, 
                            three_d_vector_t* vector_2)
{


    return SUCCESS;
}

three_d_vector_t vector_sub(three_d_vector_t* output_vector, 
                            three_d_vector_t* vector_1, 
                            three_d_vector_t* vector_2)
{
    return SUCCESS;
}