//
// Created by Janderson on 5/27/2023.
//

#include "sort.h"
#include "../util/util.h"

void sort::insertion_sort(Array array) {
    for (int i = 1; i < array.size; i++) {
        int key = array.items[i];
        int j = i - 1;

        while (j >= 0 && array.items[j] > key) {
            util::change_element_position(&array.items[j + 1], &array.items[j]);
            j = j - 1;
        }
    }

    util::output_result("===== Insertion Sort =====", array);
}
