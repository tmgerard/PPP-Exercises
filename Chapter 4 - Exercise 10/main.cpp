/*
*	Chapter 8 - Exercise 10
*
*	Write a program that plays the game "Rock, Paper, Scissors." If you are not
*	familiar with the game do some research (e.g., on the web using Google).
*	Research is a common task for programmers. Use a switch-statement to solve
*	this exercise. Also, the machine should give random answers (i.e., select
*	the next rock, paper, or scissors randomly). Real randomness is too hard to
*	provide right now, so just build a vector with a sequence of values to be used
*	as "the next value." If you build the vector into the program, it will always
*	play the same game, so maybe you should let the user enter some values. Try
*	variations to make it less easy for the user to guess which moves the machine
*	will make next.
*/

#include "../std_lib_facilities.h"

int main()
{
	std::cout << "***********************************\n";
	std::cout << "ROCK, PAPER, SCISSORS\n";
	std::cout << "***********************************\n\n";

	char userInput = '0';
	vector<char> gameSequence = { '1', '2', '3', '2', '1', '2', '3' };
	size_t gameCount = 1;
	int wins = 0;
	int losses = 0;
	int ties = 0;

	while (userInput != 'q')
	{
		if (gameCount > gameSequence.size())
			break;

		std::cout << "Wins: " << wins << "\nLosses: " << losses << "\nTies: " << ties << "\n\n";

		std::cout << "Game " << gameCount  << '\n'
			<<"Choose your weapon\n"
			<< "1 - rock\n"
			<< "2 - paper\n"
			<< "3 - scissors\n"
			<< "q - quit program\n\n";

		std::cin >> userInput;

		switch (userInput)
		{
		case '1':
			if (gameSequence[gameCount - 1] == '1')
			{
				std::cout << "rock vs. rock result in a tie!\n\n";
				ties++;
				gameCount++;
			}
			else if (gameSequence[gameCount - 1] == '2')
			{
				std::cout << "paper beats rock - You Lose!\n\n";
				losses++;
				gameCount++;
			}
			else if (gameSequence[gameCount - 1] == '3')
			{
				std::cout << "rock beats scissors - You Win!\n\n";
				wins++;
				gameCount++;
			}
			break;

		case '2':
			if (gameSequence[gameCount - 1] == '1')
			{
				std::cout << "paper vs. rock - You Win!\n\n";
				wins++;
				gameCount++;
			}
			else if (gameSequence[gameCount - 1] == '2')
			{
				std::cout << "paper vs. paper results in a tie!\n\n";
				ties++;
				gameCount++;
			}
			else if (gameSequence[gameCount - 1] == '3')
			{
				std::cout << "scissors beat rock - You Lose!\n\n";
				losses++;
				gameCount++;
			}
			break;

		case '3':
			if (gameSequence[gameCount - 1] == '1')
			{
				std::cout << "scissors beat rock - You Lose!\n\n";
				losses++;
				gameCount++;
			}
			else if (gameSequence[gameCount - 1] == '2')
			{
				std::cout << "scissors beat paper - You Win!\n\n";
				wins++;
				gameCount++;
			}
			else if (gameSequence[gameCount - 1] == '3')
			{
				std::cout << "scissors vs. scissors results in a tie!\n\n";
				ties++;
				gameCount++;
			}
			break;

		default:
			std::cout << "You did not choose a valid weapon!\n\n";
			break;
		}

	}

	keep_window_open();

	return 0;
}