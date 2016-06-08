#pragma once

#include <string>
//#ifndef _Person_H
//#define _Person_H



class Person
{
public:
	Person();
	Person(std::string first, std::string last, int arbitrary);
	
	~Person();

	virtual std::string GetName() const;
	int GetNumber() const { return arbitraryNumber; }
	void SetNumber(int number) { arbitraryNumber = number; }
	void SetFirstName(std::string newFirstName) { firstName = newFirstName; }

private:
	std::string firstName;
	std::string lastName;

	int arbitraryNumber;
};
//#endif // !_Person_H