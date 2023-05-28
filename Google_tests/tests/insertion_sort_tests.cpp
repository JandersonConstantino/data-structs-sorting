//
// Created by Janderson on 5/28/2023.
//

#include "gtest/gtest.h"

#include "../../src/util/util.h"
#include "../../src/sort/sort.h"
#include "../../src/sort/insertion_sort.cpp"

namespace insertion_sort {
    TEST(insertion_sort, should_sort_array_without_equal_values) {
        Array value;
        Array expected_result;

        expected_result.size = 5;
        expected_result.items = (int*) malloc(expected_result.size * sizeof(int));
        expected_result.items[0] = 1;
        expected_result.items[1] = 3;
        expected_result.items[2] = 5;
        expected_result.items[3] = 6;
        expected_result.items[4] = 99;

        value.size = 5;
        value.items = (int*) malloc(value.size * sizeof(int));
        value.items[0] = 5;
        value.items[1] = 1;
        value.items[2] = 99;
        value.items[3] = 6;
        value.items[4] = 3;

        sort::insertion_sort(value);

        EXPECT_EQ(value.size, expected_result.size);

        for (int i = 0; i < expected_result.size; i++) {
            EXPECT_EQ(value.items[i], expected_result.items[i]);
        }
    }

    TEST(insertion_sort, should_sort_array_with_equal_values) {
        Array value;
        Array expected_result;

        expected_result.size = 5;
        expected_result.items = (int*) malloc(expected_result.size * sizeof(int));
        expected_result.items[0] = 1;
        expected_result.items[1] = 1;
        expected_result.items[2] = 5;
        expected_result.items[3] = 6;
        expected_result.items[4] = 99;

        value.size = 5;
        value.items = (int*) malloc(value.size * sizeof(int));
        value.items[0] = 5;
        value.items[1] = 1;
        value.items[2] = 99;
        value.items[3] = 6;
        value.items[4] = 1;

        sort::insertion_sort(value);

        EXPECT_EQ(value.size, expected_result.size);

        for (int i = 0; i < expected_result.size; i++) {
            EXPECT_EQ(value.items[i], expected_result.items[i]);
        }
    }
}

