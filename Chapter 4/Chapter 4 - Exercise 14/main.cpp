/*
*	Chapter 4 - Exercise 14
*
*	Modify the program described in the previous exercise to take an input value
*	max and then find all prime numbers from 1 to max.
*
*	https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
*/

#include "../../Include/std_lib_facilities.h"

vector<int> Eratosthenes(int upperLimit);

int main()
{
	std::cout << "*******************************************************\n";
	std::cout << "PRIMES FROM 1 TO INPUT - SIEVE OF ERATOSTHENES METHOD\n";
	std::cout << "*******************************************************\n\n";

	vector<int> indexIsPrime;

	int max = 0;

	std::cout << "Enter an upper limit to your list of prime numbers: ";

	std::cin >> max;

	indexIsPrime = Eratosthenes(max);

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

vector<int> Eratosthenes(int upperLimit)
{
	vector<int> isPrime;
	for (int i = 0; i <= upperLimit; ++i)
	{
		isPrime.push_back(1);
	}

	for (int i = 2; i <= upperLimit; ++i)
	{
		if (isPrime[i - 1])
		{
			for (int j = i * i; j <= upperLimit; j += i)
			{
				isPrime[j - 1] = 0;
			}
		}
	}

	return isPrime;
}