#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <cmath>
#include <array>

class MadLibs
{
public:
	MadLibs();
	~MadLibs();

	/** Getters */
	std::string GetStory();
	std::string GetName();
	std::string GetAdjective1();
	std::string GetAdjective2();
	std::string GetNoun1();
	std::string GetNoun2();
	std::string GetNoun3();
	std::string GetAdverb();
	std::string GetRandomNums();

	/** Setters */
	void SetStory(std::string _NewStory);
	void SetName(std::string _NewName);
	void SetAdjective1(std::string _NewAdjective1);
	void SetAdjective2(std::string _NewAdjective2);
	void SetNoun1(std::string _NewNoun1);
	void SetNoun2(std::string _NewNoun2);
	void SetNoun3(std::string _NewNoun3);
	void SetAdverb(std::string _NewAdverb);
	void SetRandomNums();

	void PrintInstructions();
	void EnterName();
	void EnterNoun1();
	void EnterNoun2();
	void EnterNoun3();
	void EnterAdjective1();
	void EnterAdjective2();
	void EnterAdverb();
	void PutTogetherTheStory();
	void Play();

private:
	std::string story;
	std::string name;
	std::string adjective1;
	std::string adjective2;
	std::string noun1;
	std::string noun2;
	std::string noun3;
	std::string adverb;
	std::string randomNums;
};

MadLibs::MadLibs()
{
}

MadLibs::~MadLibs()
{
}

std::string MadLibs::GetStory()
{
	return story;
}

std::string MadLibs::GetName()
{
	return name;
}

std::string MadLibs::GetAdjective1()
{
	return adjective1;
}

std::string MadLibs::GetAdjective2()
{
	return adjective2;
}

std::string MadLibs::GetNoun1()
{
	return noun1;
}

std::string MadLibs::GetNoun2()
{
	return noun2;
}

std::string MadLibs::GetNoun3()
{
	return noun3;
}

std::string MadLibs::GetAdverb()
{
	return adverb;
}

std::string MadLibs::GetRandomNums()
{
	return randomNums;
}

void MadLibs::SetStory(std::string _NewStory)
{
	this->story = _NewStory;
}

void MadLibs::SetName(std::string _NewName)
{
	this->name = _NewName;
}

void MadLibs::SetAdjective1(std::string _NewAdjective1)
{
	this->adjective1 = _NewAdjective1;
}

void MadLibs::SetAdjective2(std::string _NewAdjective2)
{
	this->adjective2 = _NewAdjective2;
}

void MadLibs::SetNoun1(std::string _NewNoun1)
{
	this->noun1 = _NewNoun1;
}

void MadLibs::SetNoun2(std::string _NewNoun2)
{
	this->noun2 = _NewNoun2;
}

void MadLibs::SetNoun3(std::string _NewNoun3)
{
	this->noun3 = _NewNoun3;
}

void MadLibs::SetAdverb(std::string _NewAdverb)
{
	this->adverb = _NewAdverb;
}

void MadLibs::SetRandomNums()
{
	int num = (abs(rand() % 100) + 1);
	unsigned int index = 0;
	std::array<int, 3> numberHolder;

	while (index < numberHolder.size())
	{
		numberHolder[index] = num + index;
		index++;
	}
	randomNums = "not " + std::to_string(numberHolder[0]) + ", not "
		+ std::to_string(numberHolder[1]) + ", but " + std::to_string(numberHolder[2]);
}

// Print instruction to the player
void MadLibs::PrintInstructions()
{
	std::cout << "Welcome to the MadLibs game. If you type in "
		<< "words, we'll give you a story. Start by typing in a name." << std::endl;
}

// Get data from the player
void MadLibs::EnterName()
{
	std::string newName;
	std::getline(std::cin, newName);
	SetName(newName);
}

void MadLibs::EnterNoun1()
{
	std::cout << "Give me a noun!" << std::endl;
	std::string newNoun1;
	std::getline(std::cin, newNoun1);
	SetNoun1(newNoun1);
}

void MadLibs::EnterNoun2()
{
	std::cout << "Give me another noun!" << std::endl;
	std::string newNoun2;
	std::getline(std::cin, newNoun2);
	SetNoun2(newNoun2);
}

void MadLibs::EnterNoun3()
{
	std::cout << "Give me the last noun!" << std::endl;
	std::string newNoun3;
	std::getline(std::cin, newNoun3);
	SetNoun3(newNoun3);
}

void MadLibs::EnterAdjective1()
{
	std::cout << "I need an adjective." << std::endl;
	std::string newAdjective1;
	std::getline(std::cin, newAdjective1);
	SetAdjective1(newAdjective1);
}

void MadLibs::EnterAdjective2()
{
	std::cout << "I really need an alpaca... just kidding,"
		<< " give me another adjective." << std::endl;
	std::string newAdjective2;
	std::getline(std::cin, newAdjective2);
	SetAdjective2(newAdjective2);
}

void MadLibs::EnterAdverb()
{
	std::cout << "PLEASE! I really want an adverb!" << std::endl;
	std::string newAdverb;
	std::getline(std::cin, newAdverb);
	SetAdjective2(newAdverb);
}

void MadLibs::PutTogetherTheStory()
{
	std::string newStory;
	int num = abs(rand() % 2);

	if (num == 0)
	{
		newStory = "Jesse and her best friend " + GetName() + " went to Disney World today! "
			+ "They saw a " + GetNoun1() + " in a show at the Magic Kingdom "
			+ " and ate a " + GetAdjective1() + " feast for diner. The next day I "
			+ " ran " + GetAdverb() + " to meet Mickey Mouse in his " + GetNoun2() + " "
			+ "and then that night I gazed at the " + GetRandomNums() + " "
			+ GetAdjective2() + " fireworks shooting from the " + GetNoun3() + ".";
	}
	else
	{
		newStory = "Amanda and her frenemy " + GetName() + " went to the zoo last summer. "
			+ "They saw a huge " + GetNoun1() + " and a tiny little " + GetNoun2() + ". That night"
			+ " they decided to climb " + GetAdverb() + "into the " + GetNoun3() + " to get a closer look. "
			+ "The zoo was " + GetAdjective1() + " at night, but they didn't care... "
			+ "until " + GetRandomNums() + " " + GetAdjective2() + " apes yelled in their faces, making "
			+ "Amanda and " + GetName() + " sprint all the way back home.";
	}
	

	SetStory(newStory);
}

void MadLibs::Play()
{
	EnterName();
	EnterNoun1();
	EnterAdjective1();
	EnterAdjective2();
	EnterNoun2();
	EnterAdverb();
	EnterNoun3();
	SetRandomNums();
	PutTogetherTheStory();
	std::cout << GetStory() << std::endl;
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	MadLibs game = MadLibs();

	game.PrintInstructions();
	game.Play();
	
	return 0;
}