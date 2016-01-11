/*
*	Game Over
*	Created: 07/01/2016
*	Author: Gianni
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Game Over" << endl;

	cout << "7 + 3 = " << 7 + 3 << endl;
	cout << "7 - 3 = " << 7 - 3 << endl;
	cout << "7 * 3 = " << 7 * 3 << endl;

	cout << "7 / 3 = " << 7 / 3 << endl;
	cout << "7.0 / 3.0 = " << 7.0 / 3.0 << endl;

	cout << "7 % 3 = " << 7 % 3 << endl;

	cout << "7 + 3 * 5 = " << 7 + 3 * 5 << endl;
	cout << "(7 + 3) * 5 = " << (7 + 3) * 5 << endl;

	int score;
	double distance;
	char playAgain;
	bool shieldUp;

	short lives, aliensKilled;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldUp = true;
	lives = 3;
	aliensKilled = 10;
	double engineTemp = 6572.89;

	cout << "\nScore: " << score << endl;
	cout << "Distance: " << distance << endl;
	cout << "Play Again: " << playAgain << endl;
	cout << "Lives: " << lives << endl;
	cout << "Aliens Killed: " << aliensKilled << endl;
	cout << "Engine Temp: " << engineTemp << endl;

	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "Fuel: " << fuel << endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nBonus: " << bonus << endl;

	return 0;
}