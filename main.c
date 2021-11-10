#include <stdio.h>
#include <stdlib.h>
#include "./src/simple_polynomial_regression/simple_polynomial_regression.h"
#include "src/csv_reader/csv_reader.h"
#include <math.h>

float polynomial_predict(int n, int degree, float arr[n][2], float x_pred);

void test_values(int n, int degree, float arr[n][2]);

int main() {
    int degree, average;
    float x_pred;
    char file_name[12];


    printf("Please, write the name of the file to get data: ");
    scanf("%s", file_name);

    Data_ dt = read_csv(file_name);

    printf("Select your degree: ");
    scanf("%i", &degree);


    printf("Do you want to test average error, or get the result?:\n");
    printf("[0] Average Error of coefficients.\n");
    printf("[1] Get the predicted Result.\n");
    scanf("%i", &average);


    if (average == 0) {
        test_values(dt.i, degree, dt.dot);
    } else {
        printf("Now write your X value:\n");
        scanf("%f", &x_pred);
        float pred = polynomial_predict(dt.i, degree, dt.dot, x_pred);
        printf("Your predicted value is: %.2f", pred);
    }
    return 0;
}

float polynomial_predict(int n, int degree, float arr[n][2], float x_pred) {
    int coef_size = degree + 1;
    float coef[coef_size];
    find_coefficients(n, arr, degree, coef);
    return predict(coef_size, coef, x_pred);
}

void test_values(int n, int degree, float arr[n][2]) {
    int coef_size = degree + 1;
    float coefficients[coef_size], results[n], real_x = 0, predicted_y = 0, real_y = 0, sum = 0;

    find_coefficients(n, arr, degree, coefficients);

    for (int i = 0; i < n; ++i) {
        real_x = arr[i][0];
        real_y = arr[i][1];
        predicted_y = predict(coef_size, coefficients, real_x);

        sum += (float) fabs(real_y) - (float) fabs(predicted_y);
        results[i] = sum;
    }
    printf("Your average Error is: %.2f", (float) fabs(sum / (float) n));
}