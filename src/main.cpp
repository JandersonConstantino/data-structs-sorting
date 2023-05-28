#include <iostream>
#include "core/structs.h"
#include "sort/sort.h"
#include "user_input/user_input.h"

#define BUBBLE_SORT_OPT '1'
#define SELECTION_SORT_OPT '2'
#define INSERTION_SORT_OPT '3'
#define EXIT_OPT '0'

int main() {
    char opt;

    do {
        opt = user_input::user_input_menu_opt();

        bool is_exit = opt == EXIT_OPT;
        bool is_valid_opt = opt == BUBBLE_SORT_OPT
            || opt == SELECTION_SORT_OPT
            || opt == INSERTION_SORT_OPT
            || opt == EXIT_OPT;

        if (is_exit || !is_valid_opt) {
            if (!is_valid_opt) {
                std::cout << "Invalid option!" << std::endl;
            }
            break;
        }

        Array array = user_input::user_input_int_array();

        if (opt == BUBBLE_SORT_OPT) {
            sort::bubble_sort(array);
        } else if (opt == SELECTION_SORT_OPT) {
            sort::selection_sort(array);
        } else if (opt == INSERTION_SORT_OPT) {
            sort::insertion_sort(array);
        }
    } while (opt != EXIT_OPT);

    return 0;
}
