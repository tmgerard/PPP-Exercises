/*
*	Chapter 4 - Exercise 9
*
*	Try to calculate the number of rice grains that the inventor asked for in
*	exercise 8. You'll find that the number is so large that it won't fit in an
*	int or double. Observe what happens when the number gets too large to represent
*	exactly as an int or a double. What is the largest number of squares for
*	which you can calculate the exact number of grains (using an int)? What is the
*	largest number of squares for which you can calculate the approximate number
*	of grains (using a double)?
*/

#include "../../Include/std_lib_facilities.h"

int main()
{
	std::cout << "***********************************\n";
	std::cout << "TOTAL GRAINS OF RICE\n";
	std::cout << "***********************************\n\n";

	int squares = 64;
	int currentSquare = 1;
	double riceOnSquare = 0;
	double riceTotal = 0;
	bool thousandFlag = false;
	bool millionFlag = false;
	bool billionFlag = false;

	for (currentSquare; currentSquare <= squares; ++currentSquare)
	{
		if (currentSquare == 1)
		{
			riceOnSquare = 1;
		}
		else
		{
			riceOnSquare *= 2;
		}

		riceTotal += riceOnSquare;

		std::cout << "Square " << currentSquare << ": " 
			<< riceOnSquare << " - Running Total = " << riceTotal << '\n';

	}

	keep_window_open();

	return 0;
}