// Types.cpp : Defines the entry point for the console application.
//

#include <iostream>

int main()
{
	int i{ 2 };
	i = static_cast<int>(3.2);
	i = static_cast<int>(2.9);
	i = -1;
	std::cout << i << std::endl;
	

	double d{ 2.7 };
	std::cout << d << std::endl;
	i = static_cast<int>(d);
	d = i;

	unsigned int u{ 0 };
	u = -2;

	bool flag{ true };
	flag = false;
	flag = static_cast<bool>(7);
	std::cout << flag << std::endl;



	return 0;
}

