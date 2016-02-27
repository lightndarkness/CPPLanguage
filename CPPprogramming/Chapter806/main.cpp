#include <iostream>

using namespace std;

int main() {
	double balance, rate;
	int years;
	cout << "What is the beginning balance? ";
	cin >> balance;
	cout << "What is the annual interest rate? ";
	cin >> rate;
	cout << "How many years to calculate? ";
	cin >> years;

	for (int i = 1; i < years; ++i) {
		balance *= rate;
	}

	cout << ""
	return 0;
}