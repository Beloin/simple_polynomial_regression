//
// Created by beloin on 01/11/2021.
//
#include <malloc.h>
#include "simple_polynomial_regression.h"
#include "../gauss/gauss_method.h"
#include "../utils/utils.h"

float elevate_and_sum_all(const float x[], int size, int degree);
float sum_y(const float y[], const float x[], int size, int x_degree);
float **find_x_y(float **arr, int size);

/*
 * Example:
 * [ [1,2], [2, 4] ] -> x = [1, 2]; y = [2, 4]
 *
 * For each degree
 */

float* find_coefficients(float **mx, int degree, int arr_size){
    int i;
    float *x, *y, **res;
    res = find_x_y(mx, arr_size);
    x = res[0];
    y = res[1];
    // free x and y?
    return calculate_coef(x, y, degree, arr_size);
}

float* calculate_coef(float x[], float y[], int degree, int arr_size){
    int quantity, i, ii, el_by;
    float **x_result, **y_result;
    quantity = degree+1;

    // Is needed to initialize?
    x_result = (float **) malloc(quantity * sizeof (float *));
    y_result = (float **) malloc(quantity *  sizeof (float *));

    for (i=0; i<quantity; i++){
        x_result[i] = (float *) malloc(arr_size * sizeof (float ));
        y_result[i] = (float *) malloc(arr_size * sizeof (float ));

        for (ii=0; ii < quantity; ii++){
            el_by= i + ii;
            x_result[i][ii] = elevate_and_sum_all(x, arr_size, el_by);
            el_by = i;
            y_result[i][ii] = sum_y(y, x, arr_size, el_by);
        }
    }
    x_result[0][0] = (float) arr_size;
    return gauss_method(x_result, y_result);
}

/**
 * Predict y value from X.
 *
 * Function should be something like this: F(X) = a0 + a1X + a2*X²
 * @param coefficients [a0, a1, a2, ...]
 * @param x_value
 * @return
 */
float predict(float coefficients[], float x_value, int arr_size){
    int i;
    float a, res = 0;
    for (i = 0; i < arr_size; ++i) {
        a = coefficients[i];
        res += a * elevate_by(x_value, i);
    }
    return res;
}

float **find_x_y(float **arr, int size){
    int i;
    float *x, *y;
    x = (float *) malloc(size * sizeof (float));
    y = (float *) malloc(size * sizeof (float));
    for (i = 0; i<size; i++){
        float *currentArray = arr[i];
        currentArray[0];
        x[i] = currentArray[0];
        y[i] = currentArray[1];
    }
    float **ret_arr = (float **) malloc(2 * sizeof (float));
    ret_arr[0] = x;
    ret_arr[1] = y;
    return ret_arr;
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

