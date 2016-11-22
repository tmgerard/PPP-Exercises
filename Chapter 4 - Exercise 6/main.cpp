/*
*	Chapter 4 - Exercise 6
*
*	Make a vector holding the ten string values "zero", "one", ... "nine". Use that
*	in a program that converts a digit to its corresponding spelled-out value; e.g.,
*	the input 7 gives the output "seven". Have the same program, using the same input
*	loop, convert spelled-out numbers into their digit form; e.g., the input "seven"
*	gives the output 7.
*/

#include "../std_lib_facilities.h"

int main()
{
	std::cout << "******************************\n";
	std::cout << "NUMBER-TEXT CONVERSION\n";
	std::cout << "******************************\n\n";

	std::cout << "Type \"quit\" to exit the program\n\n";

	vector<std::string> numberString = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	vector<int> numbers = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::string userInput;

	bool valueFound = false;

	while (userInput != "quit")
	{
		std::cout << "Spell out a number or give a digit: ";
		std::cin >> userInput;

		std::cout << '\n';

		// int works in this loop but the compiler throws a signed/unsigned mismatch warning
		// numberString.size() type is size_t
		for (size_t i = 0; i < numberString.size(); ++i)
		{
			if (userInput == numberString[i])
			{
				std::cout << numbers[i] << "\n\n";
				valueFound = true;
			}
		}

		for (size_t i = 0; i < numbers.size(); ++i)
		{
			if (userInput == std::to_string(numbers[i]))
			{
				std::cout << numberString[i] << "\n\n";
				valueFound = true;
			}
		}

		if (!valueFound)
			std::cout << "I do not know that number!\n\n";

		valueFound = false;
	}

	return 0;
}