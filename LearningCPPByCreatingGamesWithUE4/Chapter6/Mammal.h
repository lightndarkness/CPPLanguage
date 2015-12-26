// Mammal.h
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Mammal
{
protected:
	// protected variables are like privates: they are
	// accessible in this class but not outside the class.
	// the difference between protected and private is
	// protected means accessible in derived subclasses also

	int hp;
	double speed;

public:
	// Mammal constructor - runs FIRST before derived class ctor
	Mammal();
	~Mammal();
	// Common function to all Mammals and derivatives
	void breath();
	virtual void talk();
	// pure virtual function
	virtual void walk() = 0;
};