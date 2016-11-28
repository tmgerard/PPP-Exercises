/*
*	Chapter 5 - Exercise 2
*
*	The following program takes in a temperature value in Celsius and converts
*	it to Kelvin. This code has many errors in it. Find the errors, list them,
*	and correct the code.
*/

#include "../../Include/std_lib_facilities.h"

double ctok(double c) // converts Celsius to Kelvin
{
	/* int will cause narrowing error */
	// int k = c + 273.15;
	double k = c + 273.15;
	
	/* cannot return an int and needs ; */
	// return int
	return k;
}

int main()
{
	// add a title so you know that the program has started
	std::cout << "***********************************\n";
	std::cout << "CELSIUS TO KELVIN\n";
	std::cout << "***********************************\n\n";

	/* c should be initialized as 0.0 */
	// double c = 0; // declare input variable
	double c = 0.0;

	/* d is not a declared variable */
	// cin >> d; // retrieve temperature to input variable
	cin >> c;

	/* The function ctok takes a double as an input and not a string */
	// double k = ctok("c"); // convert temperature
	double k = ctok(c);

	/* Cout should be cout and /n should be \n */
	// Cout << k << '/n'; // print out temperature
	cout << k << '\n';

	// add keep_window_open() to book code
	keep_window_open();
}