// References.cpp : Defines the entry point for the console application.
//



int main()
{
	int x{ 1 };
	int y{ x }; // y is a copy of x
	y = 2;

	int& xref{ x };

	x = 2;       // Assigns the value 2 to x
	xref = 3;    // Assigns the value 3 to x

	int copy{ xref }; // Copies x to a new object named copy


	return 0;
}

