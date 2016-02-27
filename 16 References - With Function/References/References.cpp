// References.cpp : Defines the entry point for the console application.
//

void multiply_by_two(int parameter)
{
	parameter = parameter * 2;
}


int main()
{
	int x{ 1 };
	multiply_by_two(x);

	//int& uninit;

	int& xref{ x };
	int const& xconstref{ x };

	xref = 2;      // Assign value 2 to x
	//xconstref = 3; 

	return 0;
}

