// Score Rater
// Demonstrates the if statements

#include <iostream>
//#include <string>
//#include <cstdlib>
#include <ctime>

int main()
{
	/*if (true)
	{
		std::cout << "This is always displayed.\n\n";
	}

	if (!false)
	{
		std::cout << "This always displayed either.\n\n";
	}

	if (false)
	{
		std::cout << "This is never displayed.\n\n";
	}

	if (!true)
	{
		std::cout << "This is never displayed either.\n\n";
	}

	int score = 1000;

	if (score)
	{
		std::cout << "At least you didn't score 0\n\n";
	}

	if (score >= 250)
	{
		std::cout << "You scored 250 or more. Decent.\n\n";
	}

	if (score >= 500)
	{
		std::cout << "You scored 500 or more. Nice.\n\n";
		if (score >= 1000)
		{
			std::cout << "You scored 1000 or more. Impressive!\n";
		}
	}*/

	/*int score;
	std::cout << "Enter your score: ";
	std::cin >> score;

	if (score >= 1000)
	{
		std::cout << "You scored 1000 or more. Impressive!\n";
	}
	else if (score >= 500)
	{
		std::cout << "You scored 500 or more. Nice.\n";
	}
	else if (score >= 250)
	{
		std::cout << "You scored 250 or more. Decent.\n";
	}
	else
	{
		std::cout << "You scored less than 250. Nothing to brag about.\n";
	}*/

	/*enum Difficulties : int
	{
		Easy = 1, Normal, Hard
	};

	std::cout << "Difficulty Levels\n\n";
	std::cout << "1 - Easy\n";
	std::cout << "2 - Normal\n";
	std::cout << "3 - Hard\n\n";

	int choise;
	std::cout << "Choise: ";
	std::cin >> choise;

	Difficulties difficulty = static_cast<Difficulties>(choise);

	switch (difficulty)
	{
	case Easy:
		std::cout << "You picked Easy. \n";
		break;
	case Normal:
		std::cout << "You picked Normal. \n";
		break;
	case Hard:
		std::cout << "You picked Hard. \n";
		break;
	default:
		std::cout << "You made an illegal choise";
		break;
	}*/

	/*char again = NULL;
	while (again == 'y')
	{
		std::cout << "\n**Played an exiting game**";
		std::cout << "\nDo you want to play again? (y/n): ";
		std::cin >> again;
	}
	std::cout << "\nOkay, bye.";*/

	/*char again = NULL;
	do
	{
		std::cout << "\n**Played an exiting game**";
		std::cout << "\nDo you want to play again? (y/n): ";
		std::cin >> again;
	} while (again == 'y');

	std::cout << "\nOkay, bye.";*/

	/*int count = 0;
	while (true)
	{
		count += 1;
		// end loop if count is greater than 10
		if (count > 10)
		{
			break;
		}

		// skip the number 5
		if (count == 5)
		{
			continue;
		}

		std::cout << count << std::endl;
	}*/

	/*std::string username;
	std::string password;
	bool success;

	std::cout << "\tGame Designer's Network\n";
	do
	{
		std::cout << "\nUsername: ";
		std::cin >> username;

		std::cout << "\nPassword: ";
		std::cin >> password;

		if (username == "S.Meier" && password == "civilization")
		{
			std::cout << "\nHey, Sid.";
			success = true;
		}
		else if (username == "S.Miyamoto" && password == "mariobros")
		{
			std::cout << "\nWhat's up, Shigeru?";
			success = true;
		}
		else if (username == "W.Wright" && password == "thesims")
		{
			std::cout << "\nHow goes it, Will?";
			success = true;
		}
		else if (username == "guest" || password == "guest")
		{
			std::cout << "\nWelcome, guest.";
			success = true;
		}
		else
		{
			std::cout << "\nYour login failed.";
			success = false;
		}
	} while (!success);*/

	/*srand(static_cast<unsigned int>(time(0))); // seed randmon number generator
	int randomNumber = rand();

	int die = (randomNumber % 6) + 1; // get a number between 1 and 6

	std::cout << "You rolled a " << die << std::endl;*/

	/*srand(static_cast<unsigned int>(time(0))); // seed the random generator

	int numberToGuess = (rand() % 100) + 1; // generate a random number
	int numberGuessed;
	int numberOfTries = 0;

	std::cout << "Ho generato un numero da 1 a 100. Indovinalo! ";
	do
	{
		std::cin >> numberGuessed;
		++numberOfTries;

		if (numberGuessed != numberToGuess)
		{
			if (numberGuessed > numberToGuess)
			{
				std::cout << "Troppo alto!" << std::endl;
				std::cout << "Riprova! ";
			}
			else
			{
				std::cout << "Troppo basso!" << std::endl;
				std::cout << "Riprova! ";
			}
		}
		else
		{
			std::cout << "Complimenti! Hai indovinato!" << std::endl;
			std::cout << "Hai indovinato dopo " << numberOfTries << " tentativi." << std::endl;
		}
	} while (numberGuessed != numberToGuess);*/

	/* Questo è un semplicissimo gioco in cui il giocatore
		pensa a un numero e il computer lo deve indovinare
		in base alle indicazioni "Troppo alto" o "Troppo basso"

		Programmatore: Casole Giovanni
		Data: 08/03/2016
	*/

	//int main() {

	enum Answer : char
	{
		YES = 1, TOO_HIGH, TOO_LOW
	};

	srand(static_cast<unsigned int>(time(0))); // seeds the random generator

	short numberOfTries = 0;
	char max = 101;
	char min = 1;
	Answer userAnswer;

	std::cout << "Hi, think a number from 1 to 100 and I'll guess it!" << std::endl;
	do
	{
		static short numberGuessed;
		numberGuessed = rand() % (max - min) + min; // generate random number in range min - max
		++numberOfTries;

		std::cout << "I think it's " << numberGuessed << ". Am I right? " << std::endl << std::endl;
		std::cout << "1. Yes, you're right!" << std::endl << std::endl;
		std::cout << "2. No, too high!" << std::endl << std::endl;
		std::cout << "3. No, too low!" << std::endl << std::endl;

		static short response;
		std::cin >> response;

		userAnswer = static_cast<Answer>(response); // convert the variable from int type to Answer type

		switch (userAnswer)
		{
		case YES:
			std::cout << "I guessed it in " << numberOfTries << " tries." << std::endl;
			break;
		case TOO_HIGH:
			max = numberGuessed;
			break;
		case TOO_LOW:
			min = numberGuessed + 1;
			break;
		default:
			std::cout << "I didn't understand!" << std::endl;
			break;
		}
	} while (userAnswer != YES);


	std::cin.ignore();
	std::cin.get();

	return 0;
}