#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Operazioni(char arithmeticOperator, int argument1, int argument2);
//double Operazioni(char arithmeticOperator, double argument1, double argument2);

int main()
{
	cout << "Enter you age: " << endl;
	int myAge = 0;
	cin >> myAge;

	cout << "Now enter the age of your father: " << endl;
	int fatherAge = 0;
	cin >> fatherAge;

	if(fatherAge > myAge)
	{
		cout << "Your father is older than you." << endl;
	}
	else if(myAge > fatherAge)
	{
		cout << "You are older than your father? That's not possible!" << endl;
	}

	if(myAge >= 100 && fatherAge >= 100)
	{
		cout << "You have both passed a century!";
	}

	int username = 0;
	int password = 0;

	cout << "Enter the number for your username: " << endl;
	cin >> username;
	cout << "Enter the number for your password: " << endl;
	cin >> password;

	if(username == 12345 || password == 67890)
	{
		cout << "Access allowed!" << endl;
	}

	char arithmeticOperator;
	int argument1, argument2;

	cout << "Enter the first argument for the operation: " << endl;
	cin >> argument1;
	cout << "Enter the second argument for the operation: " << endl;
	cin >> argument2;
	cout << "Now enter the operator for the operation you want to persorm on those arguments: " << endl;
	cin >> arithmeticOperator;

	cout << argument1 << " " << arithmeticOperator << " " << argument2 << " = " <<
		Operazioni(arithmeticOperator, argument1, argument2);
	if (arithmeticOperator == '/')
	{
		cout << "r" << argument1 % argument2 << endl;
	}
	

	cin.ignore();
	cin.get();
	return 0;
}

int Operazioni(char arithmeticOperator, int argument1, int argument2)
{
	int risultato;
	if (arithmeticOperator == '+')
	{
		//cout << argument1 << " " << arithmeticOperator << " " << argument2 << " = " << argument1 + argument2;
		risultato = argument1 + argument2;
	}
	else if (arithmeticOperator == '*')
	{
		//cout << argument1 << " " << arithmeticOperator << " " << argument2 << " = " << argument1 * argument2;
		risultato = argument1 * argument2;
	}
	else if (arithmeticOperator == '-')
	{
		//cout << argument1 << " " << arithmeticOperator << " " << argument2 << " = " << argument1 - argument2;
		risultato = argument1 - argument2;
	}
	else if (arithmeticOperator == '/')
	{
		if (argument2)
		{
			/*cout << argument1 << " " << arithmeticOperator << " " << argument2 << " = " << argument1 / argument2
				<< "r" << argument1 % argument2 << endl;*/
			risultato = argument1 / argument2;
		}
		else
		{
			cout << "Error! Impossibile dividere per 0." << endl;
		}
	}

	return risultato;
}

//double Operazioni(char arithmeticOperator, double argument1, double argument2)
//{
//	double risultato;
//	if (arithmeticOperator == '+')
//	{
//		//cout << argument1 << " " << arithmeticOperator << " " << argument2 << " = " << argument1 + argument2;
//		risultato = argument1 + argument2;
//	}
//	else if (arithmeticOperator == '*')
//	{
//		//cout << argument1 << " " << arithmeticOperator << " " << argument2 << " = " << argument1 * argument2;
//		risultato = argument1 * argument2;
//	}
//	else if (arithmeticOperator == '-')
//	{
//		//cout << argument1 << " " << arithmeticOperator << " " << argument2 << " = " << argument1 - argument2;
//		risultato = argument1 - argument2;
//	}
//	else if (arithmeticOperator == '/')
//	{
//		if (argument2)
//		{
//			/*cout << argument1 << " " << arithmeticOperator << " " << argument2 << " = " << argument1 / argument2
//				<< "r" << argument1 % argument2 << endl;*/
//			risultato = argument1 / argument2;
//		}
//		else
//		{
//			cout << "Error! Impossibile dividere per 0." << endl;
//		}
//	}
//
//	return risultato;
//}