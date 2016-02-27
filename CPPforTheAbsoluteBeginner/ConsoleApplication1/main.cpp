#include <iostream>
#include <string>

template <class T>
class Gianni {
	T first, second;

public:
	Gianni(T a, T b) {
		first = a;
		second = b;
	}

	T bigger();
};

template <class T>
T Gianni<T>::bigger() {
	return (first > second ? first : second);
}

int main() {
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;

	string sNome;
	int iNum1, iNum2;
	cout << "Inserisci il tuo nome: ";
	cin >> sNome;
	cout << "Ciao " << sNome << endl;
	cout << "\nInserisci due numeri separati da uno spazio: ";
	cin >> iNum1 >> iNum2;
	cout << "La somma e': " << iNum1 + iNum2 << endl << endl;

	char str[3];

	str[0] = '1';
	str[1] = '3';
	str[2] = '\0';

	int x = atol(str); //strtol(str, NULL, 10);

	cout << x << endl;

	Gianni <int> go(300, 105);
	cout << go.bigger() << endl;

	return 0;
}