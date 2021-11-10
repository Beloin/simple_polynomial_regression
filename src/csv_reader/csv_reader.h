//
// Created by beloin on 11/10/21.
//

#ifndef POLINOMIAL_REGRESSION_CSV_READER_H
#define POLINOMIAL_REGRESSION_CSV_READER_H

#define TOTAL_BUFFER 500

typedef struct {
    int i;
    float dot[TOTAL_BUFFER][2];
} Data_;
Data_ read_csv(char file_name[]);


#endif //POLINOMIAL_REGRESSION_CSV_READER_H
