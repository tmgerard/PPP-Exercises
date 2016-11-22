/*
*	Chapter 3 - Exercise 6
*
*	Write a program that prompts the user to enter three integer values, and
*	then outputs the values in numerical sequence separated by commas. So, if the
*	user enters the values 10 4 6, the output should be 4, 6, 10. If two values are
*	the same, they should just be ordered together. So, the input 4 5 4 should give 4, 4, 5.
*/

#include "../std_lib_facilities.h"

int main()
{
	std::cout << "*****************************\n";
	std::cout << "INTEGER ORDERING\n";
	std::cout << "*****************************\n\n";

	std::cout << "Enter three integers separated by spaces: ";

	int val1 = 0;
	int val2 = 0;
	int val3 = 0;

	std::cin >> val1 >> val2 >> val3;

	int low = 0;
	int mid = 0;
	int high = 0;

	// find the lowest value
	if (val1 < val2 && val1 < val3)
	{
		low = val1;
	}
	else if (val2 < val1 && val2 < val3)
	{
		low = val2;
	}
	else
	{
		low = val3;
	}

	// find the highest value
	if (val1 > val2 && val1 > val3)
	{
		high = val1;
	}
	else if (val2 > val1 && val2 > val3)
	{
		high = val2;
	}
	else
	{
		high = val3;
	}

	// find the middle value
	if (low < val1 && high > val1)
	{
		mid = val1;
	}
	else if (low < val2 && high > val2)
	{
		mid = val2;
	}
	else
	{
		mid = val3;
	}

	std::cout << "Integers in sequence: " << low << ", " << mid << ", " << high << "\n\n";

	keep_window_open();

	return 0;
}