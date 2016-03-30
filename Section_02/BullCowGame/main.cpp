/*This is the console executable, that makes use of the BullCow class
This acts as the view in a MCV pattern, and is responsible for all
user interaction. For game logic see the FBullCowGame class 
*/

#include <iostream>
#include <string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
FText GetValidGuess();
void PlayGame();
void PrintGameSummary();
bool AskToPlayAgain();

FBullCowGame BCGame;

// the entry point for our application
int main()
{
	PrintIntro();

	do
	{
		PlayGame();
	} while (AskToPlayAgain());
	
	return 0;
}

// introduce the game
void PrintIntro()
{
	std::cout << "Welcome to Bulls and Cows.\n";
	std::cout << "Can you guess the " << BCGame.GetHiddenWordLength() << " letters isogram I'm thinking of?\n\n";

	return;
}

// get a guess from the player
FText GetValidGuess()
{
	EGuessStatus Status = EGuessStatus::INVALID;
	FText Guess = "";

	do
	{
		std::cout << "Try " << BCGame.GetCurrentTry() << ". Enter your guess: ";
		
		std::getline(std::cin, Guess);

		// chack status and give feedback
		Status = BCGame.CheckGuessValidity(Guess);
		switch (Status)
		{
		case EGuessStatus::NOT_ISOGRAM:
			std::cout << "Please enter a word without repeating letters";
			break;
		case EGuessStatus::WRONG_LENGTH:
			std::cout << "Please enter a " << BCGame.GetHiddenWordLength() << " letter word.\n";
			break;
		case EGuessStatus::NOT_LOWERCASE:
			std::cout << "Please enter a word with lowercase letters.\n";
			break;
		default:
			break;
		}
		std::cout << std::endl;
	} while (Status != EGuessStatus::OK);

	return Guess;
}

// loops the game 8 times 
void PlayGame()
{
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries();

	// loop asking for guesses while the game is NOT won
	// and there are still tries remaining 
	while (!BCGame.IsGameWon() && BCGame.GetCurrentTry() <= MaxTries)
	{
		FText Guess = GetValidGuess();

		// Submit valid guess to the game
		FBullCowCounts BullCowCount = BCGame.SubmitValidGuess(Guess);
		// print number of bulls and cows
		std::cout << "Bulls: " << BullCowCount.Bulls << " Cows: " << BullCowCount.Cows << std::endl;
	}
	PrintGameSummary();

	return;
}

void PrintGameSummary()
{
	if (BCGame.IsGameWon())
	{
		std::cout << "WELL DONE - You Win!\n";
	}
	else
	{
		std::cout << "Better luck next time\n";
	}
}

// prompt the users to answer if they want to play again or not
bool AskToPlayAgain()
{
	std::cout << "Do you play again with the same hidden word? (yes/no)";
	FText Response = "";
	std::getline(std::cin, Response);

	return (Response[0] == 'y' || Response[0] == 'Y');
}
