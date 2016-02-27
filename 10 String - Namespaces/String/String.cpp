// String.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string Hello{ "Hello" };
	Hello += " World!";
	cout << Hello << endl;
	if (Hello == "Hello World!")
	{
		cout << "equal" << endl;
	}
	else
	{
		cout << "not equal" << endl;
	}

	return 0;
}

