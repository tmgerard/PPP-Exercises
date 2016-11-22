/*
*	Chapter 3 - Exercise 10
*
*	Write a program that takes an operation followed by two operands and outputs
*	the result. For example:
*	
*	+ 100 3.14
*	* 4 5
*
*	Read the operation into a string called operation and use an if-statement to figure
*	out which operation the user wants, for example, if(operation=="+"). Read the operands
*	into variables of type double. Implement this for operations called +, -, *, /, plus,
*	minus, mul, and div with their obvious meanings.
*/

#include "../../Include/std_lib_facilities.h"

int main()
{
	std::cout << "******************************\n";
	std::cout << "OPERATION ON TWO NUMBERS\n";
	std::cout << "******************************\n\n";

	std::cout << "Enter an operator followed by two numbers. (\"q # #\" to quit)\n\n";
	
	string operation;
	double val1;
	double val2;

	while (cin)
	{
		std::cin >> operation >> val1 >> val2;

		if (operation == "+" || operation == "plus")
		{
			std::cout << val1 + val2 << '\n';
		}
		else if (operation == "-" || operation == "minus")
		{
			std::cout << val1 - val2 << '\n';
		}
		else if (operation == "*" || operation == "mul")
		{
			std::cout << val1 * val2 << '\n';
		}
		else if (operation == "/" || operation == "div")
		{
			std::cout << val1 / val2 << '\n';
		}
		else if (operation == "q")
		{
			break;
		}
	}

}