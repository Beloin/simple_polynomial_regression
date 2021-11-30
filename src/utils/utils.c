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
    printf("{ ");
    for (int i = 0; i < arr_size; ++i) {
        if (i ==0) printf("%.2f", i, arr[i]);
        else printf(", %.2f", i, arr[i]);
    }
    printf(" }");
}

void print_matrix(int i, int j, float *arr[]){
    printf("{ \n");
    for (int k=0; k < i; k++){
        float *mat1 = arr[k];
        printf("  ");
        print_arr(mat1, j);
        if (k < i-1) printf(",\n");
    }
    printf("\n");
    printf("}");
}
