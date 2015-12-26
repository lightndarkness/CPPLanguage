// Human.cpp

#include "Human.h"

bool civilized;

Human::Human()
{
	cout << "A new human is born" << endl;
	speed = 2.0; // change speed. Since derived class ctor
				 // (ctor is short for constructor!) runs after base
				 // class ctor, initialization sticks initialize member
				 // variables specific to this class
	civilized = true;
}
Human::~Human()
{
	cout << "The human has died!" << endl;
}

void Human::talk()
{
	cout << "I'm good looking for a... human" << endl;
}
// implements walking for a human...
void Human::walk()
{
	cout << "Left, right, left, right at the speed of " << speed << endl;
}
// member functions uniqur to human derivative
void attack()
{
	if (civilized)
	{
		cout << "Why would a human attack an other?" << endl;
	}
	else
	{
		cout << "A human attacks another" << endl;
	}
}