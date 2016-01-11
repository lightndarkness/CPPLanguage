/* Convertitore euro / dollaro 

	Autore: Gianni
	Creato il: 30/12/2015
	
	main.cpp
	
*/

#include <iostream>
#include <limits>
#include <string>
//#include <cstdint>

using std::cout;
using std::cin;
using std::endl;
using std::numeric_limits;
using std::string;

int main()
{

	
	int euro = 0;
	int dollari = 0;
	double cambio = 1.35;

	cout << "Inserisci la somma in dollari: ";
	cin >> dollari;

	cout << "Inserisci la somma in euro: ";
	cin >> euro;



	/*if (euro <= 0)
	{
		cout << "Scrivi un numero positivo" << endl;
	}
	else
	{
		cout << "Fattore di cambio? ";
		cin >> cambio;

		cout << INT_MAX << endl;

		cout << "Cambio letto: " << cambio << endl;
		cout << "In dollari: " << euro * cambio << endl;
	}*/

	cout << "Inserire un valore X sull'asse: ";
	float x = 0.0f;
	cin >> x;
	if (x < 0)
	{
		cout << "SI" << endl;
	}

	cout << "Inserisci la tua età: ";
	int età;
	cin >> età;

	if (età < 0 || età > 120)
	{
		cout << "Inserire un'età idonea." << endl;
	}
	else if (età < 18)
	{
		cout << "Sei minorenne" << endl;
	}
	else
	{
		cout << "Sei maggiorenne" << endl;
	}

	cout << "Inserire il giorno: ";
	string giorno;
	cin >> giorno;

	if (giorno != "Lunedi" || giorno != "lunedi")
	{
		cout << "Coraggio ci sono giorni peggiori" << endl;
	}





	/*cout << "Short: " << sizeof(short int) << endl;
	cout << "Int: " << sizeof(int) << endl;
	cout << "Long Int: " << sizeof(long int) << endl;
	cout << "Long Long Int: " << sizeof(long long int) << endl;

	cout << numeric_limits<int>::min() << endl;
	cout << numeric_limits<int>::max() << endl;
	
	cout << numeric_limits<unsigned int>::min() << endl;
	cout << numeric_limits<unsigned int>::max() << endl;

	cout << numeric_limits<unsigned long long>::min() << endl;
	cout << numeric_limits<unsigned long long>::max() << endl;

	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<float>::max() << endl;*/

	int16_t n = 123;

	return 0;
}

int getMax(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}