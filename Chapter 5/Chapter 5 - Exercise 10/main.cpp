/*
*	Chapter 5 - Exercise 10
*
*	Modify the program from exercise 8 to use double instead of int. Also,
*	make a vector of doubles containing the N - 1 differences between adjacent
*	values and write out that vector of differences.
*/

#include "../../Include/std_lib_facilities.h"

void GetVectorValues(vector<double>& doubles);

int ValuesToSum();

void ReportSumValues(vector<double> doubles, int numToSum);

void ReportDifferenceVector(vector<double> doubles);

int main()
{
	try
	{
		std::cout << "***********************************\n";
		std::cout << "SUM FROM A VECTOR\n";
		std::cout << "***********************************\n\n";

		std::cout << "Enter integers separated by spaces and end input with a \"|\"\n\n";

		vector<double> values;
		GetVectorValues(values);

		std::cout << "\nHow many values would you like to sum?\n";

		size_t numberToSum = 0;
		numberToSum = ValuesToSum();

		if (numberToSum > values.size())
			error("Cannot sum more values than given!");

		ReportSumValues(values, numberToSum);

		ReportDifferenceVector(values);

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

void GetVectorValues(vector<double>& doubles)
{
	double userInput = 0;
	while (std::cin >> userInput)
	{
		doubles.push_back(userInput);
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

void ReportSumValues(vector<double> doubles, int numToSum)
{
	double sum = 0;
	double temp = 0;
	for (int i = 0; i < numToSum; ++i)
	{
		temp = sum;
		sum += doubles[i];

		// integer overflow will occur when sign of value changes
		if (temp > sum)
			error("Cannot represent sum as an integer!");
	}

	std::cout << "\nThe sum of the first " << numToSum << " numbers ( ";

	for (int i = 0; i < numToSum; ++i)
	{
		std::cout << doubles[i] << " ";
	}

	std::cout << ") is " << sum << "\n\n";
}

void ReportDifferenceVector(vector<double> doubles) 
{
	vector<double> differences;

	// populate the difference vector
	for (size_t i = 1; i < doubles.size(); ++i)
	{
		differences.push_back(doubles[i] - doubles[i - 1]);
	}

	std::cout << "Differences between values entered\n";
	// print vector to console
	for (size_t i = 0; i < differences.size(); ++i)
	{
		std::cout << differences[i] << " ";
	}

	std::cout << "\n\n";
}
