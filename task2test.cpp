#include <gtest/gtest.h>
#include ".../task2/"

TEST(IncreaseVectorTest, BasicTest)
{
    vector<int> input = { 1, 2, 3 };
    vector<int> expected = { 4, 5, 6 };
    vector<int> result = increaseVector(input, 3);
    ASSERT_EQ(expected, result);
}