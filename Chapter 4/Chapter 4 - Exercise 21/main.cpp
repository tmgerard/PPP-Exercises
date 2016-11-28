/*
*	Chapter 4 - Exercise 21
*
*	Modify the program from exercise 19 so that when you enter an integer, the
*	program will output all the names with that score or score not found.
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

	std::cout << "Enter a score to output all names with the score. Type -1 to terminate Output\n\n";

	userScore = 0;
	bool scoreFound = false;

	while (userScore != -1)
	{
		std::cin >> userScore;
		if (userScore != -1)
		{

			for (size_t i = 0; i < scores.size(); ++i)
			{
				if (userScore == scores[i])
				{
					scoreFound = true;
					std::cout << '\t' << names[i] << '\n';
				}
			}

			if (!scoreFound)
				std::cout << "\tscore not found\n";

		}

		scoreFound = false;
	}
	std::cout << "\n\n";

	keep_window_open();

	return 0;
}