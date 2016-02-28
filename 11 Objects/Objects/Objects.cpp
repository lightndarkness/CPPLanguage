// Objects.cpp : Defines the entry point for the console application.
//

#include "Rectangle.h"

int main()
{
	int x;
	int y{};
	int z{ 1 };

	Rectangle uninitialized;
	Rectangle value{}; 
	Rectangle aggregate{ 2, 3 }; 

	value._width = 2;
	value._height = 3;

	return 0;
}

