/*
*	Chapter 5 - Exercise 3
*
*	Absolute zero is the lowest temperature that can be reached; it is -273.15 degrees celsius,
*	or 0 kelvin. The above program (exercise 2), even when corrected, will produce erroneous
*	results when given a temperature below this. Place a check in the main program that
*	will produce an error if a temperature is given below -273.15 degrees celsius.
*/

#include "../../Include/std_lib_facilities.h"

const double absoluteZero = -273.15;

double ctok(double c) // converts Celsius to Kelvin
{
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

		if (c < absoluteZero) error("Cannot convert a value below absolute zero!");

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