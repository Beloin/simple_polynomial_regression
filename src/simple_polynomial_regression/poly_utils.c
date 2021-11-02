//
// Created by beloin on 02/11/2021.
//

float elevate_by(float num, int by);
float elevate_and_sum_all(const float x[], int size, int degree);
float sum_y(const float y[], const float x[], int size, int x_degree);


float sum_y(const float y[], const float x[], int size, int x_degree){
    float res = 0, temp_x, temp_y;
    for (int i = 0; i < size; ++i) {
        temp_x = x[i];
        temp_y = y[i];
        temp_x = elevate_by(temp_x, x_degree);
        res += temp_x * temp_y;
    }
    return res;
}

float elevate_and_sum_all(const float x[], int size, int degree){
    float res = 0, temp;
    for (int i = 0; i < size; ++i) {
        temp = x[i];
        res += elevate_by(temp, degree);
    }
    return res;
}

float elevate_by(float num, int by){
    if (by <= 0) return 1;
    for (int i = 0; i < by; ++i) {
        num = num * num;
    }
    return num;
}