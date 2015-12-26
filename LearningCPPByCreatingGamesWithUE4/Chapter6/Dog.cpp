// Dog.cpp

#include "Dog.h"

Dog::Dog()
{
	cout << "A dog is born!" << endl;
}
Dog::~Dog()
{
	cout << "A dog has died" << endl;
}

void Dog::talk()
{
	cout << "Woof!" << endl;
}
// implements walking for a dog
void Dog::walk()
{
	cout << "Left front paw & back right paw, right front paw" << endl;
}