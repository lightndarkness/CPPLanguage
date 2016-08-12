#ifndef _Person_H
#define _Person_H


#include <string>

class Person
{
public:
	Person();
	Person(std::string first, std::string last, int arbitrary);
	Person(const Person& p);
	
	~Person();

	std::string GetName();
	int GetNumber() { return arbitraryNumber; }
	void SetNumber(int number) { arbitraryNumber = number; }

	bool operator<(Person& p);
	bool operator<(int i);

private:
	std::string firstName;
	std::string lastName;

	int arbitraryNumber;
};

bool operator<(int i, Person& p);
#endif // !_Person_H