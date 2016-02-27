/*
*	Created: 07/01/2016
*	Author: Gianni
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	/*cout << "Game Over" << endl;

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
	cout << "\nBonus: " << bonus << endl;*/

	//unsigned int score = 5000;
	//cout << "score: " << score << endl;

	//// altering the value of a variable
	//score = score + 100;
	//cout << "score: " << score << endl;

	//// combined assignement operator
	//score += 100;
	//cout << "score: " << score << endl;

	//// increment operators
	//int lives = 3;
	//++lives;
	//cout << "lives: " << lives << endl;

	//lives = 3;
	//lives++;
	//cout << "lives: " << lives << endl;

	//lives = 3;
	//int bonus = ++lives * 10;
	//cout << "lives, bonus = " << lives << ", " << bonus << endl;

	//lives = 3;
	//bonus = lives++ * 10;
	//cout << "lives, bonus = " << lives << ", " << bonus << endl;

	//// integer wrap around
	//score = 4294967295;
	//cout << "\nscore: " << score << endl;
	//++score;
	//cout << "score: " << score << endl;

	/*const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;

	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY;

	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
	shipCost myShipCost = BOMBER_COST;
	cout << "\nTo upgrade my ship to Cruiser will cost "
		<< (CRUISER_COST - myShipCost) << " Resource Points.\n";*/

	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	// get the information
	cout << "Welcome to Lost Fortune\n\n";
	cout << "Please enter the following for your personalized adveture.\n";

	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;

	// tell the story
	cout << "\nA brave group of " << adventurers << " set out on a quest ";
	cout << "-- in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by that legendary rogue, " << leader << ".\n";
	cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought brvely under the command of " << leader;
	cout << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the adventurers, " << killed << " were vanquished, ";
	cout << "leaving just " << survivors << " in the group.\n";
	
	cout << "\nThe party was about to give up all hope. ";
	cout << "But while laying the deceased to rest, ";
	cout << "they stumbled upon the burried fortune. ";
	cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.";
	cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
	cout << " pieces to keep things fair of course.\n\n\n";

	int score, score1, score2;
	score = score1 = score2 = 0;
	cout << "Inserisci tre numeri separati da uno spazio: ";
	cin >> score >> score1 >> score2;
	cout << "La media dei tre numeri che hai inserito e' "
		<< (score + score1 + score2) / 3 << endl;
	return 0;
}