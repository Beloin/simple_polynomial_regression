//
// Created by beloin on 11/10/21.
//

#ifndef POLINOMIAL_REGRESSION_CSV_READER_H
#define POLINOMIAL_REGRESSION_CSV_READER_H

#define TOTAL_BUFFER 500

typedef struct {
    // Matrix current size.
    int i;
    // Matrix
    float dot[TOTAL_BUFFER][2];
} Data_;
/**
 * Read CSV and inject into Data_ struct.
 *
 * File must be in format "%f,%f" for each row.
 * @param file_name
 * @return
 */
Data_ read_csv(char file_name[]);


#endif //POLINOMIAL_REGRESSION_CSV_READER_H
