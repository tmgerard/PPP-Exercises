/*
*	Chapter 5 - Exercise 9
*
*	Modify the program from exercise 8 to write out an error if the result cannot be
*	represented in an int.
*/

#include "../../Include/std_lib_facilities.h"

void GetVectorValues(vector<int>& integers);

int ValuesToSum();

void ReportSumValues(vector<int> integers, int numToSum);

int main()
{
	try
	{
		std::cout << "***********************************\n";
		std::cout << "SUM FROM A VECTOR\n";
		std::cout << "***********************************\n\n";

		std::cout << "Enter integers separated by spaces and end input with a \"|\"\n\n";

		vector<int> values;
		GetVectorValues(values);

		std::cout << "\nHow many values would you like to sum?\n";

		int numberToSum = 0;
		numberToSum = ValuesToSum();

		if (numberToSum > values.size())
			error("Cannot sum more values than given!");

		ReportSumValues(values, numberToSum);

		keep_window_open();

		return 0;
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

void GetVectorValues(vector<int>& integers)
{
	int userInput = 0;
	while (std::cin >> userInput)
	{
		integers.push_back(userInput);
	}
	std::cin.clear();
}

int ValuesToSum()
{
	int sum = 0;
	std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
	std::cin >> sum;

	if (sum < 1)
		error("You must have at least one value!");

	return sum;
}

void ReportSumValues(vector<int> integers, int numToSum)
{
	int sum = 0;
	int temp = 0;
	for (int i = 0; i < numToSum; ++i)
	{
		temp = sum;
		sum += integers[i];

		// integer overflow will occur when sign of value changes
		if (temp > sum)
			error("Cannot represent sum as an integer!");
	}

	std::cout << "\nThe sum of the first " << numToSum << " numbers ( ";

	for (int i = 0; i < numToSum; ++i)
	{
		std::cout << integers[i] << " ";
	}

	std::cout << ") is " << sum << "\n\n";
}
