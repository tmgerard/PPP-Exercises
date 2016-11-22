/*
*	Chapter 3 - Exercise 5
*
*	Modify the program above (Exercise 4) to ask the user to enter floating-point values
*	and store them in double variables. Compare the outputs of the two programs for some
*	inputs of your choice. Are the results the same? Should they be? What's the difference?
*/

#include "../std_lib_facilities.h"

int main()
{
	std::cout << "**************************\n";
	std::cout << "FLOATING-POINT COMPARISON\n";
	std::cout << "**************************\n\n";

	std::cout << "Please enter two floating-point values separated by a space: ";

	double val1 = 0;
	double val2 = 0;

	std::cin >> val1 >> val2;

	if (val1 > val2)
	{
		std::cout << "\nLarger Value: " << val1 << '\n';
		std::cout << "Smaller Value: " << val2 << '\n';
	}
	else
	{
		std::cout << "\nLarger Value: " << val2 << '\n';
		std::cout << "Smaller Value: " << val1 << '\n';
	}

	std::cout << "Sum: " << val1 + val2 << '\n';
	std::cout << "Difference: " << val1 - val2 << '\n';
	std::cout << "Product: " << val1 * val2 << '\n';
	std::cout << "Ratio: " << val1 / val2 << '\n' << '\n';

	keep_window_open();

	return 0;
}