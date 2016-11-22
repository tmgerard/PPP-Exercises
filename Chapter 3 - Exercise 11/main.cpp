/*
*	Chapter 3 - Exercise 11
*
*	Write a program that prompts the user to enter some number of pennies (1-cent coins),
*	nickels (5-cent coins), dimes (10-cent coins), quarters (25-cent coins), half dollars
*	(50-cent coins), and one-dollar coins (100-cent coins). Query the user separately for
*	number of each size coin, e.g. "How many pennies do you have?" Then your program should
*	print out something like this:
*
*	You have 23 pennies.
*	You have 17 nickels.
*	You have 14 dimes.
*	You have 7 quarters.
*	You have 3 half dollars.
*	The value of all of your coins is 573 cents.
*
*	Make some improvements: if only one of a coin is reported, make the output grammatically
*	correct, e.g. 14 dimes and 1 dime (not 1 dimes). Also, report the sum in dollars and cents
*	i.e., $5.73 instead of 573 cents.
*/

#include "../std_lib_facilities.h"

int main()
{
	std::cout << "****************************\n";
	std::cout << "LOOSE CHANGE CALCULATOR\n";
	std::cout << "****************************\n\n";

	// Process input

	double totalChange = 0;

	int pennies = 0;
	std::cout << "How many pennies do you have? ";
	std::cin >> pennies;

	if (pennies < 0)
	{
		pennies = 0;
	}

	totalChange += pennies;

	int nickels = 0;
	std::cout << "How many nickels do you have? ";
	std::cin >> nickels;

	if (nickels < 0)
	{
		nickels = 0;
	}

	totalChange += 5 * nickels;

	int dimes = 0;
	std::cout << "How many dimes do you have? ";
	std::cin >> dimes;

	if (dimes < 0)
	{
		dimes = 0;
	}

	totalChange += 10 * dimes;

	int quarters = 0;
	std::cout << "How many quarters do you have? ";
	std::cin >> quarters;

	if (quarters < 0)
	{
		quarters = 0;
	}

	totalChange += 25 * quarters;

	int halfDollars = 0;
	std::cout << "How many half dollars do you have? ";
	std::cin >> halfDollars;

	if (halfDollars < 0)
	{
		halfDollars = 0;
	}

	totalChange += 50 * halfDollars;

	int oneDollars = 0;
	std::cout << "How many one dollar coins do you have? ";
	std::cin >> oneDollars;

	if (oneDollars < 0)
	{
		oneDollars = 0;
	}

	totalChange += 100 * oneDollars;

	// Output
	std::cout << '\n';

	if (pennies == 1)
	{
		std::cout << "You have " << pennies << " penny.\n";
	}
	else if (pennies > 1)
	{
		std::cout << "You have " << pennies << " pennies.\n";
	}

	if (nickels == 1)
	{
		std::cout << "You have " << nickels << " nickel.\n";
	}
	else if (nickels > 1)
	{
		std::cout << "You have " << nickels << " nickels.\n";
	}

	if (dimes == 1)
	{
		std::cout << "You have " << dimes << " dime.\n";
	}
	else if (dimes > 1)
	{
		std::cout << "You have " << dimes << " dimes.\n";
	}

	if (quarters == 1)
	{
		std::cout << "You have " << quarters << " quarter.\n";
	}
	else if (quarters > 1)
	{
		std::cout << "You have " << quarters << " quarter.\n";
	}

	if (halfDollars == 1)
	{
		std::cout << "You have " << halfDollars << " half dollar.\n";
	}
	else if (halfDollars > 1)
	{
		std::cout << "You have " << halfDollars << " half dollars.\n";
	}

	if (oneDollars == 1)
	{
		std::cout << "You have " << oneDollars << " one dollar coin.\n";
	}
	else if (oneDollars > 1)
	{
		std::cout << "You have " << oneDollars << " one dollar coins.\n";
	}

	std::cout << "The value of all of your coins is $" << std::fixed << std::setprecision(2) << totalChange / 100.0 << "\n\n";

	keep_window_open();

	return 0;
}