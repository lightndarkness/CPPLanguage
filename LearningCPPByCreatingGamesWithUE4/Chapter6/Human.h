// Human.h

#pragma once

#include "Mammal.h"

class Human : public Mammal
{
	// Data member unique to Human
	bool civilized;
public:
	Human();
	~Human();

	virtual void talk() override;
	// implements walking for a human...
	virtual void walk() override;
	// member functions uniqur to human derivative
	void attack();
};