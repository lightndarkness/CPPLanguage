#include "FBullCowGame.h"

FBullCowGame::FBullCowGame()
{
	Reset();
}

FBullCowGame::~FBullCowGame()
{
	
}

void FBullCowGame::Reset()
{
	int32 constexpr MAX_TRIES = 8;
	const FString HIDDEN_WORD = "planet";
	
	MaxTries = MAX_TRIES;
	HiddenWord = HIDDEN_WORD;
	CurrentTry = 1;
	bIsGameWon = false;
	
	return;
}

int32 FBullCowGame::GetMaxTries() const { return MaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return CurrentTry; }
int32 FBullCowGame::GetHiddenWordLength() const { return HiddenWord.length(); }

void FBullCowGame::SetCurrentTry()
{
	return;
}

void FBullCowGame::SetMaxTries()
{
	return;
}

bool FBullCowGame::IsGameWon() const
{
	return bIsGameWon;
}

EGuessStatus FBullCowGame::CheckGuessValidity(FString Guess) const
{
	// if the guess isn't an isogram, 
	if (false)
	{
		return EGuessStatus::NOT_ISOGRAM; // TODO write function
	}
	// if the guess isn't all lowercase
	else if (false)
	{
		return EGuessStatus::NOT_LOWERCASE; // TODO write function
	}
	// if the guess length is wrong
	else if (Guess.length() != GetHiddenWordLength())
	{
		return EGuessStatus::WRONG_LENGTH;
	}
	// otherwise
	else
	{
		// return OK
		return EGuessStatus::OK;
	}
}

// Receive a valid guess, increments turn, and return counts
FBullCowCounts FBullCowGame::SubmitValidGuess(FString Guess)
{
	CurrentTry++;
	// setup a return varaible
	FBullCowCounts BullCowCount;
	// loop through all letters in the guess
	for (uint32 i = 0; i < HiddenWord.length(); i++)
	{
		// compare letters against the hidden word
		for (uint32 j = 0; j < HiddenWord.length(); j++)
		{
			// if they match
			if (Guess[i] == HiddenWord[j])
			{
				if (i == j)
				{
					// increment bulls if they are on the same place
					BullCowCount.Bulls++;
				}
				else
				{
					// else increment cows if not
					BullCowCount.Cows++;
				}
			}
		}
	}
	if (BullCowCount.Bulls == HiddenWord.length())
	{
		bIsGameWon = true;
	}
	else
	{
		bIsGameWon = false;
	}
	return BullCowCount;
}

bool FBullCowGame::bIsIsogram(FString)
{
	return false;
}
