/*
*	Chapter 5 - Exercise 11
*
*	Write a program that writes out the first so many values of the Fibonacci series,
*	that is, the series that starts with 1 1 2 3 5 8 13 21 34. The next number of the
*	series is the sum of the previous ones. Find the largest Fibbonacci number that fits
*	in an int.
*/

#include "../../Include/std_lib_facilities.h"

void Fibonacci(int n, vector<int>& sequence);

int LargestFibonacciInt();

int main()
{
	try
	{
		std::cout << "***********************************\n";
		std::cout << "FIBONACCI SERIES\n";
		std::cout << "***********************************\n\n";

		std::cout << "How many values of the Fibonacci series would you like to display?\n";

		int numberOfValues = 0;
		std::cin >> numberOfValues;

		if (numberOfValues < 1)
			error("Enter a positive number larger than zero!");

		vector<int> fibValues;
		Fibonacci(numberOfValues, fibValues);

		for (size_t i = 0; i < fibValues.size(); ++i)
		{
			std::cout << fibValues[i] << " ";
		}

		std::cout << "\n\nThe largest Fibonacci number that can be stored in an int is " << LargestFibonacciInt() << "\n\n";

		keep_window_open();

	}
	catch (exception& e)
	{
		std::cerr << "\nError: " << e.what() << std::endl;

		keep_window_open();

		return 1;
	}
	catch (...)
	{
		std::cerr << "\nUnhandled exception occured!\n\n";

		keep_window_open();

		return 2;
	}
}

void Fibonacci(int n, vector<int>& sequence)
{
	int first = 0;
	int second = 1;
	int next = 0;

	for (int i = 0; i < n; ++i)
	{
		if (i <= 1)
		{
			next = i;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
		}

		if (next < 0)
			error("Integer overflow!");

		sequence.push_back(next);
	}
}

int LargestFibonacciInt()
{
	int first = 0;
	int second = 1;
	int next = 0;
	int counter = 0;
	int result = 0;

	do
	{
		result = next;

		if (counter <= 1)
		{
			next = counter;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
		}

		counter++;
	} while (next >= 0);

	return result;
}