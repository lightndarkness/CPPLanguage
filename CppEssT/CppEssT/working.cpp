// working.cpp
#include <cstdio>
using namespace std;

int main()
{
	int x = 7;
	int* ip = &x;
	int& y = x;

	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of *ip is %d\n", *ip);

	x = 42;
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of *ip is %d\n", *ip);

	y = 73;
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of *ip is %d\n", *ip);

	int z = 149;
	ip = &z;
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of z is %d\n", z);
	printf("The value of *ip is %d\n", *ip);

	y = z;
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of z is %d\n", z);
	printf("The value of *ip is %d\n", *ip);

	char s[] = "string";
	for (int i = 0; s[i]; ++i)
	{
		printf("Char is: %c\n", s[i]);
	}
	for (char* cp = s; *cp; ++cp)
	{
		printf("Char is: %c\n", *cp);
	}
	for (char c : s)
	{
		if (c == 0) break;
		printf("char is: %c\n", c);
	}
	printf("String is %s\n", s);

	return 0;
}