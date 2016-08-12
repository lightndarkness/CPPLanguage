#include "Person.h"
#include <iostream>

Person::Person()
{
}

Person::Person(std::string first, std::string last, int arbitrary) : 
	firstName(first), lastName(last), arbitraryNumber(arbitrary), pResource(nullptr)
{
	std::cout << "Constructing " << GetName() << std::endl;
}

Person::Person(const Person& p) : 
	firstName(p.firstName), lastName(p.lastName), arbitraryNumber(p.arbitraryNumber), 
	pResource(new Resource(p.pResource->GetName()))
{
	std::cout << "Constructing a copy of " << GetName() << " with the copy constructor." << std::endl;
}

Person::~Person()
{
	std::cout << "Destructing " << GetName() << std::endl;
	delete pResource;
}

std::string Person::GetName()
{
	return firstName + " " + lastName;
}

void Person::SetFirstName(std::string newFirstName)
{
	firstName = newFirstName;
}

void Person::SetLastName(std::string newLastName)
{
	lastName = newLastName;
}

bool Person::operator<(Person & p)
{
	return arbitraryNumber < p.arbitraryNumber;
}

bool Person::operator<(int i)
{
	return arbitraryNumber < i;
}

Person& Person::operator=(const Person& p)
{
	std::cout << "Operator = called." << std::endl;
	firstName = p.firstName;
	lastName = p.lastName;
	arbitraryNumber = p.arbitraryNumber;
	delete pResource;
	pResource = new Resource(p.pResource->GetName());
	//pResource = std::make_unique<Resource>(p.pResource->GetName()); 
	return *this;
}

void Person::AddResource()
{
	delete pResource;
	pResource = new Resource("Resource for " + GetName());
	//pResource.reset();
	//pResource = std::make_unique<Resource>("Resource for " + GetName());
	//pResource = std::make_shared<Resource>("Resource for " + GetName());
}

bool operator<(int i, Person& p)
{
	return i < p.GetNumber();
}
