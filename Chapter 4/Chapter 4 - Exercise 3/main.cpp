/*
*	Chapter 4 - Exercise 3
*
*	Read a sequence of double values into a vector. Think of each value as the
*	distance between two cities along a given route. Compute and print the total
*	distance (the sum of all distances). Find and print the smallest and greatest
*	distance between two neighboring cities. Find and print the mean distance
*	between two neighboring cities.
*/

#include "../../Include/std_lib_facilities.h"

int main()
{
	std::cout << "******************************\n";
	std::cout << "DISTANCE BETWEEN CITIES\n";
	std::cout << "******************************\n\n";

	std::cout << "Enter distances for various portions of a trip between two cities\n";
	std::cout << "End input with a character (Ex. 10.5 1.2 30.0 |).\n\n";

	vector<double> routeDistances;

	for (double distance; std::cin >> distance;)
		routeDistances.push_back(distance);

	// compute the total distance
	double totalDistance = 0;
	for (double x : routeDistances) totalDistance += x;

	std::cout << '\n';

	std::cout << "Total distance between cities: " << totalDistance << '\n';

	double maxValue = routeDistances[0];
	double minValue = routeDistances[0];

	for (int i = 1; i < routeDistances.size(); i++)
	{
		if (routeDistances[i] > maxValue) maxValue = routeDistances[i];
		if (routeDistances[i] < minValue) minValue = routeDistances[i];
	}

	std::cout << "Minimum distance: " << minValue << '\n';

	std::cout << "Maximum distance: " << maxValue << '\n';

	std::cout << "Mean distance: " << totalDistance / routeDistances.size() << "\n\n";

	return 0;
}