/*
*	Chapter 4 - Exercise 8
*
*	There is an old story that the emperor wanted to thank the inventor of the game
*	of chess and asked the inventor to name his reward. The inventor asked for one
*	grain of rice for the first square, 2 for the second, 4 for the third, and so on,
*	doubling for each of the 64 squares. That may sound modest, but there wasn't that
*	much rice in the empire! Write a program to calculate how many squares are required
*	to give the inventor at least 1,000 grains of rice, at least 1,000,000 grains, and
*	at least 1,000,000,000 grains. You'll need a loop, or course, and probably an int
*	to keep track of which square you are at, an int to keep the number of grains on the
*	current square, and an int to keep track of the grains on all previous squares. We
*	suggest that you write out the value of all your variables for each iteration of the
*	loop so that you can see what's going on.
*/

#include "../std_lib_facilities.h"

int main()
{
	std::cout << "**************************************\n";
	std::cout << "GRAINS OF RICE TO EXCEED GIVEN VALUES\n";
	std::cout << "**************************************\n\n";

	int squares = 64;
	int currentSquare = 1;
	int riceOnSquare = 0;
	int riceTotal = 0;
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

		// std::cout << "Square " << currentSquare << ": " << riceOnSquare << " - Running Total = " << riceTotal << '\n';

		if (riceTotal > 1000 && thousandFlag == false)
		{
			std::cout << currentSquare << " squares required to exceed 1,000 grains of rice.\n\n";
			thousandFlag = true;
		}

		if (riceTotal > 1000000 && millionFlag == false)
		{
			std::cout << currentSquare << " squares required to exceed 1,000,000 grains of rice.\n\n";
			millionFlag = true;
		}

		if (riceTotal > 1000000000 && billionFlag == false)
		{
			std::cout << currentSquare << " squares required to exceed 1,000,000 grains of rice.\n\n";
			billionFlag = true;
		}

	}

	keep_window_open();

	return 0;
}