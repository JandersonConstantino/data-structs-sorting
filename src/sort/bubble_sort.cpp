//
// Created by Janderson on 5/27/2023.
//

#include "sort.h"
#include "../util/util.h"

void sort::bubble_sort(Array array) {
    bool has_changes;

    do {
        has_changes = false;

        for (int i = 0; i < array.size - 1; i++) {
            int next_index = i + 1;

            if (array.items[i] > array.items[next_index]) {
                has_changes = true;
                util::change_element_position(&array.items[i], &array.items[next_index]);
            }
        }
    } while (has_changes);

    util::output_result("Bubble Sort", array);
}