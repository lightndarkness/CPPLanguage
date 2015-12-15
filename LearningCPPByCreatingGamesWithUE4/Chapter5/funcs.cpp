#include "prototypes.h" // every file that uses isPositive,
// absEqual or getGrade must #include "prototypes.h"
int superGlobal; // variable "implementation"
				 // The actual function definitions are here, in the .cpp file

bool isPositive(double value)
{
	return value > 0;
}

bool absEqual(int a, int b)
{
	// Make a and b positive
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	// now since they're both positive,
	// we just have to compare equality of a and b together
	return a == b;
}

char getGrade(int grade)
{
	if (grade >= 80)
		return 'A';
	else if (grade >= 70)
		return 'B';
	else if (grade >= 60)
		return 'C';
	else if (grade >= 50)
		return 'D';
	else
		return 'F';
}