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

	std::string GetName() const;
	int GetNumber() const { return arbitraryNumber; }
	void SetNumber(int number) { arbitraryNumber = number; }

	bool operator<(const Person& p) const;
	bool operator<(int i) const;
	friend bool operator<(int i, const Person& p);


private:
	std::string firstName;
	std::string lastName;

	int arbitraryNumber;
};
//bool operator<(int i, Person& p);
//#endif // !_Person_H