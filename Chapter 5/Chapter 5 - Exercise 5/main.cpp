/*
*	Chapter 5 - Exercise 5
*
*	Add to the program (exercise 4) so that it can also convert fron Kelvin to Celsius.
*/

#include "../../Include/std_lib_facilities.h"

const double absoluteZero = -273.15;

double ctok(double c);

double ktoc(double k);

int main()
{
	std::cout << "***********************************\n";
	std::cout << "TEMPERATURE CONVERSION\n";
	std::cout << "***********************************\n\n";

	try
	{
		int userSelection = 0;

		std::cout << "Choose the conversion you would like to make.\n"
			<< "1. Celsius to Kelvin\n"
			<< "2. Kelvin to Celsius\n\n";

		std::cin >> userSelection;

		double temperature = 0.0;
		double k = 0.0;
		double c = 0.0;

		switch (userSelection)
		{
		case 1:
			std::cout << "Enter temperature in celsius: ";
			std::cin >> temperature;
			k = ctok(temperature);
			std::cout << k << " Kelvin\n\n";
			break;
		case 2:
			std::cout << "Enter temperature in kelvin: ";
			std::cin >> temperature;
			c = ktoc(c);
			std::cout << c << " Celsius\n\n";
			break;
		default:
			error("Invalid selection!");
			break;
		}
		

		
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

double ctok(double c) // converts Celsius to Kelvin
{
	if (c < absoluteZero) error("Cannot convert a value below absolute zero!");

	double k = c + 273.15;
	return k;
}

double ktoc(double k)
{
	if (k < 0) error("Cannot have a temperature in Kelvin below absolute zero!");

	double c = k - 273.15;
	return c;
}