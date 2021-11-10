#include <stdio.h>
#include "./src/simple_polynomial_regression/simple_polynomial_regression.h"
#include "src/csv_reader/csv_reader.h"

float polynomial_predict(int n, int degree, float arr[n][2], float x_pred);

int main() {
    int degree = 2;
    float x_pred = 6;
    Data_ dt = read_csv("csv_5534.csv");
    float pred = polynomial_predict(dt.i, degree, dt.dot, x_pred);
    printf("Your predicted value is: %.2f", pred);
    return 0;
}

float polynomial_predict(int n, int degree, float arr[n][2], float x_pred){
    int coef_size = degree+1;
    float coef[coef_size];
    find_coefficients(n, arr, degree, coef);
    return predict(coef_size, coef, x_pred);
}
