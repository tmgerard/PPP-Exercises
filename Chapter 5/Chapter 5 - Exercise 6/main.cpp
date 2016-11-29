/*
*	Chapter 5 - Exercise 6
*
*	Write a program that converts from Celsius to Fahrenheight and from Fahrenheight
*	to Celsius (formula in section 4.3.3). Use estimation (section 5.8) to see if your
*	results are probable.
*/

#include "../../Include/std_lib_facilities.h"

const double absoluteZeroC = -273.15;
const double absoluteZeroF = -459.67;

double ctof(double c);
double ftoc(double f);
void tempConverter();

int main()
{
	std::cout << "***********************************\n";
	std::cout << "TEMPERATURE CONVERSION\n";
	std::cout << "***********************************\n\n";

	char loopAgain = 'n';

	do
	{

		try
		{
			tempConverter();

			std::cout << "Another conversion (y/n)? ";
			std::cin >> loopAgain;

			std::cout << "\n\n";
		}
		catch (runtime_error & e)
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

	} while (loopAgain == 'y');

	return 0;
}

double ctof(double c)
{
	if (c < absoluteZeroC) error("\nCannot convert a value below absolute zero!\n");

	double f = (9.0 / 5.0) * c + 32.0;
	return f;
}

double ftoc(double f)
{
	if (f < absoluteZeroF) error("\nCannot convert a value below absolute zero!\n");

	double c = (f - 32.0) * (5.0 / 9.0);
	return c;
}

void tempConverter()
{
	int userSelection = 0;

	std::cout << "What conversion would you like to make?\n"
		<< "1. Celsius to Fahrenheight\n"
		<< "2. Fahrenheight to Celsius\n\n";

	std::cin >> userSelection;

	std::cout << '\n';

	double temperature = 0.0;
	double f = 0.0;
	double c = 0.0;

	switch (userSelection)
	{
	case 1:		
		std::cout << "Enter temperature in Celsius: ";
		std::cin >> temperature;
		f = ctof(temperature);
		std::cout << f << " Degrees Fahrenheight\n\n";
		break;

	case 2:
		std::cout << "Enter temperature in Fahrenheight: ";
		std::cin >> temperature;
		c = ftoc(temperature);
		std::cout << c << " Degrees Celsius\n\n";
		break;

	default:
		error("Invalid selection!");
		break;
	}

}