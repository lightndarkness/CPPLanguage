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

Person::Person(const Person & p) : 
	firstName(p.firstName), lastName(p.lastName), arbitraryNumber(p.arbitraryNumber)
{
	std::cout << "constructing " << firstName
		<< " " << lastName << std::endl;
}

Person::~Person()
{
	std::cout << "destructing " << firstName
		<< " " << lastName << std::endl;
}

std::string Person::GetName()
{
	return firstName + " " + lastName;
}

bool Person::operator<(Person & p)
{
	return arbitraryNumber < p.arbitraryNumber;
}

bool Person::operator<(int i)
{
	return arbitraryNumber < i;
}

bool operator<(int i, Person& p)
{
	return i < p.GetNumber();
}
