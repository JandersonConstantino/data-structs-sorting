//
// Created by Janderson on 5/27/2023.
//

#include "user_input.h"
#include <iostream>

char user_input::user_input_menu_opt() {
    char input;

    std::cout << "Please, choose a option:\n";
    std::cout << "1 - Bubble sort\n";
    std::cout << "0 - Exit\n";
    std::cout << "\nEnter your option: ";
    std::cin >> input;

    return input;
}