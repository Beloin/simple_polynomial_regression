//
// Created by beloin on 01/11/2021.
//

#include <malloc.h>
#include "gauss_method.h"

void join_mx(int n, float a[n][n], float b[1][n], float inject_mx[n][n+1]);

float *gauss_method(int arr_size, float a[arr_size][arr_size], float b[1][arr_size]){
    float mx[arr_size][arr_size+1], results[arr_size];
    join_mx(arr_size, a, b, mx);
    gauss_method_unique_mx(arr_size, mx, results);
    return results;
}

void join_mx(int n, float a[n][n], float b[1][n], float inject_mx[n][n+1]){
    for (int i = 0; i < n; ++i) {
        for (int ii = 0; ii < n+1; ++ii) {
            if (ii == n) inject_mx[i][ii] = b[1][i];
            else inject_mx[i][ii] = a[i][ii];
        }
    }
}

void gauss_method_unique_mx(int n, float mx[n][n+1], float inject[n]){
    float ratio;
    int i, ii, iii;
    for (i = 0; i < n; ++i) {
        for (ii = i+1; ii < n; ++ii) {
            ratio = mx[ii][i]/mx[i][i];

            for (iii=0; iii<n+1; ++iii){
                mx[ii][iii] = mx[ii][iii] - (ratio * mx[i][iii]);
            }
        }
    }
    inject[n-1] = mx[n-1][n]/mx[n-1][n-1];
    for (i = n-2; i > -1; --i) {
        inject[i] = mx[i][n];
        for (ii = i+1; ii < n ; ++ii) {
            inject[i] = inject[i] - mx[i][ii] * inject[ii];
        }
        inject[i] = inject[i] / mx[i][ii];
    }
}

