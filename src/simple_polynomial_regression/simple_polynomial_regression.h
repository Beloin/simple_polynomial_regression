//
// Created by beloin on 01/11/2021.
//

#ifndef SIMPLE_POLYNOMIAL_REGRESSION_H
#define SIMPLE_POLYNOMIAL_REGRESSION_H

/**
 * Use this function to find coefficients for the X -> Y polynomial regression.
 * @param mx Matrix ixj, being i>0 and j=2
 */
float* find_coefficients(float **mx, int degree, int arr_size);
float* calculate_coef(float x[], float y[], int degree, int arr_size);
/**
 * Predict using coefficients and a new x_value
 * @param coefficients
 * @param x_value
 * @return
 */
float predict(float coefficients[], float x_value, int arr_size);

#endif //SIMPLE_POLYNOMIAL_REGRESSION_H
