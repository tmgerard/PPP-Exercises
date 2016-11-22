/*
*	Chapter 3 - Exercise 7
*
*	Do exercise 6, but with three string values. So, if the user enters the values
*	Steinbeck Hemingway Fitzgerald, the output should be Fitzgerald, Hemingway, Steinbeck.
*/

#include "../std_lib_facilities.h"

int main()
{
	std::cout << "*****************************\n";
	std::cout << "STRING ORDERING\n";
	std::cout << "*****************************\n\n";

	std::cout << "Enter three strings separated by spaces: ";

	string str1;
	string str2;
	string str3;

	std::cin >> str1 >> str2 >> str3;

	string low;
	string mid;
	string high;

	// find the lowest value
	if (str1 < str2 && str1 < str3)
	{
		low = str1;
	}
	else if (str2 < str1 && str2 < str3)
	{
		low = str2;
	}
	else
	{
		low = str3;
	}

	// find the highest value
	if (str1 > str2 && str1 > str3)
	{
		high = str1;
	}
	else if (str2 > str1 && str2 > str3)
	{
		high = str2;
	}
	else
	{
		high = str3;
	}

	// find the middle value
	if (low < str1 && high > str1)
	{
		mid = str1;
	}
	else if (low < str2 && high > str2)
	{
		mid = str2;
	}
	else
	{
		mid = str3;
	}

	std::cout << "Strings in sequence: " << low << ", " << mid << ", " << high << "\n\n";

	keep_window_open();

	return 0;
}