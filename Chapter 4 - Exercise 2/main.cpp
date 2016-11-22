/*
*	Chapter 4 - Exercise 2
*
*	If we define the median of a sequence as "a number so that exactly as many
*	elements come before it in the sequence as come after it," fix the program
*	in section 4.6.3 so that it always prints out a median.
*	Hint: A median need not be an element of the sequence.
*/

#include "../std_lib_facilities.h"

int main()
{

	vector<double> temps;
	for (double temp; std::cin >> temp;)
		temps.push_back(temp);

	// compute mean temperature
	double sum = 0;
	for (double x : temps) sum += x;
	std::cout << "Average temperature: " << sum / temps.size() << '\n';

	// compute the median temperature
	sort(temps);
	if (temps.size() % 2 == 0)
	{
		double calcMedian = 0;
		calcMedian = (temps[(temps.size() - 1) / 2] + temps[(temps.size() + 1 / 2) / 2]) / 2.0;
		std::cout << "Median temperature: " << calcMedian << '\n';
	}
	else
	{
		std::cout << "Median temperature: " << temps[(temps.size()) / 2] << '\n';
	}
	

	return 0;
}