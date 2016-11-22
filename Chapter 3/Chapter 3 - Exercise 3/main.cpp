/*
*	Chapter 3 - Exercise 3
*
*	Write a program that doesn't do anything, but declares a number of
*	variables with legal and illegal names (such as int double = 0;), so
*	that you can see how the compiler reacts.
*/

int main()
{
	// valid
	double val = 0.0;
	int val2 = 0;

	// invalid
	double int = 0;
	double double = 0;
	val3 = 0;
}