#include "pch.h"

#define MAX 999
#define PI 3.1415926535897
float Sin(float x, int n)
{
	if (n > MAX)
		return x;
	return x - x * x / (((2 * n + 1) - 1) * (2 * n + 1)) * Sin(x, n + 1);
}

float Cosin(float x, int n)
{
	if (n > MAX)
		return 1;
	return 1 - x * x / ((2 * n - 1) * 2 * n) * Cosin(x, n + 1);
}
TEST(TestSin, TestPI) {
	EXPECT_EQ(Sin(PI, 1), 0);
	EXPECT_TRUE(true);
}
TEST(TestCos, TestPI) {
	EXPECT_EQ(Cosin(PI, 1), -1);
	EXPECT_TRUE(true);
}