#include <gtest/gtest.h>
#include "test.h" //destroy
#include "test_1.h" //damka
#include "test_2.h" //checkboard
#include "test_3.h" //checkmove
#include "test_4.h" //place
#include "test_5.h" //move
#include "test_6.h" //out

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
