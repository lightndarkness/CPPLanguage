#include <iostream>
#include "Sales_item.h"
/*
* Simple main function:
* Read two numbers and write their sum
*/
int main()
{
	//// Proompt the user to enter two numbers
	//std::cout << "Inserisci due numeri: ";
	//int v1 = 0, v2 = 0; // variables to hold the input we read
	//std::cin >> v1 >> v2; // read input
	//std::cout << "La somma dei due numeri e': ";
	//std::cout << v1 * v2;
	//std::cout << std::endl;

	//int sum = 0, val = 50;

	//while (val <= 100) // while val is less than or equal to 100
	//{
	//	sum += val;
	//	++val;
	//}

	//std::cout << "La somma dei numeri da 50 a 100 e': " << sum << std::endl;

	//std::cout << "Stampa dei numeri da 10 a 0: ";
	//int num = 10;
	//while (num >= 0) // while num is greater than or equal to 0
	//{
	//	std::cout << num << " ";
	//	--num;
	//}

	//std::cout << std::endl << "Inserisci due numeri: ";
	////int v1 = 0, v2 = 0;
	//std::cin >> v1 >> v2;

	//if (v1 < v2) // checks if v1 is less than v2
	//{
	//	while (v1 <= v2) // while v1 is less than or equal to v2
	//	{
	//		std::cout << v1 << std::endl;
	//		++v1;
	//	}
	//}
	//else 
	//{
	//	while (v1 >= v2) // while v1 is greater than or equal to v2
	//	{
	//		std::cout << v1 << std::endl;
	//		--v1;
	//	}
	//}
	//
	//sum = 0;
	//for (int i = -100; i <= 100; ++i)
	//{
	//	sum += i;
	//}

	//sum = 0;
	//for (int i = 50; i <= 100; ++i)
	//{
	//	sum += i;
	//}

	//std::cout << "Stampa dei numeri da 10 a 0: ";

	//for (int i = 10; i >= 0; --i)
	//{
	//	std::cout << i << " ";
	//}

	/*std::cout << "Inserisci due interi: ";
	int small = 0, big = 0;
	std::cin >> small >> big;

	if (small > big)
	{
		int tmp = small;
		small = big;
		big = tmp;
	}

	for (int i = small; i <= big; ++i)
	{
		std::cout << i << " ";
	}*/

	/*std::cout << "Inserisci interi: ";
	int sum = 0, val = 0;

	while (std::cin >> val)
	{
		sum += val;
	}
	
	std::cout << std::endl << "La somma dei numeri inseriti e': " << sum;*/

	/*std::cout << "Inserisci alcuni interi: ";

	int valCor = 0;
	int val = 0;

	if (std::cin >> valCor)
	{
		int conteggio = 1;
		while (std::cin >> val)
		{
			if (val == valCor)
			{
				++conteggio;
			}
			else
			{
				std::cout << valCor << " inserito " << conteggio << " volte. " << std::endl;
				conteggio = 1;
				valCor = val;
			}
		}
		std::cout << valCor << " inserito " << conteggio << " volte. " << std::endl;
	}
	else
	{
		std::cout << "Non hai inserito alcun numero" << std::endl;
	}*/

	/*Sales_item book;

	while (std::cin >> book)
	{
		std::cout << book << std::endl;
	}*/

	/*Sales_item book1, book2;

	std::cin >> book1 >> book2;

	std::cout << book1 + book2;*/

//Sales_item sumBook;
//if (std::cin >> sumBook)
//{
//	Sales_item trans;
//	while (std::cin >> trans)
//	{
//		if (sumBook.isbn() == trans.isbn())
//		{
//			sumBook += trans;
//		}
//		else
//		{
//			std::cout << "Codice ISBN diverso" << std::endl;
//			std::cout << sumBook << std::endl;
//			std::cout << trans << std::endl;
//		}
//	}
//	std::cout << sumBook << std::endl;
//}
//else
//{
//	std::cerr << "ERROR: NO DATA!" << std::endl;
//	return -1;
//}

Sales_item curBook;
Sales_item book;

std::cout << "Inserisci le transazioni: " << std::endl;

if (std::cin >> curBook)
{
 	int conteggio = 1;
	while (std::cin >> book)
	{
		if (book.isbn() == curBook.isbn())
		{
			++conteggio;
			curBook += book;
		}
		else
		{
			//std::cout << curBook << std::endl;
			std::cout <<  curBook << " e' stato venduto " << conteggio << " volte. " << std::endl;
			conteggio = 1;
			curBook = book;
		}
	}
	//std::cout << curBook << std::endl;
	std::cout << curBook << " e' stato venduto " << conteggio << " volte. " << std::endl;
}
else
{
	std::cerr << "ERRORE: NESSUN DATO!" << std::endl;
	return -1;
}

	return 0;
}