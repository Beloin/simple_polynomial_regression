//
// Created by beloin on 01/11/2021.
//
#include "simple_polynomial_regression.h"
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

float **find_x_y(float **arr);
float elevate_by(float num, int by);
float sum_all(float x[], int size);
float elevate_and_sum_all(float x[], int size, int degree);

int arr_size;

/*
 * Example:
 * [ [1,2], [2, 4] ] -> x = [1, 2]; y = [2, 4]
 *
 * For each degree
 */

float* find_coefficients(float *mx[], int degree){
    int i;
    float *x, *y, **res;
    arr_size = NELEMS(arr);
    res = find_x_y(mx);
    x = res[0];
    y = res[1];

}

float* find_coefficients_(float x[], float y[], int degree){
    int n, quantity, i, ii, el_by;
    float **x_result, **y_result, *temp;
    n = arr_size;
    quantity = degree+1;
    for (i=0; i<quantity; i++){
        for (ii=0; ii < quantity; ii++){
            el_by= i + ii;
            x_result[i][ii] = elevate_and_sum_all(x, n, el_by);
        }
    }

    x_result[0][0] = n;

}

float predict(float coefficients[], float x_value){
}

float sum_all(float x[], int size){
    float res = 0;
    for (int i = 0; i < size; ++i) {
        res += x[i];
    }
    return res;
}

float elevate_and_sum_all(float x[], int size, int degree){
    float res = 0, temp;
    for (int i = 0; i < size; ++i) {
        temp = x[i];
        res += elevate_by(temp, degree);
    }
    return res;
}



float **find_x_y(float **arr){
    int i;
    float *x, *y;
    for (i = 0; i<arr_size; i++){
        float *currentArray = arr[i];
        x[i] = currentArray[0];
        y[i] = currentArray[1];
    }
    float **ret_arr = {x, y};
    return ret_arr;
}