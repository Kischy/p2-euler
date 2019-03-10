#include "pch.h"

#include "../p2-euler/src/Fibonacci.h"


class FibonacciTest : public testing::Test
{
public:
	Fibonacci fibonacci;
};



TEST_F(FibonacciTest, GivesBackFirstFourFibonacciNumbers) {
	ASSERT_EQ(fibonacci.get_fibonacci_number(0), 0);
	ASSERT_EQ(fibonacci.get_fibonacci_number(1), 1);
	ASSERT_EQ(fibonacci.get_fibonacci_number(2), 2);
	ASSERT_EQ(fibonacci.get_fibonacci_number(3), 3);
}

TEST_F(FibonacciTest, GivesBackFourthFibonaciNumber) {
	ASSERT_EQ(fibonacci.get_fibonacci_number(4), 5);
}

TEST_F(FibonacciTest, GivesBackCorrectFibonaciNumber) {
	ASSERT_EQ(fibonacci.get_fibonacci_number(5), 8);
	ASSERT_EQ(fibonacci.get_fibonacci_number(6), 13);
	ASSERT_EQ(fibonacci.get_fibonacci_number(10), 89);
}

TEST(FibonacciSavingTest, CheckIfFibonacciNumbersAreSavedCorrectly) {
	Fibonacci fib2;

	ASSERT_EQ(fib2.get_fibonacci_number(10), 89);
	ASSERT_EQ(fib2.get_fibonacci_number(5), 8);
	ASSERT_EQ(fib2.get_fibonacci_number(6), 13);
}