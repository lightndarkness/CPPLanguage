#include "Tweeter.h"
#include <iostream>



Tweeter::Tweeter()
{
}

Tweeter::Tweeter(std::string first, std::string last, int arbitrary, std::string handle) :
	Person(first, last, arbitrary), twitterhandle(handle)
{
	
}

Tweeter::~Tweeter()
{
	
}
