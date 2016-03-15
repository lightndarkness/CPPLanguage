#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	/*std::cout << "Counting forward:\n";
	for (int i = 0; i < 10; ++i)
	{
		std::cout << i << " ";
	}

	std::cout << "\n\nCounting backward:\n";
	for (int i = 9; i >= 0; --i)
	{
		std::cout << i << " ";
	}

	std::cout << "\n\nCounting by five:\n";
	for (int i = 0; i <= 50; i += 5)
	{
		std::cout << i << " ";
	}

	std::cout << "\n\nCounting with null statements:\n";
	int count = 0;
	for (; count < 10;)
	{
		std::cout << count << " ";
		++count;
	}

	std::cout << "\n\nCounting with nested for loops:\n";
	const int ROWS = 5;
	const int COLUMNS = 3;
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			std::cout << i << "," << j << " ";
		}

		std::cout << std::endl;
	}*/

	/*std::string word1 = "Game";
	std::string word2("Over");
	std::string word3(3, '!');

	std::string phrase = word1 + " " + word2 + word3;

	std::cout << "The phrase is " + phrase << "\n\n";

	std::cout << "The has " << phrase.size() << " characters in it.\n\n";

	std::cout << "The character at position 0 is " << phrase[0] << "\n\n";

	std::cout << "Changing the character at position 0.\n";
	phrase[0] = 'L';
	std::cout << "The phrase now is " << phrase << "\n\n";

	for (unsigned int i = 0; i < phrase.size(); ++i)
	{
		std::cout << "Character at position " << i << " is: " << phrase[i] << std::endl;
	}

	std::cout << "The sequnce \"Over\" begins at location ";
	std::cout << phrase.find("Over") << std::endl;

	if (phrase.find("eggplant") == std::string::npos)
	{
		std::cout << "\"eggplant\" is not in the phrase.\n\n";
	}

	phrase.erase(4, 5);
	std::cout << "The phrase is now: " << phrase << std::endl;

	phrase.erase(4);
	std::cout << "The phrase is now: " << phrase << std::endl;

	phrase.erase();
	std::cout << "The phrase is now: " << phrase << std::endl;

	if (phrase.empty())
	{
		std::cout << "\nThe phrase is no more.\n";
	}
	*/

	/*
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];

	int numItems = 0;
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";

	cout << "Your items:\n";
	for (int i = 0; i < numItems; i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "You trade the sword for a battle axe." << endl;
	inventory[0] = "battle axe";
	cout << "\nYour items: ";
	for (int i = 0; i < numItems; i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "The item name " << inventory[0] << " has ";
	cout << inventory[0].size() << " letters in it.\n";

	cout << "You find an healing potion.";
	if (numItems < MAX_ITEMS)
	{
		inventory[numItems++] = "healing potion";
	}
	else
	{
		cout << "You have too many items and can't carry another.";
	}
	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; i++)
	{
		cout << inventory[i] << endl;
	}
	*/

	/*
	const int ROWS = 3;
	const int COLUMNS = 3;

	char board[ROWS][COLUMNS] = 
	{ 
		{'0', 'X', '0'},
		{' ', 'X', 'X'},
		{'X', '0', '0'} 
	};

	cout << "Here is the tic tac toe board:\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "\n'X' moves to the empty location.\n\n";
	board[1][0] = 'X';

	cout << "Now the tic tac toe board is:\n";
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << board[ROWS][COLUMNS];
		}
		cout << endl;
	}

	cout << "X wins!" << endl;
	*/

	enum fields {WORD, HINT, NUM_FIELDS};
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Do you feel you're banging your head aginst something?"},
		{"glasses", "These might help you see the answer."},
		{"labored", "Going slowly, is it?"},
		{"persistent", "Keep at it."},
		{"jumble", "It's what the game is all about."}
	};

	srand(static_cast<unsigned int>(time(0)));
	int choise = (rand() % NUM_WORDS);
	string theWord = WORDS[choise][WORD];
	string theHint = WORDS[choise][HINT];

	int points = theWord.size() * 2;

	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length; i++)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "\t\tWelcome to the Word Jumbler!\n\n";
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter \"hint\" for a hint.\n";
	cout << "Enter \"quit\" to quit the game.\n";
	cout << "The jumble is: " << jumble;

	string guess;
	cout << "\nYour guess: ";
	cin >> guess;

	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
			cout << theHint;
			points /= 2;
		}
		else
		{
			cout << "Sorry, that's not it.";
		}

		cout << "\n\nYour guess: ";
		cin >> guess;
	}

	if (guess == theWord)
	{
		cout << "That's it! You guessed it!\n";
		cout << "You earned " << points << " points.\n";
	}

	cout << "Thanks for playing.\n";

	return 0;
}