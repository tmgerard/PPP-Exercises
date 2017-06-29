/*
*	Chapter 6 - Exercise 4
*
*	Define a class Name_value that holds a string and a value. Rework exercise
*	19 in Chapter 4 to use a vector<Name_value> instead of two vectors.
*/

#include "../../Include/std_lib_facilities.h"

class Name_value {
public:
	string name;
	int value;
public:
	Name_value(string userName, int val)
		: name(userName), value(val)
	{
	}
};

int main()
{
	std::cout << "***********************************\n";
	std::cout << "NAME-VALUE PAIRS\n";
	std::cout << "***********************************\n\n";

	std::cout << "Enter name and score separated by a space. Type NoName 0 to terminate input.\n\n";

	std::string userName = "";
	int userScore = 0;

	vector<Name_value> users;
	const std::string endLoop = "NoName";

	while (userName != endLoop)
	{
		std::cin >> userName >> userScore;

		// check to see if name is a duplicate
		for (size_t i = 0; i < users.size(); ++i)
		{
			if (userName == users[i].name)
			{
				std::cerr << "Duplicate name entered! Program will terminate!\n\n";
				keep_window_open();
				exit(EXIT_FAILURE);
			}
		}

		if (userName != endLoop)
		{
			users.push_back(Name_value(userName, userScore));
		}
	}

	std::cout << "\n\n";

	for (size_t i = 0; i < users.size(); ++i)
	{
		std::cout << users[i].name << "\t" << users[i].value << '\n';
	}

	std::cout << "\n\n";

	keep_window_open();

	return 0;
}