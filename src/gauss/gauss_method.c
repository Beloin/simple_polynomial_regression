//
// Created by beloin on 01/11/2021.
//

#include <malloc.h>
#include "gauss_method.h"

float *gauss_method(int col_size, int row_size,  float a[col_size][row_size], float b[col_size][row_size]){
    float *arr = (float *) malloc(3 * sizeof (float));
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;
    return arr;
}

float *gauss_method_unique_mx(float *mx[]){
}
