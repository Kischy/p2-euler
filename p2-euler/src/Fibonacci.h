#pragma once


#include <unordered_map>

class Fibonacci
{
public:

	unsigned long long get_fibonacci_number(unsigned long long num_pos) 
	{
		// 0 until 3 are the first four numbers of the fibonacci sequence
		if (is_one_of_the_first_four_fibonacci_numbers(num_pos))
		{
			return get_first_four_fibonacci_numbers(num_pos);
		}

		if (fib_number_is_saved(num_pos) == true)
		{
			return get_saved_fibonacci_number(num_pos);
		}

		unsigned long long fib_num = get_fibonacci_number(num_pos - 1) + get_fibonacci_number(num_pos - 2);

		save_fibonacci_number(num_pos,fib_num);

		return fib_num;
	}

private:	

	unsigned long long get_first_four_fibonacci_numbers(unsigned long long num_pos) const
	{
		return num_pos;
	}

	bool is_one_of_the_first_four_fibonacci_numbers(unsigned long long num_pos) const
	{
		return num_pos <= 3;
	}


	void save_fibonacci_number(unsigned long long num_pos, unsigned long long fib_num) 
	{
		fibonacci_numbers.insert({ num_pos,fib_num });
	}

	unsigned long long get_saved_fibonacci_number(unsigned long long num_pos) const 
	{
		auto it = fibonacci_numbers.find(num_pos);
		return it->second;
	}

	bool fib_number_is_saved(unsigned long long num_pos) const
	{
		auto it = fibonacci_numbers.find(num_pos);
		
		return it == fibonacci_numbers.end() ? false : true;
	}

	std::unordered_map<unsigned long long, unsigned long long> fibonacci_numbers;

};



