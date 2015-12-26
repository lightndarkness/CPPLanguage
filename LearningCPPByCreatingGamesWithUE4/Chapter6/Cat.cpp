// Cat.cpp

#include "Cat.h"

Cat::Cat()
{
	cout << "A cat is born" << endl;
}
Cat::~Cat()
{
	cout << "A cat has died" << endl;
}

void Cat::talk()
{
	cout << "Meow!" << endl;
}
// implements walking for a cat... same as dog!
void Cat::walk()
{
	cout << "Left front paw & back right paw, right front paw" << endl;
}