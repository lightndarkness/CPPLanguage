// Objects.cpp : Defines the entry point for the console application.
//

#include "Rectangle.h"

int main()
{
	Rectangle uninitialized;
	Rectangle value{}; 
	Rectangle aggregate{ 4, 7 }; 

	int area_of_value{ value.area() };
	int area_of_aggregate{ aggregate.area() };

	return 0;
}

