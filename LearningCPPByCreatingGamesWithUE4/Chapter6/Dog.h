// Dog.h

#pragma once

#include "Mammal.h"

class Dog : public Mammal
{
public:
	Dog();
	~Dog();

	virtual void talk() override;
	// implements walking for a dog
	virtual void walk() override;
};