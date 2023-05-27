//
// Created by Janderson on 5/27/2023.
//

#include "util.h"
#include <string>
#include <iostream>

void util::output_result(std::string title, Array array) {
    std::cout << "===== " << title << " =====" << std::endl;
    std::cout << "size = " << array.size << std::endl;

    for (int i = 0; i < array.size; i++) {
        std::cout << "item[" << i << "] = " << array.items[i] << std::endl;
    }
}
