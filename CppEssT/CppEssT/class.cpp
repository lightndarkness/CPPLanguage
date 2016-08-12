#include <cstdio>

class Class1
{
public:
	Class1();
	~Class1();

	void setvalue(const int value) { i = value; }
	int getvalue() const;

private:
	int i = 0;
};

Class1::Class1()
{
}

Class1::~Class1()
{
}

int Class1::getvalue() const
{
	printf("getvalue(): this is %p\n", this);
	return i;
}

int main()
{
	int i = 47;
	Class1 object1;
	Class1 object2;

	object1.setvalue(i);
	object2.setvalue(i);
	printf("value is %d\n", object1.getvalue());
	printf("Address of object1 is %p\n", &object1);
	printf("value is %d\n", object2.getvalue());
	printf("Address of object2 is %p\n", &object2);

	getchar();

	return 0;
}