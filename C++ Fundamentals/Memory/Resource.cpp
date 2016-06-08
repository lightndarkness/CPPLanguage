#include <iostream>
#include "Resource.h"



Resource::Resource()
{
}


Resource::Resource(std::string n) : name(n)
{
	std::cout << "constructing " << name << std::endl;
}

Resource::~Resource()
{
	std::cout << "destructing " << name << std::endl;
}
