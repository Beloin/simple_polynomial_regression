//
// Created by beloin on 11/10/21.
//

#include "csv_reader.h"

#include <stdio.h>
#include <string.h>

Data_ read_csv(char file_name[]) {
    FILE *file;
    Data_ data;
    int count = 0;

    file = fopen(file_name, "r");
    if (file == NULL) {
        perror("fopen");
    }

    while (fscanf(file, " %f,%f", &data.dot[count][0], &data.dot[count][1]) == 2) {
        count++;
    }
    data.i = count;
    return data;
}
