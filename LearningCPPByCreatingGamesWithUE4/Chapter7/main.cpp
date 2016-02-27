// main.cpp

#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	Player()
	{
		cout << "Player spawned" << endl;
	}
	~Player()
	{
		cout << "Player died" << endl;
	}
};

int main()
{
	// dynamic allocation using the new keyword
	Player *player = new Player();
	delete player; // deletion invoke dtor

	int array[5]; // declare an "array" of 5 integers
				  // fill slots 0-4 with values

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	
	// print out the contents
	for (int index = 0; index < 5; index++)
	{
		cout << array[index] << endl;
	}

	string names[5]{ "Gianni", "Gustavo", "Carmela", "Silvia", "Giulia" };

	for (int index = 0; index < 5; index++)
	{
		cout << names[index] << endl;
	}

	double temps[3]{ 16, 15, 15 };

	for (int index = 0; index < 3; index++)
	{
		cout << temps[index] << endl;
	}

	// c++ style dynamic array
	cout << "How Big?" << endl;
	int size;
	cin >> size;

	int* array2 = new int[size];

	for (int index = 0; index < size; index++)
	{
		array2[index] = index * 2;
		cout << array2[index] << endl;
	}

	delete[] array2; // must call delete[] on array allocated with new[]

	// c style dynamic array
	cout << "How Big?" << endl;
	int cSize;
	cin >> cSize;

	int* cArray = (int*)malloc(size*sizeof(int)); // C style

	for (int index = 0; index < size; index++)
	{
		cArray[index] = index * 2;
		cout << cArray[index] << endl;
	}

	free(cArray); // must call free() on array allocated with malloc() (not delete[])

	cin.get();
	return 0; // no automatic player object deletion
}