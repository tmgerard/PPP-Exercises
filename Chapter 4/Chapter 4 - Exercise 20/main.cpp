/*
*	Chapter 4 - Exercise 20
*
*	Modify the program from exercise 19 so that when you enter a name, the
*	program will output the corresponding score or name not found.
*/

#include "../../Include/std_lib_facilities.h"

int main()
{
	std::cout << "***********************************\n";
	std::cout << "NAME-VALUE PAIRS\n";
	std::cout << "***********************************\n\n";

	std::cout << "Enter name and score separated by a space. Type NoName 0 to terminate input.\n\n";

	std::string userName = "";
	int userScore = 0;

	vector<std::string> names;
	vector<int> scores;
	const std::string endLoop = "NoName";

	while (userName != endLoop)
	{
		std::cin >> userName >> userScore;

		// check to see if name is a duplicate
		for (size_t i = 0; i < names.size(); ++i)
		{
			if (userName == names[i])
			{
				std::cerr << "Duplicate name entered! Program will terminate!\n\n";
				keep_window_open();
				exit(EXIT_FAILURE);
			}
		}

		if (userName != endLoop)
		{
			names.push_back(userName);
			scores.push_back(userScore);
		}
	}

	std::cout << "\n\n";

	std::cout << "Enter a name to output the score. Type NoName to terminate Output\n\n";

	userName = "";
	bool nameFound = false;
	std::string outputName = "";
	int outputScore = 0;

	while (userName != endLoop)
	{
		std::cin >> userName;
		if (userName != endLoop)
		{

			for (size_t i = 0; i < names.size(); ++i)
			{
				if (userName == names[i])
				{
					nameFound = true;
					outputName = names[i];
					outputScore = scores[i];
				}
			}

			if (nameFound)
			{
				std::cout << outputName << '\t' << outputScore << '\n';
			}
			else
			{
				std::cout << "name not found\n";
			}

		}

		nameFound = false;
	}
	std::cout << "\n\n";

	keep_window_open();

	return 0;
}