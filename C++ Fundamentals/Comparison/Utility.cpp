#include "Utility.h"
#include <iostream>

bool IsPrime(int x)
{
	bool prime = true;
	for (int i = 2; i <= x / i; i++)
	{
		int factor = x / i;
		if (factor * i == x)
		{
			std::cout << "factor found: " << factor << std::endl;
			prime = false;
			break;
		}
	}

	return prime;
}

bool Is2MorePrime(int x)
{
	x += 2;
	return IsPrime(x);
}

//int& BadFunction()
//{
//	int a = 3;
//	return a;
//}