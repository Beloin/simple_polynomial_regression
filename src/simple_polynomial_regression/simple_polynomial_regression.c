//
// Created by beloin on 01/11/2021.
//
#include "simple_polynomial_regression.h"
#include "../gauss/gauss_method.h"
#include "../utils/utils.h"

/**
 * Specific function to sum and elevate x to inject into augmented matrix.
 * @param x
 * @param size
 * @param degree
 * @return
 */
float elevate_and_sum_all(const float x[], int size, int degree);
/**
 * Specific function to sum y values to inject into augmented matrix.
 * @param y
 * @param x
 * @param size
 * @param x_degree
 * @return value of the sum function (E(y*X^n))
 */
float sum_y(const float y[], const float x[], int size, int x_degree);
/**
 * Retrieve x and y from matrix.
 * @param arr_size
 * @param arr
 * @param inject_matrix
 */
void find_x_y(int arr_size, float **arr, float **inject_matrix);
/**
 * Private function that calculate the coefficients from x,y and degree.
 * @param x
 * @param y
 * @param degree
 * @param arr_size
 * @param buffer
 */
void calculate_coef(float x[], float y[], int degree, int arr_size, float *buffer);

void find_coefficients(int arr_size, float *mx[2], int degree, float *buffer) {
    float *x, *y, res[2][arr_size];
    find_x_y(arr_size, mx, res);
    x = res[0];
    y = res[1];
    calculate_coef(x, y, degree, arr_size, buffer);
}

void calculate_coef(float x[], float y[], int degree, int arr_size, float buffer[degree + 1]) {
    int quantity = degree+1, i, ii, elevate_by;
    float x_result[quantity][quantity], y_result[1][quantity];
    for (i=0; i<quantity; i++){
        for (ii=0; ii < quantity; ii++){
            elevate_by= i + ii;
            x_result[i][ii] = elevate_and_sum_all(x, arr_size, elevate_by);
        }
        elevate_by = i;
        y_result[0][i] = sum_y(y, x, arr_size, elevate_by);
    }
    x_result[0][0] = (float) arr_size;
    gauss_method(quantity, x_result, y_result, buffer);
}

float predict(int arr_size, float *coefficients, float x_value) {
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
 * [ [1,6], [2, 7] ] -> x = [1, 2]; y = [6, 7]
 */
void find_x_y(int arr_size, float **arr, float **inject_matrix){
    int i;
    float x[arr_size], y[arr_size], *currentArray ;
    for (i = 0; i < arr_size; i++){
        currentArray = arr[i];
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

