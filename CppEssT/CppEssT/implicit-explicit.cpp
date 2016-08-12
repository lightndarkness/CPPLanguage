#include <cstdio>

const size_t _maxsize = 1024;

class strsize
{
public:
	explicit strsize(const int);
	explicit strsize(const char *);
	~strsize();

	size_t size() const;

private:
	size_t _size = 0;
};

strsize::strsize(const int n)
{
	puts("Constructor: size from int");
	_size = (n < _maxsize) ? n : 0;
}

strsize::strsize(const char * s)
{
	puts("constructor: size from c-string");
	for (size_t i = 0; i < _maxsize; i++)
	{
		if (s[i] == 0)
		{
			_size = i;
			return;
		}
	}
	_size = 0;
}

strsize::~strsize()
{
}

size_t strsize::size() const
{
	return _size;
}

void func(const strsize & s)
{
	printf("size is %ld\n", s.size());

}

int main()
{
	strsize s(5);
	printf("size is %ld\n", s.size());
	func(strsize("x"));
	getchar();
	return 0;
}