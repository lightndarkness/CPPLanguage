#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int number = 0;

	cout << "Inserisci un numero: ";
	cin >> number;
	cout << "Hai inserito " << number << endl;

	char character = 'a';

	cout << character << endl;
	cout << static_cast<int>(character) << endl;

	cout << 1234 / 2000 << endl;

	vector<vector<int>> vector_of_int_vectors;

	//vector<int>& vmemory = vector_of_int_vectors;

	{
		vector<int> tempV;
		//vector<int>& vmemory = tempV;
		tempV.push_back(2);
		vector_of_int_vectors.push_back(tempV);
	}

	cout << vector_of_int_vectors[0][0] << endl;

	string username;
	string password;
	cout << "Enter your username: " << endl;
	getline(cin, username, '\n');

	cout << "Enter your password: " << endl;
	getline(cin, password, '\n');
	if (username == "root" && password == "xyzzy")
	{
		cout << "Access allowed." << endl;
	}
	else
	{
		cout << "Bad username or password. Access Denied!" << endl;
		// returning is a convenient way to stop the program
		return 0;
	}

	cin.ignore();
	cin.get();

	return 0;
}