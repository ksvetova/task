#ifndef TEST_4_H
#define TEST_4_H

//тестирование checkplace

extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>

TEST(test11,pozitive){
    int gb[8][8] = { {-1, 0,-1, 0,-1, 0,-1, 0},
                     { 0,-1, 0,-1, 0,-1, 0,-1},
                     {-2, 0,-1, 0,-1, 0,-1, 0},
                     { 0, 0, 0, 0, 0, 0, 0, 0},
                     { 0, 0, 0, 0, 0, 0, 0, 0},
                     { 0, 1, 0, 1, 0, 1, 0, 1},
                     { 1, 0, 1, 0, 1, 0, 1, 0},
                     { 0, 1, 0, 1, 0, 1, 0, 1} };

    ASSERT_EQ(checkPlace(5, 4, gb), 1);
    ASSERT_EQ(checkPlace(7, 2, gb), 1);
    ASSERT_EQ(checkPlace(3, 3, gb), 1);
    ASSERT_EQ(checkPlace(7, 3, gb), 1);
    ASSERT_EQ(checkPlace(6,4,gb),1);
}

TEST(test12,negative){
    int gb[8][8] = { {-1, 0,-1, 0,-1, 0,-1, 0},
                     { 0,-1, 0,-1, 0,-1, 0,-1},
                     {-2, 0,-1, 0,-1, 0,-1, 0},
                     { 0, 0, 0, 0, 0, 0, 0, 0},
                     { 0, 0, 0, 0, 0, 0, 0, 0},
                     { 0, 1, 0, 1, 0, 1, 0, 1},
                     { 1, 0, 1, 0, 1, 0, 1, 0},
                     { 0, 1, 0, 1, 0, 1, 0, 1} };

    ASSERT_EQ(checkPlace(5, 5, gb), 0);
    ASSERT_EQ(checkPlace(7, 7, gb), 0);
    ASSERT_EQ(checkPlace(3, 5, gb), 0);
    ASSERT_EQ(checkPlace(7, 1, gb), 0);
    ASSERT_EQ(checkPlace(6,2,gb),0);
}
#endif // TEST_4_H
