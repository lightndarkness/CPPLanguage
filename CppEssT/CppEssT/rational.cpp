#include <iostream>

class Rational
{
private:
	int _n = 0;
	int _d = 1;
public:
	Rational(int numerator = 0, int denominator = 1) : _n(numerator), _d(denominator) {};
	Rational(const Rational& rhs) : _n(rhs._n), _d(rhs._d) {};
	~Rational() 
	{ 
		printf("dtor: %d/%d\n", _n, _d);
		_n = 0;
		_d = 1;
	}
	inline int numerator() const { return _n; }
	inline int denominator() const { return _d; }
	Rational & operator=(const Rational & rhs);
	Rational operator+(const Rational & rhs) const;
	Rational operator-(const Rational & rhs) const;
	Rational operator*(const Rational & rhs) const;
	Rational operator/(const Rational & rhs) const;
};

Rational & Rational::operator=(const Rational & rhs)
{
	if (this != &rhs)
	{
		_n = rhs.numerator();
		_d = rhs.denominator();
	}
	return *this;
}

Rational Rational::operator+(const Rational & rhs) const
{
	return Rational((_n * rhs._d) + (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator-(const Rational & rhs) const
{
	return Rational((_n * rhs._d) - (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator*(const Rational & rhs) const
{
	return Rational(_n * rhs._n, _d * rhs._d);
}

Rational Rational::operator/(const Rational & rhs) const
{
	return Rational(_n * rhs._d, _d * rhs._n);
}

std::ostream & operator<<(std::ostream & o, Rational & r)
{
	return o << r.numerator() << '/' << r.denominator();
}

int main()
{
	Rational a = 7;
	std::cout << "a is: " << a << std::endl;
	Rational b(5, 3);
	std::cout << "b is: " << b << std::endl;
	Rational c = b;
	std::cout << "c is: " << c << std::endl;
	Rational d;
	std::cout << "d is: " << d << std::endl;
	d = c;
	std::cout << "d is: " << d << std::endl;
	Rational & e = d;
	d = e;
	std::cout << "e is: " << e << std::endl;

	d = c = b = a;
	printf("a is %d/%d\n", a.numerator(), a.denominator());
	printf("b is %d/%d\n", b.numerator(), b.denominator());
	printf("c is %d/%d\n", c.numerator(), c.denominator());
	printf("d is %d/%d\n", d.numerator(), d.denominator());

	//std::cin.get();
	return 0;
}