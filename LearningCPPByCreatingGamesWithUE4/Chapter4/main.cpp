#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = 10;
#pragma region WhileLoop
	while (x <= 5) // may only enter the body of the while when x <= 5
	{
		cout << "x is " << x << endl;
		x++;
	}

	while (x <= 10)
	{
		cout << "x is " << x << endl;
		x++;
	}

	while (y >= 1)
	{
		cout << "y is " << y << endl;
		y--;
	}
	x = 2;
	while (x <= 20)
	{
		cout << "x is " << x << endl;
		x += 2;
	}
	y = 1;
	while (y <= 16)
	{
		cout << y << " : " << (y * y) << endl;
		y++;
	}
#pragma endregion

#pragma region Do/While
	x = 1;
	do
	{
		cout << "x is " << x << endl;
		x++;
	} while (x <= 5);
#pragma endregion

#pragma region ForLoop
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += i;
	}
	cout << sum << endl;
#pragma endregion



	cout << "Finished" << endl;
	return 0;
}