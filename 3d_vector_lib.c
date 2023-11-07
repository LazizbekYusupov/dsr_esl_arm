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
    size_t v_i = 0;
    size_t v_j = 0;
    size_t v_k = 0;
    op_result_t feedback = NULL;

    v_i = vector_1->j * vector_2->k - vector_1->k * vector_2->j;
    v_j = - (vector_1->i * vector_2->k - vector_1->k * vector_2->i);
    v_k = vector_1->i * vector_2->j - vector_1->j * vector_2->i;

    feedback = vector_assign(output_vector, v_i, v_j, v_k);

    if (feedback == SUCCESS)
    {
        return SUCCESS;
    }
    else
    {
        return ERROR;
    }
}

three_d_vector_t vector_sum(three_d_vector_t* output_vector,
                            three_d_vector_t* vector_1, 
                            three_d_vector_t* vector_2)
{
    size_t v_i = 0;
    size_t v_j = 0;
    size_t v_k = 0;
    op_result_t feedback = NULL;

    v_i = vector_1->i + vector_2->i;
    v_j = vector_1->j + vector_2->j;
    v_k = vector_1->k + vector_2->k;

    feedback = vector_assign(output_vector, v_i, v_j, v_k);

    if (feedback == SUCCESS)
    {
        return SUCCESS;
    }
    else
    {
        return ERROR;
    }
}

three_d_vector_t vector_sub(three_d_vector_t* output_vector, 
                            three_d_vector_t* vector_1, 
                            three_d_vector_t* vector_2)
{
    size_t v_i = 0;
    size_t v_j = 0;
    size_t v_k = 0;
    op_result_t feedback = NULL;

    v_i = vector_1->i - vector_2->i;
    v_j = vector_1->j - vector_2->j;
    v_k = vector_1->k - vector_2->k;

    feedback = vector_assign(output_vector, v_i, v_j, v_k);

    if (feedback == SUCCESS)
    {
        return SUCCESS;
    }
    else
    {
        return ERROR;
    }
}