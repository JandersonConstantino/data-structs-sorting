//
// Created by Janderson on 5/27/2023.
//

#include "util.h"

void util::change_element_position(int* a , int* b) {
    int temp;
    temp = *a;

    *a = *b;
    *b = temp;
}