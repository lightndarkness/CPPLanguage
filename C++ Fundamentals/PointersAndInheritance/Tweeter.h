#pragma once

#include "Person.h"
#include <string>

class Tweeter :
	public Person
{
public:
	Tweeter();
	Tweeter(std::string first, std::string last, int arbitrary, std::string handle);

	~Tweeter();
	std::string GetName() const;

private:
	std::string twitterhandle;
};

