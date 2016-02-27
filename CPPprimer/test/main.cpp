/*
*	A simple program that prompt the user to insert two variables and give the pruduct
*
*	Author: Gianni
*	Created: 03/01/2016
*/

#include <iostream>
#include "Sales_item.h"

using std::cout;
using std::cin;
using std::endl;

int getFactorial(int number) {
	int sum;

	if (number == 1) sum = 1;
	else sum = getFactorial(number - 1) * number;

	return sum;
}

void add(int* value) {
	*value += 2;
}

int main()
{
	int largestNumber = 2147483647;

	int num = 5;

	cout << "1: " << getFactorial(1) << endl;
	cout << "2: " << getFactorial(3) << endl;

	add(&num);

	cout << num << endl;

	cout << "Largest Number: " << largestNumber << endl;

	Sales_item book, book2;

	cin >> book >> book2;

	cout << book + book2 << endl;

	return 0;
}