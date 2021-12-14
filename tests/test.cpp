#include "gtest/gtest.h"

TEST(arifm, sum)
{
	int a = 5;
	int b = 7;
	int c = a + b;

	EXPECT_EQ(c, 12);
}

TEST(arifm, def)
{
	int a = 5;
	int b = 7;
	int c = a - b;

	EXPECT_EQ(c, -2);
}