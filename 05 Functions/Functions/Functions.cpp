// Functions.cpp : Defines the entry point for the console application.
//

int AddTwo(int i)
{
	return i + 2;
}

int main()
{
	int i{ 4 };
	int j{ AddTwo(i) };
	AddTwo(j);
	j = AddTwo(j);
	return 0;
}

