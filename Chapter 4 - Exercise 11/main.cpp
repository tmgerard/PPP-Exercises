/*
*	Chapter 4 - Exercise 11
*
*	Create a program to find all the prime numbers between 1 and 100. One way to
*	do this is to write a function that will check if a number is prime (i.e., see
*	if the number can be divided by a prime number smaller than itself) using a
*	a vector of primes in order (so that if the vector is called primes,
*	primes[0]==2, primes[1]==2, primes[2]==5, etc.). Then write a loop that goes
*	from 1 to 100, checks each number to see if it is prime, and stores each prime
*	found in a vector. Write another loop that lists the primes you found. You might
*	check your result by comparing your vector of prime numbers with primes. Consider
*	2 the first prime.
*/

#include "../std_lib_facilities.h"

bool isPrime(int number, vector<int> primeNumbers);

int main()
{
	std::cout << "***********************************\n";
	std::cout << "PRIMES FROM 1 TO 100\n";
	std::cout << "***********************************\n\n";

	vector<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
	vector<int> calculatedPrimes;

	for (int i = 2; i <= 100; ++i)
	{
		if (isPrime(i, primes))
			calculatedPrimes.push_back(i);
	}

	std::cout << "Primes from 1 to 100\n";

	for (size_t i = 0; i < calculatedPrimes.size(); ++i)
	{
		std::cout << calculatedPrimes[i] << '\n';
	}

	std::cout << '\n';

	keep_window_open();

	return 0;
}

bool isPrime(int number, vector<int> primeNumbers)
{
	for (size_t i = 0; i < primeNumbers.size(); ++i)
	{
		if (number % primeNumbers[i] == 0 && number != primeNumbers[i])
		{
			return false;
		}
	}

	return true;
}