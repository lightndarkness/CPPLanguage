// String.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>

int main()
{
	int i{ 2 };
	std::string Hello{ "Hello" };
	Hello += " World!";
	std::cout << Hello << std::endl;
	if (Hello == "Hello World!")
	{
		std::cout << "equal" << std::endl;
	}
	else
	{
		std::cout << "not equal" << std::endl;
	}

	return 0;
}

