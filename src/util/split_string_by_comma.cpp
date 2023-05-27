//
// Created by Janderson on 5/27/2023.
//

#include "util.h"

int get_malloc_size(std::string value) {
    int size = 1;

    for (
            std::string::iterator iterator = value.begin();
            iterator != value.end();
            iterator++
            ) {
        if (*iterator == ',') {
            size++;
        }
    }

    return size;
}

Array util::split_string_by_comma(std::string value) {
    Array result;
    int size;
    int* items;
    std::string temp;
    int index = 0;

    size = get_malloc_size(value);
    items = (int*) malloc(size * sizeof(int));

    for (
            std::string::iterator iterator = value.begin();
            iterator != value.end();
            iterator++
    ) {
        if (*iterator != ',') {
            temp += *iterator;
        } else {
            items[index] = std::stoi(temp);
            temp = "";
            index++;
        }
    }

    items[index] = std::stoi(temp);

    result.size = size;
    result.items = items;

    return result;
}
