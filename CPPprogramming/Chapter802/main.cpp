#include <iostream>

using namespace std;

int main() {
	/*double balance, rate;
	int years, count;
	cout << "What is the standard balance?" << endl;
	cin >> balance;
	cout << "What is the annual interest rate?" << endl;
	cin >> rate;
	cout << "How many years to calculate interest?" << endl;
	cin >> years;
	count = 1;
	while (count <= years) {
		balance *= rate;  // 1.xx
		cout << count << " : " << balance << endl;
		++count;
	}
	cout << "After " << years << " years, your balance will be " << balance << "." << endl;*/

	int num1, num2, product, count;
	product = 0;
	count = 1;
	cout << "What is the first number: ";
	cin >> num1;
	cout << "What is the second number: ";
	cin >> num2;
	while (count <= num1) {
		product += num2;
		++count;
	}
	cout << num1 << " times " << num2 << " = " << product << endl;

	return 0;
}