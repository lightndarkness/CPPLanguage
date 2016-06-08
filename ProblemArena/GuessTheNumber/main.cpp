#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <ctime>
#include <string>

class GuessTheNumber
{
public:
	GuessTheNumber(int _MaxValue);
	~GuessTheNumber();

	static void HowBigIsMyNumber(int x);
	void Play();
	int GetMax();

private:
	int theNumber;
	int max;
};

GuessTheNumber::GuessTheNumber(int _MaxValue)
{
	max = _MaxValue;
	theNumber = abs(rand() % (max + 1));
}

GuessTheNumber::~GuessTheNumber()
{
}

void GuessTheNumber::HowBigIsMyNumber(int x)
{
	if (x >= 0 && x <= 10)
	{
		std::cout << "Our number is pretty small" << std::endl;
	}
	else if (x >= 11 && x <= 100)
	{
		std::cout << "Our number is pretty big" << std::endl;
	}
	else
	{
		std::cout << "Our number is out of range" << std::endl;
	}
}

void GuessTheNumber::Play()
{
	while (true)
	{
		int myNumber;
		std::cin >> myNumber;

		if (myNumber > theNumber)
		{
			std::cout << "Your number is too big" << std::endl;
		}
		else if (myNumber < theNumber)
		{
			std::cout << "Your number is too small" << std::endl;
		}
		else
		{
			std::cout << "YOU GOT IT BRO" << std::endl;
			break;
		}
	}
}

int GuessTheNumber::GetMax()
{
	return max;
}

int main()
{
	srand(time(0));
	GuessTheNumber::HowBigIsMyNumber(0);
	GuessTheNumber::HowBigIsMyNumber(10);
	GuessTheNumber::HowBigIsMyNumber(11);
	GuessTheNumber::HowBigIsMyNumber(100);
	GuessTheNumber::HowBigIsMyNumber(5);
	GuessTheNumber::HowBigIsMyNumber(75);
	GuessTheNumber::HowBigIsMyNumber(-1);
	GuessTheNumber::HowBigIsMyNumber(105);

	GuessTheNumber guessGame = GuessTheNumber(10);

	std::cout << "Welcome to my game. Try and guess my impossible"
		<< " number. It's between 0 and " << guessGame.GetMax() << " inclusive. "
		<< "Just type a number to get started." << std::endl;

	guessGame.Play();
}