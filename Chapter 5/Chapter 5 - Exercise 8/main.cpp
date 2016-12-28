/*
*	Chapter 5 - Exercise 8
*
*	Write a program that reads and stores a series of integers and then computes the 
*	sum of the first N integers. First as for N, then read the values into a vector,
*	then calculate the sum of the first N values. For example:
*
*	"Please enter the number of values you want to sum:"
*	3
*
*	"Please enter some integers (press '|' to stop):"
*	12 23 13 24 15 |
*
*	"The sum of the first 3 numbers (12 23 13) is 48."
*
*	Handle all inputs. For example, make sure to give an error message if the user
*	asks for a sum of more numbers than there are in the vector.
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
		std::cerr << "Error: " << e.what() << std::endl;

		keep_window_open();

		return 1;
	}
	catch (...)
	{
		std::cerr << "Unhandled exception occured!\n\n";

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
	std::cout << "\nThe sum of the first " << numToSum << " numbers ( ";

	int sum = 0;
	for (int i = 0; i < numToSum; ++i)
	{
		std::cout << integers[i] << " ";
		sum += integers[i];
	}

	std::cout << ") is " << sum << "\n\n";
}
