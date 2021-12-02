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
void print_matrix(int i, int j, int width, float *arr);

/**
 * Gets item from flattened matrix by given `i` and `j`.
 * @param i
 * @param j
 * @param mx
 * @return
 */
float get_from_flattened_matrix(int i, int j, int width, float *mx);

/**
 * Sets item to flattened matrix by given `i` and `j`.
 * @param i
 * @param j
 * @param mx
 * @return
 */
void set_item_flattened_matrix(int i, int j, int width, float *mx, float value);

#endif //POLINOMIAL_REGRESSION_UTILS_H
