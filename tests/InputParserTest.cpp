#include <gtest/gtest.h>
#include "../src/InputParser.hpp"
#include <iostream>
#include <string>
TEST(InputParserTest, Constructor)
{
    int argc = 3;
    char* argv[] = {"abc", "zxc", "asd"};
    InputParser parser = InputParser(argc, argv);
    EXPECT_EQ("zxcasd", parser.getCalculation());

    int argc2 = 1;
    char* argv2[] = {"abc"};
    InputParser parser2 = InputParser(argc2, argv2);
    EXPECT_EQ("", parser2.getCalculation());
}