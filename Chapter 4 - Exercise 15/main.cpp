/*
*	Chapter 4 - Exercise 15
*
*	Write a program that takes an input value n and finds the first n primes.
*/

#include "../std_lib_facilities.h"

bool isPrime(int number);

int main()
{
	std::cout << "***********************************\n";
	std::cout << "FIND THE FIRST N PRIMES\n";
	std::cout << "***********************************\n\n";

	std::cout << "How many prime numbers would you like to find? ";

	int n = 0;
	constexpr int firstPrime = 2;

	std::cin >> n;

	std::cout << '\n';

	int primeCount = 0;
	int currentNumber = firstPrime;

	while (primeCount < n)
	{
		if (isPrime(currentNumber))
		{
			++primeCount;
			std::cout << std::setw(4) << primeCount << ": " << currentNumber << '\n';
		}

		++currentNumber;
	}

	std::cout << '\n';

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