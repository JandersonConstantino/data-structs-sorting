//
// Created by Janderson on 5/27/2023.
//

#include "sort.h"
#include "../util/util.h"


void sort::selection_sort(Array array) {
    int min;

    for (int i = 0; i < array.size; i++) {
        min = i;

        for (int j = i + 1; j < array.size; j++) {
            if (array.items[j] < array.items[min]) {
                min = j;
            }
        }

        if (i != min) {
            util::change_element_position(&array.items[i], &array.items[min]);
        }
    }

    util::output_result("===== Selection Sort =====", array);
}