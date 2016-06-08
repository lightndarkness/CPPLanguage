// ClassesAndObjects.cpp : Defines the entry point for the console application.
//

#include "Person.h"
#include "Tweeter.h"
#include "Status.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	Person p1("Gianni", "Casole", 123);
	Person p2("Kate", "Gregory", 456);
	cout << "p1 is ";
	if (!(p1 < p2))
		cout << "not ";
	cout << "less than p2" << endl;

	cout << "p1 is ";
	if (!(p1 < 300))
		cout << "not ";
	cout << "less than 300" << endl;

	cout << "300 is ";
	if (!(300 < p1))
		cout << "not ";
	cout << "less than p1" << endl;

	cout << "after innermost block" << endl;
	cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;
	p1.SetNumber(124);
	cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;

	Status s = Pending;
	s = Approved;

	return 0;
}