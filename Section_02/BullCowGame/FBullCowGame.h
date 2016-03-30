#pragma once
#include <string>

using FString = std::string;
using int32 = int;
using uint32 = unsigned int;

/** Two integers initialized to zero */
struct FBullCowCounts
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

enum class EGuessStatus
{
	INVALID,
	OK,
	NOT_ISOGRAM,
	WRONG_LENGTH,
	NOT_LOWERCASE
};

class FBullCowGame
{
public:
	FBullCowGame();
	~FBullCowGame();
	void Reset();
	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	int32 GetHiddenWordLength() const;
	void SetCurrentTry();
	void SetMaxTries();
	bool IsGameWon() const;
	EGuessStatus CheckGuessValidity(FString Guess) const;
	/** A method for counting Bulls and Cows, and increasing try number */
	FBullCowCounts SubmitValidGuess(FString Guess);

private:
	int32 MaxTries = 5;
	int32 CurrentTry = 1;
	FString HiddenWord;
	bool bIsGameWon;
	
	bool bIsIsogram(FString);
};
