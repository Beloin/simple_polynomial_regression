//
// Created by beloin on 01/11/2021.
//

#include <malloc.h>
#include "gauss_method.h"

float *gauss_method(int arr_size, float a[arr_size][arr_size], float b[1][arr_size]){
    float *arr = (float *) malloc(3 * sizeof (float));
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;
    return arr;
}

float *gauss_method_unique_mx(float *mx[]){
}
