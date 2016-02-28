// Inheritance.cpp : Defines the entry point for the console application.
//


#include "NamedRectangle.h"

int main()
{
	NamedRectangle fred_rectangle{ "Fred", 3, 4 };
	int fred_area{ fred_rectangle.area() };

	Rectangle unnamed_rectangle{ fred_rectangle };

	Rectangle& fred_ref{ fred_rectangle };
	fred_ref.resize(6, 8);
	fred_area = fred_rectangle.area();

	//std::string fredname = fred_ref.get_name();
	std::string fredname = fred_rectangle.get_name();


	return 0;
}

