#include <iostream>
#include <string>

int* PtrReturn();

int main()
{
	int int32 = 5;
	std::string string = "Hello";

	int* iPtr;
	std::string* sPtr;

	iPtr = &int32;

	iPtr = PtrReturn();

	sPtr = &string;

	return 0;
}

int* PtrReturn()
{
	int int32 = 10;
	int* iPtr = &int32;

	return iPtr;
}