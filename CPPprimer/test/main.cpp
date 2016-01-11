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

int main()
{
	Sales_item book, book2;

	cin >> book >> book2;

	cout << book + book2 << endl;

	return 0;
}