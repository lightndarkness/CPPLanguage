// FlowAndOperators.cpp : Defines the entry point for the console application.
//

#include <iostream>

int main()
{
	int x {2};
	int y {0};
	if (x > 3)
	{
		y++;
	}
	else
	{
		y--;
	}
	for (int i = 0; i < x; i++)
	{
		std::cout << i << std::endl;
	}

	while (x < 4)
	{
		int j{ 2 };
		x += j;
	}

	y = x++;
	y = ++x;

	switch (x)
	{
	case 4:
		std::cout << "x is four" << std::endl;
		break;
	case 5:
		std::cout << "x is five" << std::endl;
		break;
	case 6:
		std::cout << "x is six" << std::endl;
		break;
	default:
		std::cout << "x is less than 4 or more than 6" << std::endl;
		break;
	}

	x = (y > 5) ? 5 : 10;


	return 0;
}

