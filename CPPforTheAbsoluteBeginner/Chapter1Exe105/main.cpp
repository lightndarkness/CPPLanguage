#include <iostream>

int main() {
	using std::cout;
	using std::endl;
	using std::cin;

	int iNum;
	cout << "\nInserisci un numero: ";
	cin >> iNum;

	if ((iNum >= 1 && iNum <= 100) && iNum % 3 == 0) {
		cout << iNum * 2 << endl;
	}
	else if ((iNum >= 1 && iNum <= 100) && iNum % 3 != 0) {
		cout << iNum * 3 << endl;
	}
	else if (!(iNum >= 1 && iNum <= 100)) {
		cout << iNum * iNum % 100 << endl;
	}

	return 0;
}