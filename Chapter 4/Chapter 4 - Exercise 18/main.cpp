/*
*	Chapter 4 - Exercise 18
*
*	Write a program to solve the quadratic equation. A quadratic equation is of the form
*
*							ax^2 + bx + c = 0
*	
*	If you don't know the quadratic formula for solving such an expression, do some research.
*	Remember, researching how to solve a problem is often necessary before a programmer can
*	teach the computer how to solve it. Use doubles for the user inputs for a, b, and c. Since
*	there are two solutions to a quadratic equation, output both x1 and x2.
*/

#include "../../Include/std_lib_facilities.h"

int main()
{
	std::cout << "***********************************\n";
	std::cout << "QUADRATIC EQUATION SOLVER\n";
	std::cout << "***********************************\n\n";

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
		std::cout << "Roots are imaginary\n";
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

	keep_window_open();

	return 0;
}