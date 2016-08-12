template <class T>
class Accum
{
public:
	Accum(T start) : total(start) {}
	T operator+=(const T& t) { return total += t; }
	T GetTotal() { return total; }

private:
	T total;
};

template <> // Template Specialization
class Accum<Person>
{
public:
	Accum(int start) : total(start) {}
	int operator+=(const Person& p) { return total += p.GetNumber(); }
	int GetTotal() { return total; }

private:
	int total;
};