#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name, present, city, yourName;
	int age;
	cout << "Enter a name: ";
	getline(cin, name);
	cout << "Enter a present they bought: ";
	getline(cin, present);
	cout << "Enter the city they are from: ";
	getline(cin, city);
	cout << "Enter your name: ";
	getline(cin, yourName);
	cout << "Enter your age: ";
	cin >> age;
	cout << endl << endl;
	cout << "Dear " << name << "," << endl;
	cout << "Thank you for the " << present << ". "
		<< "I really like it. I can't believe I'm "
		<< "already " << age << " years old, but it "
		<< "doesn't feel that much different than "
		<< "being " << age - 1 << ". I hope that some "
		<< "time this year we can visit you in "
		<< city << "." << endl << endl;
	cout << "Again, thank you for the " << present << "."
		<< endl << endl;
	cout << "Sincerely, " << endl << endl;
	cout << yourName << endl << endl;
	return 0; 
}