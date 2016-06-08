#include "Person.h"
#include <iostream>

Person::Person()
{
}

Person::Person(std::string first, std::string last, int arbitrary) : 
	firstName(first), lastName(last), arbitraryNumber(arbitrary)
{
	
}

Person::~Person()
{
	
}

std::string Person::GetName() const
{
	return firstName + " " + lastName;
}

