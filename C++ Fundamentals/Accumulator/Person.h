#include <string>

class Person
{
public:
	Person();
	Person(std::string first, std::string last, int arbitrary);
	
	~Person();

	std::string GetName();
	int GetNumber() const { return arbitraryNumber; }
	void SetNumber(int number) { arbitraryNumber = number; }

	bool operator<(Person& p);
	bool operator<(int i);


private:
	std::string firstName;
	std::string lastName;

	int arbitraryNumber;
};
bool operator<(int i, Person& p);