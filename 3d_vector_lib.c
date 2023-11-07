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

op_result_t vector_dot_product(size_t*           output,
                               three_d_vector_t* vector_1,
                               three_d_vector_t* vector_2)
{


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