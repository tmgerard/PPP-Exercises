/*
*	Chapter 4 - Exercise 7
*
*	Modify the "mini calculator" from exercise 5 to accept (just) single-digit
*	numbers written as either digits or spelled-out.
*/

#include "../../Include/std_lib_facilities.h"

int main()
{
	std::cout << "***********************************\n";
	std::cout << "A VERY SIMPLE CALCULATOR (MODIFIED)\n";
	std::cout << "***********************************\n\n";

	vector<std::string> numberString = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	vector<int> numbers = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::cout << "Enter two integers (digit or spelled-out) and an operator\n" << "separated by a space ('+', '-', '*', '/', or 'q' to quit)\n\n";

	std::string input1;
	std::string input2;
	char operation = 'e';
	bool goodInput1 = false;
	bool goodInput2 = false;

	while (operation != 'q')
	{
		std::cin >> input1 >> input2 >> operation;

		std::cout << '\n';

		// set val1
		int val1 = 0;

		for (size_t i = 0; i < numberString.size(); ++i)
		{
			if (input1 == numberString[i])
			{
				val1 = numbers[i];
				goodInput1 = true;
			}
		}

		for (size_t i = 0; i < numbers.size(); ++i)
		{
			if (input1 == std::to_string(numbers[i]))
			{
				
				val1 = numbers[i];
				goodInput1 = true;
			}
		}

		// set val2
		int val2 = 0;

		for (size_t i = 0; i < numberString.size(); ++i)
		{
			if (input2 == numberString[i])
			{
				val2 = numbers[i];
				goodInput2 = true;
			}
		}

		for (size_t i = 0; i < numbers.size(); ++i)
		{
			if (input2 == std::to_string(numbers[i]))
			{
				val2 = numbers[i];
				goodInput2 = true;
			}
		}

		// if the number inputs are invalid, set the operation to a value not supported
		// by the program to force the default message in the switch statement
		if (!goodInput1 || !goodInput2)
		{
			if (operation != 'q')
			{
				operation = 'e';
			}
		}

		// calculate value
		double answer = 0.0;

		switch (operation)
		{
		case '+':
			answer = val1 + val2;
			std::cout << "The sum of " << val1 << " and " << val2 << " is " << answer << "\n\n";
			break;

		case '-':
			answer = val1 - val2;
			std::cout << "The difference between " << val1 << " and " << val2 << " is " << answer << "\n\n";
			break;

		case '*':
			answer = val1 * val2;
			std::cout << "The product of " << val1 << " and " << val2 << " is " << answer << "\n\n";
			break;

		case '/':
			answer = val1 / val2;
			std::cout << "The ratio of " << val1 << " and " << val2 << " is " << answer << "\n\n";
			break;

		case 'q':
			break;

		default:
			std::cout << "I cannot do this calculation\n\n";
			break;
		}

		goodInput1 = false;
		goodInput2 = false;

	}

	return 0;
}