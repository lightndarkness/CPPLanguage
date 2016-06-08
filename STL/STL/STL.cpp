// STL.cpp : Defines the entry point for the console application.
//

#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

template<class T>
T Add(T t1, T t2) { return t1 + t2; }

int main()
{
	int i{ Add(3, 4) };
	double d{ Add(1.1, 2.2) };
	string s{ Add(string{ "Hello " }, string{ "World" }) };

	//int j{ Add(s, 2) };

	vector<int> integers{ 3, 7, 11, 23 };
	vector<double> doubles{ 1.1, 5.4, 77.2, -1.2 };

	int ilength = integers.size();
	int dlength = doubles.size();

	integers.push_back(-3);
	integers.push_back(22);

	ilength = integers.size();
	integers[0]++;
	auto third = integers[2];

	int total{ 0 };
	for (unsigned int i = 0; i < integers.size(); i++)
	{
		total += integers[i];
	}

	int total2{ 0 };
	for (int elem : integers)
	{
		total2 += elem;
	}

	int total3 = accumulate(begin(integers), end(integers), 0);

	vector<int> consecutive{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int>  consecutive2(10);
	iota(begin(consecutive2), end(consecutive2), 0);

	consecutive.erase(begin(consecutive));
	consecutive.erase(begin(consecutive) + 2);
	consecutive.erase(begin(consecutive) + 4, end(consecutive));

	consecutive.insert(begin(consecutive) + 1, 7);

	sort(begin(doubles), end(doubles));

	auto seventyseven = find(begin(doubles), end(doubles), 77.2);
	*seventyseven = 7.2;

	double product = 1;
	for (auto d : doubles)
	{
		product *= d;
	}

	double product2 = accumulate(begin(doubles), end(doubles), 1.0,
		[](double partialProduct, double d) {return partialProduct * d; });

	int numberodds = count_if(begin(integers), end(integers), [](int i){return i % 2 == 1; });
	vector<int> odds(numberodds);
	copy_if(begin(integers), end(integers), begin(odds), [](int i){return i % 2 == 1; });

	auto is_even = [](int i){return i % 2 == 0; };
	int numberevens = count_if(begin(integers), end(integers), is_even);
	vector<int> evens(numberevens);
	copy_if(begin(integers), end(integers), begin(evens), is_even);

	string sentence = "This is a sentence being stored in a std::string instance.";
	int numberspaces = count(begin(sentence), end(sentence), ' ');
	auto colon = find(begin(sentence), end(sentence), ':');
	char atcolon = *colon;

	//int sum{ accumulate(2, 3, 0) };

	return 0;
}

