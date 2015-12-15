#include <iostream>

using namespace std;

enum Food
{
	Fish = 1, // starts from 1 instead of 0
	Bread,
	Apple,
	Orange
};

enum Mounts
{
	Horse = 1,
	Mare,
	Mule,
	Sheep,
	Chocobo
};

int main()
{
#pragma region IfStatements
	int x = 5; // as you know we use one equal sign
	int y = 4; // for assignement
			   // but we need to use two equal signs
			   // to check if variables are equal to each other
	cout << "Is x equal to y? C++ says: " << boolalpha << (x == y) << endl;

	bool isHungry = true; // can set this to false if not 
						  // hungry!

	if (isHungry) // only go inside { when isHungry is true
	{
		cout << "Preparing snack..." << endl;
		cout << "Eating..." << endl;
	}
	else // we go here if is hungry is FALSE
	{
		cout << "I'm not hungry!" << endl;
	}
	cout << "Sitting on the couch..." << endl;

	cout << "Is x greater than y? " << (x > y) << endl;
	cout << "Is x greater than or EQUAL to y? " << (x >= y) << endl;
	cout << "Is x less than y? " << (x < y) << endl;
	cout << "Is x less than or EQUAL to y? " << (x <= y) << endl;
	cout << "Is x not EQUAL to y? " << (x != y) << endl;

	bool wearingSocks = true;
	bool wearingClothes = false;

	if (wearingSocks && wearingClothes) // && requires BOTH to be true
	{
		cout << "You are dressed!" << endl;
	}
	else
	{
		cout << "You are not dressed yet" << endl;
	}

	if (!wearingSocks) // same as if(false == wearingSocks)
		cout << "Get some socks on!" << endl;
	else
		cout << "You already have socks" << endl;

	bool foundStar = true;
	float levelCompleteTime = 25.f;
	float maxTimeForBonus = 60.f;
	// || requires EITHER to be true to get in the { below
	if (foundStar || levelCompleteTime < maxTimeForBonus)
	{
		cout << "Bonus awarded!" << endl;
	}
	else
	{
		cout << "No Bonus!" << endl;
	}

	//int x, y;

	cout << "Inserisci due numeri interi separati da uno spazio..." << endl;
	cin >> x >> y;

	if (x > y)
	{
		cout << "The greater variable is X!" << endl;
	}
	else
	{
		cout << "The greater variable is Y!" << endl;
	}

	enum Item // enums define a new type of variable!
	{
		Coin, Key, Sanddollar // variables of type Item can have
							  // any one of these 3 values
	};

	Item itemInHand = Key;
	if (itemInHand == Key)
	{
		cout << "The key has a lionshead on the handle." << endl;
		cout << "You got into a secret room using the key!" << endl;
	}
	else if (itemInHand == Coin)
	{
		cout << "The coin is a rusted brassy color. It has a picture of a lady with a skirt." << endl;
		cout << "Using this coin you could buy a few things" << endl;
	}
	else if (itemInHand == Sanddollar)
	{
		cout << "The sanddollar has a little star on it." << endl;
		cout << "You might be able to trade it for something." << endl;
	}

	cout << "Enter an integer value for x: ";
	cin >> x;
	cout << "Enter an integer value for y: ";
	cin >> y;
	cout << "x = " << x << " y = " << y << endl;

	if (x == y)
	{
		cout << "x and y are equal!" << endl;
	}
	else
	{
		cout << "x and y are not equal!" << endl;
		if (x > y)
		{
			cout << "x is greater than y!" << endl;
		}
		else
		{
			cout << "x is less than y!" << endl;
		}
	}
#pragma endregion
#pragma region Switch
	Food food = Fish; // change the food here

	switch (food)
	{
	case Fish:
		cout << "Here fishy fishy fishy" << endl;
		break;
	case Bread:
		cout << "Chomp! Delicious bread!" << endl;
		break;
	case Apple:
		cout << "Mm fruits are good for you" << endl;
		break;
	case Orange:
		cout << "Orange you glad I didn't say banana" << endl;
		break;
	default:
		cout << "Invalid food" << endl;
		break;
	}

	cout << "Fish = " << Fish << endl;
	cout << "Bread = " << Bread << endl;
	cout << "Apple = " << Apple << endl;
	cout << "Orange = " << Orange << endl;

	int mount;
	cout << "Choose your mount: " << endl;
	cout << "Horse: " << Horse << endl;
	cout << "Mare: " << Mare << endl;
	cout << "Mule: " << Mule << endl;
	cout << "Sheep: " << Sheep << endl;
	cout << "Chocobo: " << Chocobo << endl;
	cout << "Enter a number from 1 to 5 to choose a mount. ";
	cin >> mount;

	switch (mount)
	{
	case Horse:
		cout << "The steed is valiant and mighty" << endl;
		break;
	case Mare:
		cout << "This mare is white and beautiful" << endl;
		break;
	case Mule:
		cout << "You are given a mule to ride" << endl;
		break;
	case Sheep:
		cout << "Baa! The sheep can barely support your weight." << endl;
		break;
	case Chocobo:
		cout << "Chocobo!" << endl;
		break;
	default:
		cout << "Invalid mount" << endl;
		break;
	}

#pragma endregion
	return 0;
}