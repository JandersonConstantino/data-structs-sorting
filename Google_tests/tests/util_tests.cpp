//
// Created by Janderson on 5/27/2023.
//

#include "gtest/gtest.h"

#include "../../src/util/util.h"
#include "../../src/util/split_string_by_comma.cpp"
#include "../../src/util/change_element_position.cpp"

namespace split_string_by_comma {
    TEST(split_string_by_comma, should_transform_string_without_comma) {
        std::string input;
        Array result;
        Array expected_result;

        input = "10";
        expected_result.size = 1;
        expected_result.items = (int*) malloc(1 * sizeof (int));
        expected_result.items[0] = 10;

        result = util::split_string_by_comma(input);

        EXPECT_EQ(result.size, expected_result.size);
        for (int i = 0; i < expected_result.size; i++) {
            EXPECT_EQ(result.items[i], expected_result.items[i]);
        }
    }

    TEST(split_string_by_comma, should_transform_string_with_comma) {
        std::string input;
        Array result;
        Array expected_result;

        input = "10,50,30";
        expected_result.size = 3;
        expected_result.items = (int*) malloc(3 * sizeof (int));
        expected_result.items[0] = 10;
        expected_result.items[1] = 50;
        expected_result.items[2] = 30;

        result = util::split_string_by_comma(input);

        EXPECT_EQ(result.size, expected_result.size);
        for (int i = 0; i < expected_result.size; i++) {
            EXPECT_EQ(result.items[i], expected_result.items[i]);
        }
    }
}
