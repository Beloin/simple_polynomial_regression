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
        if (i ==0) printf("%.2f", arr[i]);
        else printf(", %.2f", arr[i]);
    }
    printf(" }");
}

void print_matrix(int i, int j, int width, float *arr){
    printf("{ \n");
    for (int k=0; k < i; k++){
        printf("  ");
        printf("{ ");
        for (int u = 0; u < j; ++u) {
            if (u ==0) printf("%.2f", get_from_flattened_matrix(k, u, width, arr));
            else printf(", %.2f", get_from_flattened_matrix(k,u, width, arr));
        }
        printf(" }");
        if (k < i-1) printf(",\n");
    }
    printf("\n");
    printf("}");
}

float get_from_flattened_matrix(int i, int j, int width, float *mx){
    int res = (i * width) + j;
    return mx[res];
}

void set_item_flattened_matrix(int i, int j, int width, float *mx, float value){
    int res = (i * width) + j;
    mx[res] = value;
}