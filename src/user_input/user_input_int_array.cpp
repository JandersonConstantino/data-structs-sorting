//
// Created by Janderson on 5/27/2023.
//

#include "user_input.h"
#include <iostream>
#include "../util/util.h"

Array user_input::user_input_int_array() {
    std::string input;

    std::cout << "Please, type an array of int separated by comma: ";
    std::cin >> input;

    return util::split_string_by_comma(input);
}
