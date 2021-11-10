//
// Created by beloin on 01/11/2021.
//

#include <malloc.h>
#include "gauss_method.h"

void join_mx(int n, float a[n][n], float b[n][1], float inject_mx[n][n+1]);
void convert_triangle(int n, float mx[][n + 1]);
void back_subs(int n, float mx[][n + 1], float buffer[]);

void gauss_method(int arr_size, float a[arr_size][arr_size], float b[arr_size][1], float buffer[arr_size+1]){
    float mx[arr_size][arr_size+1];
    join_mx(arr_size, a, b, mx);
    gauss_method_unique_mx(arr_size, mx, buffer);
}

void join_mx(int n, float a[n][n], float b[n][1], float inject_mx[n][n+1]){
    for (int i = 0; i < n; i++) {
        for (int ii = 0; ii < n+1; ii++) {
            if (ii == n) inject_mx[i][ii] = b[i][0];
            else inject_mx[i][ii] = a[i][ii];
        }
    }
}

void gauss_method_unique_mx(int n, float mx[n][n+1], float inject[n]){
    // Apply triangle to matrix.
    convert_triangle(n, mx);
    // Apply back substitution.
    back_subs(n, mx, inject);
}

void convert_triangle(int n, float mx[][n + 1]){
    int i,j,x,y,k;
    float ratio;
    for( i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                ratio= mx[j][i] / mx[i][i];
                for(k=0;k<n+1;k++)
                    mx[j][k]= mx[j][k] - (ratio * mx[i][k]);

                //print the Matrix after changed row (Intermediate forms)
                printf("Intermediate forms:\n");
                for( x=0;x<n;x++)
                {
                    for(y=0;y<n+1;y++)
                        printf("%.2f ", mx[x][y]);
                    printf("\n");
                }
                printf("\n");

            }
        }
    }
}

void back_subs(int n, float mx[][n + 1], float buffer[]){
    int i, ii;
    float sum;
    buffer[n - 1]= mx[n - 1][n] / mx[n - 1][n - 1];

    for(i=n-2;i>=0;i--)
    {
        sum=0;
        for(ii= i + 1; ii < n; ii++)
            sum= sum + mx[i][ii] * buffer[ii];
        buffer[i] = (mx[i][n] - sum) / mx[i][i];
    }
}