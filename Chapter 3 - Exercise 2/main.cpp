/*
*	Chapter 3 - Exercise 2
*
*	Write a program in C++ that converts from miles to kilometers. Your program
*	should have a reasonable prompt for the user to enter a number of miles.
*	Hint: There are 1.609 kilometers to the mile.
*/

#include "../std_lib_facilities.h"

int main()
{
	std::cout << "**************************************\n";
	std::cout << "MILES TO KILOMETERS CONVERSION PROGRAM\n";
	std::cout << "**************************************\n\n";

	std::cout << "Distance in miles: ";

	double miles = 0;

	std::cin >> miles;

	std::cout << "Distance in kilometers: " << miles * 1.60934 << '\n' << '\n';

	keep_window_open();

	return 0;
}