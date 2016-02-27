// Heap.cpp : Defines the entry point for the console application.
//
#include <exception>
#include<iostream>

int main()
{
	try
	{
		int* p{ new int{ 1 } };
		*p = 2;
		throw (std::exception{ "Trouble" });
		delete p;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception caught: " << e.what();
	}
	return 0;
}

