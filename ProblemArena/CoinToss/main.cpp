#include <stdlib.h>
#include <ctime>
#include <cmath>
#include <iostream>
#include <string>

class CoinToss
{
public:
	CoinToss();
	~CoinToss();

	/** Launch a coin and returns Heads or Tails */
	std::string TossACoin();

private:

};

CoinToss::CoinToss()
{
}

CoinToss::~CoinToss()
{
}

std::string CoinToss::TossACoin()
{
	// Get a random value between 0 and 1
	int toss = abs(rand() % 2);
	// if toss is equal to 0
	if (toss == 0)
	{
		// returns "Heads"
		return "HEADS";
	}
	else
	{
		// otherwise return "Tails"
		return "TAILS";
	}
}

int main()
{
	using std::cout;
	using std::endl;

	srand(time(0));

	CoinToss game = CoinToss();

	cout << game.TossACoin() << endl;
	cout << game.TossACoin() << endl;
	cout << game.TossACoin() << endl;
	cout << game.TossACoin() << endl;
	cout << game.TossACoin() << endl;
	cout << game.TossACoin() << endl;
	cout << game.TossACoin() << endl;
	cout << game.TossACoin() << endl;
}