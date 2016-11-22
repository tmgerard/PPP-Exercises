/*
*	Chapter 3 - Exercise 9
*
*	Write a program that converts spelled-out numbers such as "zero" and "two" into
*	digits, such as 0 and 2. When the user inputs a number, the program should print
*	out the corresponding digit. Do it for the values 0, 1, 2, 3, and 4 and write out
*	"not a number I know" if the user enters some-thing that doesn't correspond such as
*	"stupid computer!".
*/

#include "../../Include/std_lib_facilities.h"

int main()
{
	std::cout << "************************\n";
	std::cout << "ONE TO 1";
	std::cout << "************************\n\n";

	std::cout << "Enter a number as a lowercase string to output the number as a digit.\n";
	std::cout << "(Type \"quit\" to exit the program)\n\n";

	string numberString;

	while (std::cin >> numberString)
	{
		if (numberString == "zero")
		{
			std::cout << 0 << '\n';
		}
		else if (numberString == "one")
		{
			std::cout << 1 << '\n';
		}
		else if (numberString == "two")
		{
			std::cout << 2 << '\n';
		}
		else if (numberString == "three")
		{
			std::cout << 3 << '\n';
		}
		else if (numberString == "four")
		{
			std::cout << 4 << '\n';
		}
		else if (numberString == "quit")
		{
			break;
		}
		else
		{
			std::cout << "Not a number I know\n";
		}
	}

}