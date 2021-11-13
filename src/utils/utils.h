//
// Created by beloin on 02/11/2021.
//

#ifndef POLINOMIAL_REGRESSION_UTILS_H
#define POLINOMIAL_REGRESSION_UTILS_H

/**
 * Elevate number by x value.
 * @param num
 * @param by
 * @return
 */
float elevate_by(float num, int by);
/**
 * Print an array.
 * @param arr
 * @param arr_size
 */
void print_arr(float *arr, int arr_size);
/**
 * Print matrix.
 * @param i
 * @param j
 * @param arr
 */
void print_matrix(int i, int j, float arr[i][j]);

#endif //POLINOMIAL_REGRESSION_UTILS_H
