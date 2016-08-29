// recursive-factorial.cpp
#include <cstdio>
#include <iostream>
using namespace std;

//unsigned long int factorial(unsigned long int n)
//{
//	if (n < 2) return 1;
//	return factorial(n - 1) * n;
//}

const unsigned long int& factorial(unsigned long int& n);


int main()
{
	unsigned long int theNumber;
	printf("Insert a number and I'll compute the factorial: ");
	cin >> theNumber;
	unsigned long int n = theNumber;
	
	printf("Factorial of %ld is %ld\n", theNumber, factorial(n));

	return 0;
}

const unsigned long int& factorial(unsigned long int& n)
{
	static unsigned long int fact;
	fact = 1;

	while (!(n < 2))
	{
		fact *= n * (n - 1);
		n -= 2;
	}

	return fact;
}