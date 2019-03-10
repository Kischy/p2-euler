#include <iostream>

#include "Fibonacci.h"


int main(int argc, char** argv)
{
	Fibonacci fibonacci;

	unsigned long long p2_answer = 0;

	unsigned long long cur_fib_num = 0;
	
	unsigned long i = 2;

	while (cur_fib_num < 4000000)
	{
		cur_fib_num = fibonacci.get_fibonacci_number(i);

		if ((cur_fib_num % 2) == 0)
		{
			p2_answer += cur_fib_num;
		}

		i++;
	}


	
	std::cout << "Solution second problem of ProjectEuler.net: " << p2_answer << std::endl;
	
	return 0;
}
