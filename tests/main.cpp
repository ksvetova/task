#include <gtest/gtest.h>
#include "test.h"
#include "test_1.h"
#include "test_2.h"


int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
