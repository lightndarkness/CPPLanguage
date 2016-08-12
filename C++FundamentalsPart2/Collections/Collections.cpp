#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <memory>
#include <list>

#include "Person.h"

void Print(int i)
{
	std::cout << i << " ";
}

bool Odd(int i)
{
	return 0 != i % 2;
}

int main()
{
	std::vector<int> v;
	v.push_back(3);
	v.push_back(6);
	v.push_back(9);
	v.push_back(2);

	for (auto i = v.begin(); i != v.end(); i++)
	{
		std::cout << *i << " ";
	}

	std::cout << std::endl;

	for (auto i = v.rbegin(); i != v.rend(); i++)
	{
		std::cout << *i << " ";
	}

	std::cout << std::endl;

	int j = v[2];

	std::cout << j << std::endl;

	std::vector<Person> vp;
	Person Kate("Kate", "Gregory", 123);
	Person Someone("Someone", "Else", 456);

	vp.push_back(Kate);
	vp.push_back(Someone);

	for (auto ip = vp.begin(); ip != vp.end(); ip++)
	{
		std::cout << ip->GetName() << " ";
	}

	std::cout << std::endl << "-------------------------------" << std::endl;

	std::map<int, Person> people;
	people[Kate.GetNumber()] = Kate;
	people[Someone.GetNumber()] = Someone;

	Person third("Third", "Fiction", 124);
	std::pair<int, Person> p(third.GetNumber(), third);
	people.insert(p);

	for (auto ip = people.begin(); ip != people.end(); ip++)
	{
		std::cout << ip->first << " " << ip->second.GetName() << std::endl;
	}

	std::cout << std::endl;

	auto found = people.find(123);
	std::cout << found->first << " " << found->second.GetName() << std::endl;

	std::string who = people[124].GetName();
	std::cout << "person at 124 is " << who << ". ";

	std::cout << std::endl << "-------------------------------" << std::endl;

	std::cout << "contents of v: ";
	std::for_each(v.begin(), v.end(), Print);

	std::cout << std::endl;

	std::cout << "odd elements of v: ";
	auto o = std::find_if(v.begin(), v.end(), Odd);
	while (o != v.end())
	{
		std::cout << *o << " ";
		o = std::find_if(++o, v.end(), Odd);
	}

	std::cout << std::endl;

	std::cout << "contents of v: ";
	std::sort(v.begin(), v.end());
	std::for_each(v.begin(), v.end(), Print);

	std::cout << std::endl << "-------------------------------" << std::endl;

	int length = third.GetName().size();
	std::string firstfour = third.GetName().substr(0, 4);
	std::cout << length << " " << firstfour;

	std::cout << std::endl;

	return 0;
}
