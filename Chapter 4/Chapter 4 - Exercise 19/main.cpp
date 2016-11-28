/*
*	Chapter 4 - Exercise 19
*
*	Write a program where you first enter a set of name-and-value pairs,
*	such as Joe 17 and Barbara 22. For each pair, add the name to a vector called
*	names and the number to a vector called scores (in coresponding positions, so
*	that if names[7] == "Joe" then scores[7] == 17). Terminate input with NoName 0.
*	Check that each name is unique and terminate with an error message if a name is
*	entered twice. Write out all the (name, score) pairs, one per line.
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

	for (size_t i = 0; i < names.size(); ++i)
	{
		std::cout << names[i] << "\t" << scores[i] << '\n';
	}

	std::cout << "\n\n";

	keep_window_open();

	return 0;
}