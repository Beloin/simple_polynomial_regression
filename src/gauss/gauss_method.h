//
// Created by beloin on 01/11/2021.
//

#ifndef POLINOMIAL_REGRESSION_GAUSS_METHOD_H
#define POLINOMIAL_REGRESSION_GAUSS_METHOD_H

/**
 * Calculates the result of the linear system by given a and b, resulting into the augmented matrix.
 * @param arr_size
 * @param a
 * @param b
 * @return
 */
float *gauss_method(int arr_size, float a[arr_size][arr_size], float b[1][arr_size]);
float *gauss_method_unique_mx(int n, float mx[n][n+1]);

#endif //POLINOMIAL_REGRESSION_GAUSS_METHOD_H
