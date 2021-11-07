#include <stdio.h>
#include <malloc.h>

#include "./src/simple_polynomial_regression/simple_polynomial_regression.h"

int main() {
    int degree = 2, coef_size = degree+1, arr_size = 5;
    float x_pred = 6;
    float **arr = (float **) malloc(arr_size* sizeof (float *));

    arr[0] = (float *) malloc(2 * sizeof (float));
    arr[1] = (float *) malloc(2 * sizeof (float));
    arr[2] = (float *) malloc(2 * sizeof (float));
    arr[3] = (float *) malloc(2 * sizeof (float));
    arr[4] = (float *) malloc(2 * sizeof (float));

    arr[0][0] =  (float) 1;
    arr[0][1] = (float) 1;
    arr[1][0] =  (float) 2;
    arr[1][1] = (float) 4;
    arr[2][0] =  (float) 3;
    arr[2][1] = (float) 9;
    arr[3][0] =  (float) 4;
    arr[3][1] = (float) 16;
    arr[4][0] =  (float) 5;
    arr[4][1] = (float) 25;



    float *coef = find_coefficients(arr, degree, arr_size);
    float pred = predict(coef_size, coef, x_pred);
    printf("\nYour predicted value is: %.2f", pred);
    return 0;
}
