#pragma once

#include <string>

class Resource
{
public:
	Resource();
	Resource(std::string n);
	~Resource();

	std::string GetName() const { return name; }

private:
	std::string name;
};

