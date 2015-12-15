#include <iostream>
#include <cmath>
#include <string>
#include "prototypes.h"

using namespace std;

#define	PI 3.14159

#define println(X) cout << X << endl;

string g_string;	// global string variable,
					// accessible to all functions within the program
					// because it is declared before any of the functions 
					// below
int g_int; // global int, has scope until end of file
void func(int arg)
{
	int fx;
} // </fx> dies, </arg> dies

void addA() { g_string += 'A'; }
void addB() { g_string += 'B'; }
void addC() { g_string += 'C'; }

void printRoad()
{
	cout << "*   *" << endl;
	cout << "* | *" << endl;
	cout << "* | *" << endl;
	cout << "*   *" << endl;
}

void printRoad(int numOfSegments)
{
	for (int i = 0; i < numOfSegments; i++)
	{
		cout << "*   *" << endl;
		cout << "* | *" << endl;
		cout << "* | *" << endl;
		cout << "*   *" << endl;
	}
}

int sum(int a, int b)
{
	return a + b;
}

//f(x) = 3x + 4
double f(double x)
{
	return 3 * x + 4;
}

void testFunc()
{
	static int runCount = 0; // this only runs ONCE, even on
							 // subsequent calls to testFunc()!
	cout << "Ran this function " << ++runCount << " times" << endl;
}	// runCount stops being in scope, but does not die here

inline int max(int a, int b)
{
	if (a > b)return a;
	else return b;
}

int main()
{
	//double rootOf5 = sqrt(5); // function call to the sqrt function
	/*cout << sqrt(5) << endl;


	cout << "Program begin!" << endl;
	for (int i = 0; i < 4; i++)
	{
	printRoad();
	}
	cout << "Program end!" << endl;*/

	const double pi = 3.14159;

	printRoad(4); // function call
	cout << sum(5, 4) << endl;
	cout << "Inserisci un numero positivo o negativo: ";
	int userValue;
	cin >> userValue;
	cout << "E' positivo? " << boolalpha << isPositive(userValue) << endl;
	addA(); addB();
	cout << g_string << endl;
	addC();
	cout << g_string << endl;

	int x = 0; // variable <x> has scope starting here...
			   // until the end of main()

	if (x == 0)
	{
		int y; // variable <y> has scope starting here,
			   // until closing brace below
	} // </y> dies
	if (int x2 = x) // variable <x2> created and set equal to <x>
	{
		// enter here if x2 was nonzero
	}	// </x2> dies

	for (int c = 0; c < 5; c++)
	{
		cout << c << endl;
	} // </c> dies only when we exit the loop

	testFunc(); // says 1 time
	testFunc(); // says 2 times!

	cout << boolalpha << isPositive(4) << endl;
	cout << absEqual(4, -4) << endl;

	double r = 4;
	cout << "Circumference is " << 2 * PI*r << endl;

	println("test");

	max(4, 5);

	return 0;

	//pi *= 2;
} // </x> dies
