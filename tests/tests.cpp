#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
#include <sstream>
#include <Dummy.h>


TEST(tests, test1) {
    std::ostringstream oss;
    std::streambuf* cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());
    Dummy dummy;
    std::cout.rdbuf(cout_streambuf);
    EXPECT_EQ(oss.str(), "c'tor Dummy [0]\n");
}

TEST(tests, test2) {

}

TEST(tests, test3) {

}