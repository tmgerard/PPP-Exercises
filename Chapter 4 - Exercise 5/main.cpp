/*
*	Chapter 4 - Exercise 5
*
*	Write a program that performs as a very simple calculator. Your calculator should be
*	able to handle the four basic math operations - add, subtract, multiply, and divide -
*	on two input values. Your program should prompt the user to enter three arguments:
*	two double values and a character to represent an operation. If the entry arguments
*	are 35.6, 24.1, and '+', the program output should be "The sum of 35.6 and 24.1 is 59.7."
*	In Chapter 6 we look at a much more sophisticated simple calculator.
*/

#include "../std_lib_facilities.h"

int main()
{
	std::cout << "******************************\n";
	std::cout << "A VERY SIMPLE CALCULATOR\n";
	std::cout << "******************************\n\n";

	std::cout << "Enter two numbers and an operator separated by a space ('+', '-', '*', or '/')\n\n";

	double val1 = 0.0;
	double val2 = 0.0;
	char operation;

	std::cin >> val1 >> val2 >> operation;

	std::cout << '\n';

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

	default:
		break;
	}

	keep_window_open();

	return 0;
}