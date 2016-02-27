#include <iostream>
#include <string>

using namespace std;

struct Vector	// BEGIN Vector OBJECT DEFINITION
{
	float x, y, z;	// x, y, and z positions all floats
};					// END Vector OBJECT DEFINITION
					// The computer now knows what a Vector is
					// So we can create one.

struct Player
{
	int goldPieces;
	float hp;
	string name;
	Vector position;
};

int main()
{

	int goldPiesces;
	float hp;
	string name;

	name = "Gianni";	// That's my name
	goldPiesces = 322;	// starts with this much gold
	hp = 75.5f;			// hit points are decimal valued
						// = is called the assignement operator

	cout << "Character " << name << " has "
		<< hp << " hp and " << goldPiesces << " gold." << endl;

	Vector v;	// Create a Vector instance called v

	v.x = 20, v.y = 30, v.z = 40; // assign some values

	cout << "A 3-space vector at " << v.x << ", " << v.y << ", " << v.z << endl;

	Player p;

	p.goldPieces = 322;
	p.hp = 75.5f;
	p.name = "Gianni";
	p.position.x = p.position.y = p.position.z = 0;

	cout << "Character " << p.name << " has "
		<< p.hp << " hp and " << p.goldPieces << " gold." << endl;

	Player* ptrP; // Declaring a pointer
				  //string name = "Gianni";
	string* ptrName = &name;

	ptrP = &p;

	ptrP->hp -= 33;	// reduced the player's hp by 33
	ptrP->name = "John"; // changed his name to John

	cout << *ptrName << endl; // print the value of the variable that the pointer is pointing to
	cout << ptrName << endl; // print the address of the variable that the pointer is pointing to
	cout << &ptrName << endl; // print the address of the pointer
	cout << name << endl; // print the value of the variable
	cout << &name << endl; // print the address of the variable

	char character = 'A';
	int integer = 1;
	printf("integer %d, character %c\n", integer, character);
	printf("string %s\n", name.c_str());

	printf("HI! Insert your name and age!\n");
	cin >> name;
	int age;
	cin >> age;
	printf("Name: %s Age: %d\n", name.c_str(), age);

	return 0;
}