#include "gtest/gtest.h"
#include "abc.h"


TEST(FactorialTest, Negative)
{
	A a;
	a.set_a(123);
	EXPECT_EQ(a.get_a(), 123);
}
