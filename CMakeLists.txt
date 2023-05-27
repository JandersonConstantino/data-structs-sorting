cmake_minimum_required(VERSION 3.25)
project(data_struct_sort)

set(CMAKE_CXX_STANDARD 17)

add_executable(data_struct_sort src/main.cpp src/sort/bubble_sort.cpp src/sort/insertion_sort.cpp src/sort/selection_sort.cpp src/util/change_element_position.cpp src/user_input/user_input_int_array.cpp src/user_input/user_input.h src/util/split_string_by_comma.cpp src/core/structs.h src/user_input/user_input_menu_opt.cpp src/util/output_result.cpp)

add_subdirectory(Google_tests)
