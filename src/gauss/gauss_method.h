//
// Created by beloin on 01/11/2021.
//
// Gauss Method Header.
// Here we have all public functions that can be called to calculate the linear system.
//

#ifndef POLINOMIAL_REGRESSION_GAUSS_METHOD_H
#define POLINOMIAL_REGRESSION_GAUSS_METHOD_H

/**
 * Calculates the result of the linear system by given a and b, resulting into the augmented matrix.
 * @param arr_size
 * @param a
 * @param b
 * @param buffer where is injected the results of the linear system.
 */
void gauss_method(int arr_size, float a[arr_size][arr_size], float b[arr_size][1], float buffer[arr_size+1]);
/**
 * Calculates the result of the linear system given an unique matrix.
 * @param n
 * @param mx
 * @param inject
 */
void gauss_method_unique_mx(int n, float mx[n][n+1], float inject[n]);

#endif //POLINOMIAL_REGRESSION_GAUSS_METHOD_H
