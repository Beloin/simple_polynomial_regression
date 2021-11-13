//
// Created by beloin on 01/11/2021.
//

#ifndef SIMPLE_POLYNOMIAL_REGRESSION_H
#define SIMPLE_POLYNOMIAL_REGRESSION_H

/**
 * Use this function to find coefficients for the X -> Y polynomial regression.
 * @param mx Matrix ixj, being i>0 and j=2
 */
void find_coefficients(int arr_size, float mx[arr_size][2], int degree, float buffer[degree + 1]);
/**
 * Predict using coefficients and a new x_value
 * Function should be something like this: F(X) = a0 + a1X + a2*X²
 * @param coefficients [a0, a1, a2, ...]
 * @param x_value
 * @return
 */
float predict(int arr_size, float coefficients[arr_size], float x_value);

#endif //SIMPLE_POLYNOMIAL_REGRESSION_H
