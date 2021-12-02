//
// Created by beloin on 01/11/2021.
//
// Simple Polynomial functions, in order should always be called fist the function to
// find coefficients and then the predict function
//

#ifndef SIMPLE_POLYNOMIAL_REGRESSION_H
#define SIMPLE_POLYNOMIAL_REGRESSION_H

/**
 * Use this function to find coefficients for the X -> Y polynomial regression.
 * @param mx Matrix ixj, being i>0 and j=2
 *
 * @param buffer
 */
void find_coefficients(int arr_size, float *mx, int degree, float *buffer);
/**
 * Predict using coefficients and a new x_value
 * Function is something like: F(X) = a0 + a1X + a2*X²
 * @param coefficients [a0, a1, a2, ...]
 * @param x_value
 * @return
 */
float predict(int arr_size, const float *coefficients, float x_value);

#endif //SIMPLE_POLYNOMIAL_REGRESSION_H
