#include <iostream>

#include "core/structs.h"
#include "sort/sort.h"
#include "user_input/user_input.h"

#define BUBBLE_SORT_OPT '1'
#define EXIT_OPT '0'

int main() {
    char opt;

    do {
        Array array = user_input::user_input_int_array();

        std::cout << "The size is " << array.size << std::endl;
        std::cout << "The first value is " << array.items[0] << std::endl;

        opt = user_input::user_input_menu_opt();

        if (opt == BUBBLE_SORT_OPT) {
            sort::bubble_sort(array);
        }
    } while (opt != EXIT_OPT);

    return 0;
}
