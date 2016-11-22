/*
*	Chapter 4 - Exercise 16
*
*	In the drill, you wrote a program that, given a series of numbers, found
*	the max and min of that series. The number that appears the most times in a
*	sequence is called the mode. Create a program that finds the mode of a set 
*	positive integers.
*/

#include "../../Include/std_lib_facilities.h"

int main()
{
	std::cout << "***********************************\n";
	std::cout << "FIND THE MODE\n";
	std::cout << "***********************************\n\n";

	std::cout << "Enter series of positive integers to find the mode \n(type a character to end integer input)\n\n";

	vector<int> inputValues;
	int userInput = 0;
	int inputCount = 0;
	int maxValue = 0;
	int minValue = 10000000;

	// get user input
	while (true)
	{
		std::cout << ">> ";
		std::cin >> userInput;

		if (!cin)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}

		if (userInput > maxValue)
			maxValue = userInput;

		if (userInput < minValue)
			minValue = userInput;

		inputValues.push_back(userInput);

		++inputCount;

	}

	vector<int> histogram;

	for (int i = 0; i < maxValue; ++i)
	{
		histogram.push_back(0);
	}

	for (unsigned int i = 0; i < inputValues.size() - 1; ++i)
	{
		histogram[inputValues[i]]++;
	}

	int mode = 0;
	for (int i = 0; i < maxValue; ++i)
	{
		if (histogram[i] > histogram[mode])
		{
			mode = i;
		}
	}

	std::cout << "\nMax Value = " << maxValue << '\n';
	std::cout << "Min Value = " << minValue << '\n';
	std::cout << "Mode = " << mode << "\n\n";
	
	keep_window_open();

	return 0;
}