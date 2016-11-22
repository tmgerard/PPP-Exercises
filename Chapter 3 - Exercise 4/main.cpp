/*
*	Chapter 3 - Exercise 4
*
*	Write a program that prompts the user to enter two integer values. Store
*	these values in int variables named val1 and val2. Write your program to determine
*	the smaller, larger, sum, difference, product, and ratio of these values and report
*	them to the user.
*/

#include "../std_lib_facilities.h"

int main()
{
	std::cout << "*******************\n";
	std::cout << "INTEGER COMPARISON\n";
	std::cout << "*******************\n\n";

	std::cout << "Please enter two integer values separated by a space: ";

	int val1 = 0;
	int val2 = 0;

	std::cin >> val1 >> val2;

	if (val1 > val2)
	{
		std::cout << "\nLarger Value: " << val1 << '\n';
		std::cout << "Smaller Value: " << val2 << '\n';
	}
	else
	{
		std::cout << "\nLarger Value: " << val2 << '\n';
		std::cout << "Smaller Value: " << val1 << '\n';
	}

	std::cout << "Sum: " << val1 + val2 << '\n';
	std::cout << "Difference: " << val1 - val2 << '\n';
	std::cout << "Product: " << val1 * val2 << '\n';
	std::cout << "Ratio: " << double(val1) / double(val2) << '\n' << '\n';

	keep_window_open();

	return 0;
}