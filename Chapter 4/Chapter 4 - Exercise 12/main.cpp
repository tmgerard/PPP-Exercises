/*
*	Chapter 4 - Exercise 12
*
*	Modify the program described in the previous exercise to take an input value
*	max and then find all the prime numbers from 1 to max.
*/

#include "../../Include/std_lib_facilities.h"

bool isPrime(int number);

int main()
{
	std::cout << "***********************************\n";
	std::cout << "PRIMES FROM 1 TO INPUT\n";
	std::cout << "***********************************\n\n";

	vector<int> calculatedPrimes;
	int max = 0;

	std::cout << "Enter an upper limit to your list of prime numbers: ";

	std::cin >> max;

	for (int i = 1; i <= max; ++i)
	{
		if (isPrime(i))
			calculatedPrimes.push_back(i);
	}

	std::cout << "Primes from 1 to " << max << '\n';

	for (size_t i = 0; i < calculatedPrimes.size(); ++i)
	{
		std::cout << calculatedPrimes[i] << '\n';
	}

	keep_window_open();

	return 0;
}

// https://en.wikipedia.org/wiki/Primality_test

bool isPrime(int number)
{
	if (number <= 1)
	{
		return false;
	}
	else if (number <= 3)
	{
		return true;
	}
	else if (number % 2 == 0 || number % 3 == 0)
	{
		return false;
	}

	int i = 5;
	while (i * i <= number)
	{
		if (number % i == 0 || number % (i + 2) == 0)
		{
			return false;
		}
		
		i += 6;
	}

	return true;
}