// Memory.cpp : Defines the entry point for the console application.
//

#include "Person.h"
#include <iostream>

using namespace std;

int main()
{
	Person Kate("Kate", "Gregory", 345);
	Kate.AddResource();
	Kate.SetFirstName("Kate2");
	Kate.AddResource();
	Person Kate2 = Kate;
	Kate = Kate2;
	string s1 = Kate.GetResourceName();
	Person Gianni(Kate);
	Gianni.SetNumber(10081986);
	Gianni.SetFirstName("Gianni");
	Gianni.SetLastName("Casole");
	Gianni.AddResource();
	return 0;
}