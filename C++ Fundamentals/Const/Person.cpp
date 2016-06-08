#include "Person.h"
#include <iostream>

Person::Person()
{
}

Person::Person(std::string first, std::string last, int arbitrary) : 
	firstName(first), lastName(last), arbitraryNumber(arbitrary)
{
	std::cout << "constructing " << firstName
		<< " " << lastName << std::endl;
}

Person::~Person()
{
	std::cout << "destructing " << firstName
		<< " " << lastName << std::endl;
}

std::string Person::GetName() const
{
	return firstName + " " + lastName;
}

bool Person::operator<(const Person& p) const
{
	return arbitraryNumber < p.arbitraryNumber;
}

bool Person::operator<(int i) const
{
	return arbitraryNumber < i;
}

bool operator<(int i, const Person& p)
{
	return i < p.arbitraryNumber;
}
