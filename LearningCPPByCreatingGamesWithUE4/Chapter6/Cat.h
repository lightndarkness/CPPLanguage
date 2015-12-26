// Cat.h

#pragma once

#include "Mammal.h"

class Cat : public Mammal
{
public:
	Cat();
	~Cat();

	virtual void talk() override;
	// implements walking for a cat... same as dog!
	virtual void walk() override;
};