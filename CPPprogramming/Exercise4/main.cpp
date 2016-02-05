#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName, lastName;
	firstName = "Gianni";
	lastName = "Casole";
	cout << "Hello, " << firstName << " " << lastName << endl;
	int age = 29;
	string fullName = firstName + " " + lastName;
	cout << "Hello, " << fullName << endl;
	cout << "You are " << age << " years old." << endl;
	cout << "Next year you will be ";
	cout << age + 1 << " years old." << endl;
	return 0;
}