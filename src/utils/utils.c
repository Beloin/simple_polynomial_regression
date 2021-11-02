//
// Created by beloin on 02/11/2021.
//

#include <stdio.h>
#include "utils.h"

float elevate_by(float num, int by){
    float res = 1;
    for (int i = 0; i < by; ++i) {
        res = res * num;
    }
    return res;
}

void print_arr(float *arr, int arr_size){
    for (int i = 0; i < arr_size; ++i) {
        printf("Array[%d] = %.2f", i, arr[i]);
        printf("\n");
    }
}
