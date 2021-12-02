//
// Created by beloin on 01/11/2021.
//

#include "gauss_method.h"
#include "../utils/utils.h"
#include <stdio.h>

/**
 * Joins a and b into one unique augmented matrix, being always [n][n+1]
 * @param n
 * @param mx_a
 * @param mx_b
 * @param inject_mx
 */
void join_mx(int n, float *mx_a, float *mx_b, float *inject_mx);
/**
 * Transforms matrix into Triangle format.
 * @param n
 * @param mx
 */
void convert_triangle(int n, float *mx);
/**
 * Apply back substitution to matrix.
 * @param n
 * @param mx
 * @param buffer where is injected the matrix after back substitution
 */
void back_subs(int n, float *mx, float *buffer);

void gauss_method(int arr_size, float *a, float *b, float *buffer){
    float mx[arr_size][arr_size+1];
    join_mx(arr_size, a, b, &mx[0][0]);

    print_matrix(arr_size, arr_size+1, arr_size+1, mx);

    printf("\n");
    for (int i = 0; i < 2; ++i) {
        printf(", %.2f", mx[0][i]);
    }
    printf("\n");
    gauss_method_unique_mx(arr_size, &mx[0][0], buffer);
}

void join_mx(int n, float *mx_a, float *mx_b, float *inject_mx){
    for (int i = 0; i < n; i++) {
        for (int ii = 0; ii < n+1; ii++) {
            if (ii == n)
                set_item_flattened_matrix(i, ii, n+1, inject_mx, get_from_flattened_matrix(i, 0, 1, mx_b));
//                inject_mx[i][ii] = mx_b[i][0];
            else
                set_item_flattened_matrix(i, ii, n+1, inject_mx, get_from_flattened_matrix(i, ii, n, mx_a));
//                inject_mx[i][ii] = mx_a[i][ii];
        }
    }
}

void gauss_method_unique_mx(int n, float *mx, float *inject){
    // Apply triangle to matrix.
    convert_triangle(n, mx);
    // Apply back substitution.
    back_subs(n, mx, inject);
}

void convert_triangle(int n, float *mx){
    int i, ii, iii;
    float ratio, temp;
    for( i=0;i<n;i++)
    {
        for(ii=0; ii < n; ii++)
        {
            if(ii > i)
            {
                ratio = get_from_flattened_matrix(ii, i,n+1, mx) / get_from_flattened_matrix(i, i, n+1, mx);
//                        mx[ii][i] / mx[i][i];
                for(iii=0; iii < n + 1; iii++){
                    float get1 = get_from_flattened_matrix(ii, iii, n+1, mx);
                    float get2 = get_from_flattened_matrix(i, iii, n+1, mx);
                    temp = get1 - ratio * get2;
                    set_item_flattened_matrix(ii, iii, n+1, mx, temp);
                }
//                    mx[ii][iii]= mx[ii][iii] - (ratio * mx[i][iii]);
            }
        }
    }
}

void back_subs(int n, float *mx, float *buffer){
    int i, ii;
    float sum;
    buffer[n - 1]= get_from_flattened_matrix(n-1, n, n+1, mx) / get_from_flattened_matrix(n-1, n-1, n+1, mx);
//    buffer[n - 1]= mx[n - 1][n] / mx[n - 1][n - 1];

    for(i=n-2;i>=0;i--)
    {
        sum=0;
        for(ii= i + 1; ii < n; ii++)
            sum = sum + get_from_flattened_matrix(i, ii, n+1, mx) * buffer[ii];
//            sum= sum + mx[i][ii] * buffer[ii];
        buffer[i] = (get_from_flattened_matrix(i, n,n+1, mx) - sum) / get_from_flattened_matrix(i, i, n+1, mx);
//        buffer[i] = (mx[i][n] - sum) / mx[i][i];
    }
}