/*
*	Chapter 5 - Exercise 7
*
*	Quadratic equations are of the form
*
*	ax^2 + bx + c = 0
*
*	To solve these, one uses the quadratic formula:
*
*	x = -b (+/-) sqrt(b^2 - 4ac) / 2a
*
*	There is a problem, though: if b^2 - 4ac is less than zero, then it will
*	fail. Write a program that can calculate the roots of a quadratic equation,
*	given a, b, c. When the program detects an equation with no real roots,
*	have it print out a message. How do you know that your results are
*	plausible? Can you check that they are correct?
*/

#include "../../Include/std_lib_facilities.h"

void quadtratic();

int main()
{
	std::cout << "***********************************\n";
	std::cout << "QUADRATIC EQUATION SOLVER\n";
	std::cout << "***********************************\n\n";

	char loopAgain = 'n';

	double a = 0;
	double b = 0;
	double c = 0;	

	try {
		
		do 
		{
			quadtratic();

			std::cout << "Another conversion (y/n)? ";
			std::cin >> loopAgain;

			std::cout << "\n\n";

		} while (loopAgain == 'y');
						
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

	return 0;
}

void quadtratic()
{
	std::cout << "Enter your coefficients for the quadratic equation\n ax^2 + bx +c = 0\n\n";

	double a = 0;
	double b = 0;
	double c = 0;

	std::cout << "a = ";
	std::cin >> a;

	std::cout << "b = ";
	std::cin >> b;

	std::cout << "c = ";
	std::cin >> c;

	double x1 = 0;
	double x2 = 0;

	double inRoot = (b * b) - (4 * a *c);

	if (inRoot < 0)
	{
		error("Roots are imaginary!\n");
	}
	else if (inRoot == 0)
	{
		x1 = -b / (2 * a);

		std::cout << "\nONE SOLUTION\n";
		std::cout << "x = " << x1 << '\n';
	}
	else
	{
		x1 = (-b + sqrt(inRoot)) / (2 * a);
		x2 = (-b - sqrt(inRoot)) / (2 * a);

		std::cout << "\nTWO SOLUTIONS\n";
		std::cout << "x1 = " << x1 << '\n';
		std::cout << "x2 = " << x2 << "\n\n";
	}
}