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
	return 0;
}