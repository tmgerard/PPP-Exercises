/*
*	Chapter 4 - Exercise 13
*
*	Create a program to find all the prime numbers between 1 and 100. There is a
*	classic method for doing this, called the "Sieve of Eratosthenes." If you don't
*	know this method, get on the web and look it up. Write your program using this method.
*
*	https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
*/

#include "../std_lib_facilities.h"

int main()
{
	std::cout << "*******************************************************\n";
	std::cout << "PRIMES FROM 1 TO 100 - SIEVE OF ERATOSTHENES METHOD\n";
	std::cout << "*******************************************************\n\n";

	vector<int> indexIsPrime;

	constexpr int max = 100;

	for (int i = 0; i <= max; ++i)
	{
		indexIsPrime.push_back(1);
	}

	// Sieve of Eratosthenes Algorithm
	for (int i = 2; i <= max; ++i)
	{
		if (indexIsPrime[i - 1])
		{
			for (int j = i * i; j <= max; j += i)
			{
				indexIsPrime[j - 1] = 0;
			}
		}
	}

	std::cout << "Primes from 1 to " << max << '\n';

	for (int i = 2; i <= max; ++i)
	{
		if (indexIsPrime[i - 1] == 1)
		{
			std::cout << i << '\n';
		}
	}

	keep_window_open();

	return 0;
}