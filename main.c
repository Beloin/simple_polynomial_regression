#include <stdio.h>

#include "./src/simple_polynomial_regression/simple_polynomial_regression.h"

int main() {
    float to_predict[] = {
            {12.1, 13.5},
            {15.2, 16.7},
            {23.2, 36.7},
            {12.2, 14.7},
            {23.2, 37.7},
    };

    float *coef = find_coefficients(to_predict, 2);
    float pred = predict(coef, 15);
    printf("Your predicted value is: %.2f", coef);
    return 0;
}
