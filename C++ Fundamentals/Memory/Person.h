#include "Resource.h"
#include <string>
#include <memory>

class Person
{
public:
	Person();
	Person(std::string first, std::string last, int arbitrary);
	Person(const Person& p);
	
	~Person();

	std::string GetName();
	int GetNumber() { return arbitraryNumber; }
	std::string GetResourceName() const { return pResource->GetName(); }
	void SetNumber(int number) { arbitraryNumber = number; }
	void SetFirstName(std::string newFirstName);
	void SetLastName(std::string newLastName);

	bool operator<(Person& p);
	bool operator<(int i);
	Person& operator=(const Person& p);
	void AddResource();


private:
	std::string firstName;
	std::string lastName;

	int arbitraryNumber;
	Resource* pResource;
	//std::unique_ptr<Resource> pResource;
	//std::shared_ptr<Resource> pResource;
};

bool operator<(int i, Person& p);