#pragma once

typedef enum op_result_
{
    SUCCESS = 0, //it is zero by default. But good to emphasize.
    ERROR = 1
}op_result_t;

typedef struct three_d_vector_
{
    size_t i;
    size_t j;
    size_t k;
}three_d_vector_t;

//initialize instance of a vector, accepting pointer to the 3d vector type instance
op_result_t vector_init(three_d_vector_t* input_vector);

//assign manually some values to play with
op_result_t vector_assign(three_d_vector_t* input_vector, size_t i, size_t j, size_t k);

//find dot product of the two vectors
op_result_t vector_dot_product(size_t*           output,
                               three_d_vector_t* vector_1,
                               three_d_vector_t* vector_2);

//find the cross product of the two vectors. Аccepts pointers to vectors and pours it to output vector by pointer.
op_result_t vector_cross_product(three_d_vector_t* output_vector,
                                      three_d_vector_t* vector_1, 
                                      three_d_vector_t* vector_2);

//accepts pointers to vectors and pours it to output vector by pointer.
op_result_t vector_sum(three_d_vector_t* output_vector,
                            three_d_vector_t* vector_1, 
                            three_d_vector_t* vector_2);

//accepts pointers to vectors and pours it to output vector by pointer.
op_result_t vector_sub(three_d_vector_t* output_vector, 
                            three_d_vector_t* vector_1, 
                            three_d_vector_t* vector_2);
