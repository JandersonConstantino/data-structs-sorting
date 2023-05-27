//
// Created by Janderson on 5/27/2023.
//

#ifndef DATA_STRUCT_SORT_UTIL_H
#define DATA_STRUCT_SORT_UTIL_H

#include <string>
#include "../core/structs.h"

class util {
public:
    static void change_element_position(int* a , int* b);
    static Array split_string_by_comma(std::string value);
    static void output_result(std::string title, Array array);
};

#endif //DATA_STRUCT_SORT_UTIL_H
