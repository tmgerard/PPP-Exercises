/*
*	Chapter 3 - Exercise 8
*
*	Write a program to test an integer value to determine if it is odd or even.
*	As always, make sure your output is clear and complete. In other words, 
*	don't just output yes or no. Your output should stand alone, like
*	The value 4 is an even number.
*	Hint: See the remainder (modulo) operator in section 3.4.
*/

#include "../../Include/std_lib_facilities.h"

int main()
{
	std::cout << "**************************\n";
	std::cout << "ODD OR EVEN INTEGER\n";
	std::cout << "**************************\n\n";

	std::cout << "Enter integer numbers to test if odd or even, or enter a character to quit.\n\n";

	int number = 0;

	while (std::cin >> number)
	{
		if (number % 2 == 0)
		{
			std::cout << number << " is an even number.\n";
		}
		else
		{
			std::cout << number << " is an odd number.\n";
		}
	}

	return 0;
}