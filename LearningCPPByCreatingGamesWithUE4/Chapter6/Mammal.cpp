// Mammal.cpp

#include "Mammal.h"

Mammal::Mammal() // Notice use of :: (scope resolution operator)
{
	hp = 100;
	speed = 1.0;
	cout << "A Mammal is created!" << endl;
}

Mammal::~Mammal()
{
	cout << "A mammal has fallen" << endl;
}

void Mammal::breath()
{
	cout << "Breath in... breath out" << endl;
}

void Mammal::talk()
{
	cout << "Mammal talk... override this function!" << endl;
}