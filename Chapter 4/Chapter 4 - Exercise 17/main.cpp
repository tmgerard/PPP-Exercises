/*
*	Chapter 4 - Exercise 17
*
*	Write a program that finds the min, max, and mode of a sequence of strings.
*/

#include "../../Include/std_lib_facilities.h"

int main()
{
	std::cout << "***********************************\n";
	std::cout << "MIN, MAX, AND MODE FOR STRINGS\n";
	std::cout << "***********************************\n\n";

	std::cout << "Enter a series of strings separated by spaces. (end with \"|\")\n";

	std::string userInput = "";
	vector<std::string> stringList;
	
	while (true)
	{
		std::cin >> userInput;

		if (userInput == "|")
			break;

		stringList.push_back(userInput);
	}

	sort(stringList.begin(), stringList.end());

	vector<int> stringCounts;
	std::string currentString = stringList[0];
	int currentCount = 1;

	std::string max = stringList[0];
	std::string min = stringList[0];
	std::string mode = "";
	int modeCount = 0;

	for (size_t i = 1; i < stringList.size(); ++i)
	{
		// add to current count
		if (stringList[i] == currentString)
		{
			currentCount++;
		}

		// update the mode values
		if (currentCount > modeCount)
		{
			modeCount = currentCount;
			mode = currentString;
		}

		// max and min length strings
		if (max.length() < stringList[i].length())
			max = stringList[i];

		if (min.length() > stringList[i].length())
			min = stringList[i];

		// restart count on new string
		if (stringList[i] != currentString)
		{
			currentString = stringList[i];
			currentCount = 1;
		}
	}

	std::cout << "\nMax: " << max << '\n';
	std::cout << "Min: " << min << '\n';
	std::cout << mode << " is the mode and occurs " << modeCount << " times.\n\n";

	keep_window_open();

	return 0;
}