//
// Created by beloin on 01/11/2021.
//

#ifndef POLINOMIAL_REGRESSION_GAUSS_METHOD_H
#define POLINOMIAL_REGRESSION_GAUSS_METHOD_H


float *gauss_method(int col_size, int row_size,  float a[col_size][row_size], float b[col_size][row_size]);
float * gauss_method_unique_mx(float *mx[]);

#endif //POLINOMIAL_REGRESSION_GAUSS_METHOD_H
