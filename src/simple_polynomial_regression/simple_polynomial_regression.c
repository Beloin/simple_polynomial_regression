//
// Created by beloin on 01/11/2021.
//
#include <malloc.h>
#include "simple_polynomial_regression.h"
#include "../gauss/gauss_method.h"
#include "../utils/utils.h"

float elevate_and_sum_all(const float x[], int size, int degree);
float sum_y(const float y[], const float x[], int size, int x_degree);
void find_x_y(int arr_size, float **arr, float inject_matrix[2][arr_size]);


float* find_coefficients(float **mx, int degree, int arr_size){
    float *x, *y, res[2][arr_size];
    find_x_y(arr_size, mx, res);
    x = res[0];
    y = res[1];
    return calculate_coef(x, y, degree, arr_size);
}

float* calculate_coef(float x[], float y[], int degree, int arr_size){
    int quantity = degree+1, i, ii, el_by;
    float x_result[quantity][quantity], y_result[quantity][quantity];
    for (i=0; i<quantity; i++){
        for (ii=0; ii < quantity; ii++){
            el_by= i + ii;
            x_result[i][ii] = elevate_and_sum_all(x, arr_size, el_by);
            el_by = i;
            y_result[i][ii] = sum_y(y, x, arr_size, el_by);
        }
    }
    print_matrix(quantity, quantity, x_result);
    x_result[0][0] = (float) arr_size;
    return gauss_method(quantity, x_result, y_result);
}

float predict(int arr_size, float coefficients[arr_size], float x_value){
    int i;
    float a, res = 0;
    for (i = 0; i < arr_size; ++i) {
        a = coefficients[i];
        res += a * elevate_by(x_value, i);
    }
    return res;
}

/*
 * Example:
 * [ [1,2], [2, 4] ] -> x = [1, 2]; y = [2, 4]
 */
void find_x_y(int arr_size, float **arr, float inject_matrix[2][arr_size]){
    int i;
    float x[arr_size], y[arr_size];
    for (i = 0; i < arr_size; i++){
        float *currentArray = arr[i];
        currentArray[0];
        x[i] = currentArray[0];
        y[i] = currentArray[1];
    }
    for (int j = 0; j < arr_size; ++j) {
        inject_matrix[0][j] = x[j];
        inject_matrix[1][j] = y[j];
    }
}


float sum_y(const float y[], const float x[], int size, int x_degree){
    float res = 0, temp_x, temp_y;
    for (int i = 0; i < size; ++i) {
        temp_x = x[i];
        temp_y = y[i];
        temp_x = elevate_by(temp_x, x_degree);
        res += temp_x * temp_y;
    }
    return res;
}

float elevate_and_sum_all(const float x[], int size, int degree){
    float res = 0, temp;
    for (int i = 0; i < size; ++i) {
        temp = x[i];
        res += elevate_by(temp, degree);
    }
    return res;
}

