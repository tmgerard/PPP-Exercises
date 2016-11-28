/*
*	Chapter 5 - Exercise 4
*
*	Do exercise 3 again, but this time handle the error inside ctok().
*/

#include "../../Include/std_lib_facilities.h"

const double absoluteZero = -273.15;

double ctok(double c) // converts Celsius to Kelvin
{
	if (c < absoluteZero) error("Cannot convert a value below absolute zero!");

	double k = c + 273.15;
	return k;
}

int main()
{
	std::cout << "***********************************\n";
	std::cout << "CELSIUS TO KELVIN\n";
	std::cout << "***********************************\n\n";

	try
	{
		double c = 0.0;
		cin >> c;

		double k = ctok(c);
		cout << k << '\n';
		keep_window_open();
	}
	catch (runtime_error& e)
	{
		std::cerr << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...)
	{
		std::cerr << "An error occured!\n";
		keep_window_open();
		return 2;
	}

}