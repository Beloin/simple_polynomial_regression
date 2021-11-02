//
// Created by beloin on 02/11/2021.
//

#include "utils.h"

float elevate_by(float num, int by){
    if (by <= 0) return 1;
    for (int i = 0; i < by; ++i) {
        num = num * num;
    }
    return num;
}
