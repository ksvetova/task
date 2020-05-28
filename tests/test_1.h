#ifndef TEST_1_H
#define TEST_1_H
extern"C"{
#include "function.h"
}
#include <gtest/gtest.h>
TEST(test3,test){
    int gb[8][8] = { { 0, 0,-1, 0, 2, 0, 1, 0},
                     { 0, 0, 0,-1, 0, 0, 0, 1},
                     { 1, 0, 0, 0, 0, 0, 1, 0},
                     { 0,-1, 0, 0, 0, 1, 0, 0},
                     { 0, 0, 0, 0, 0, 0, 0, 0},
                     { 0, 0, 0, 0, 0, 0, 0, 0},
                     {-2, 0, 0, 0, 0, 0,-1, 0},
                     { 0, 0, 0, 0, 0,-1, 0, -2} };
    ASSERT_EQ(createDamka(2,0,gb),1);
    ASSERT_EQ(createDamka(5,7,gb),2);
    ASSERT_EQ(createDamka(6,0,gb),2);
    ASSERT_EQ(createDamka(0,0,gb),0);
    ASSERT_EQ(createDamka(7,7,gb),2);
}
#endif // TEST_1_H
