#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Car
{
public:
	Car();
	Car(int _MaxSpeed, double _Weight, bool _IsTheCarOn);
	~Car();

	/** Allow to print all the variables of the car */
	void PrintVariables();

	/** Allow to upgrade the min speed of the car */
	void UpgradeMaxSpeed();

	/** Allow to get in a person in the car */
	void GetIn();

	/** Allow to get out a person from the car */
	void GetOut();

	/** Allow to turn the car on */
	void TurnTheCarOn();

	/** Returns the miles the car can do with the remaining gas */
	double HowManyMilesTillOutOfGas();

	/** Returns the miles the car can do with a gas fill up */
	double MaxMilesPerFillUp();

	/** Getter for maxSpeed */
	int GetMaxSpeed();

	/** Getter for weight */
	double GetWeight();

	/** Getter for knowing if the car is on */
	bool GetIsTheCarOn();

	/** Setter for maxSpeed */
	void SetMaxSpeed(int _Value);

private:
	int maxSpeed = 100;
	int minSpeed = 0;
	int numberOfPeopleInCar = 1;
	int maxNumberOfPeopleInCar = 6;

	double weight = 4079;
	double maxFuel = 16;
	double currentFuel = 8;
	double mpg = 26.4;

	bool isTheCarOn = false;

	char condition = 'A';

	string nameOfCar = "Lucy";
};

Car::Car()
{

}

Car::Car(int _MaxSpeed, double _Weight, bool _IsTheCarOn)
{
	maxSpeed = _MaxSpeed;
	weight = _Weight;
	isTheCarOn = _IsTheCarOn;


}

Car::~Car()
{
}

void Car::PrintVariables()
{
	// print out all the properties the car has
	cout << "This is the maxSpeed " << maxSpeed << endl;
	cout << minSpeed << endl;
	cout << weight << endl;
	cout << maxFuel << endl;
	cout << currentFuel << endl;
	cout << isTheCarOn << endl;
	cout << condition << endl;
	cout << nameOfCar << endl;
}

void Car::UpgradeMaxSpeed()
{
	SetMaxSpeed(GetMaxSpeed() + 10);
}

void Car::GetIn()
{
	//numberOfPeopleInCar = numberOfPeopleInCar + 1;
	// if the number of people in the car is less than the max number of people the car can take
	if (numberOfPeopleInCar < maxNumberOfPeopleInCar)
	{
		// add one to number of people 
		numberOfPeopleInCar++;
		// print out the fact that someone get in
		cout << "Someone get in" << endl;
	}
	else
	{
		// otherwise print out the fact that the car is full
		cout << "The car is full: " << numberOfPeopleInCar << " = " << maxNumberOfPeopleInCar << endl;
	}
}

void Car::GetOut()
{
	//numberOfPeopleInCar = numberOfPeopleInCar - 1;
	// if the number of people in the car is greater than 0...
	if (numberOfPeopleInCar > 0)
	{
		// subtract one people
		numberOfPeopleInCar--;
	}
	else
	{
		// otherwise print out the fact that there is no one in the car
		cout << "No one is in the car " << numberOfPeopleInCar << endl;
	}
}
	

void Car::TurnTheCarOn()
{
	// If the car isn't on...
	if (!isTheCarOn)
	{
		// turn the car on
		isTheCarOn = true;
	}
	else
	{
		// otherwise print out the fact it's on
		cout << "The car is already on " << boolalpha << isTheCarOn << endl;
	}
}

double Car::HowManyMilesTillOutOfGas()
{
	// return the miles the car can do with the remaining gas.
	return currentFuel * mpg;
}

double Car::MaxMilesPerFillUp()
{
	// returns the miles the can do with a gas fill up.
	return maxFuel * mpg;
}

int Car::GetMaxSpeed()
{
	// Returns the maxSpeed
	return this->maxSpeed;
}

double Car::GetWeight()
{
	// Returns the weight
	return this->weight;
}

bool Car::GetIsTheCarOn()
{
	// Returns if the car is on
	return this->isTheCarOn;
}

void Car::SetMaxSpeed(int _Value)
{
	// Set maxSpeed to a new value
	this->maxSpeed = _Value;
	// Leave the function
	return;
}

int main()
{
	
	Car tommyCar;
	tommyCar.GetOut();
	tommyCar.GetOut();
	tommyCar.GetIn();
	tommyCar.GetIn();
	tommyCar.GetIn();
	tommyCar.GetIn();
	tommyCar.GetIn();
	tommyCar.GetIn();
	tommyCar.GetIn();
	tommyCar.TurnTheCarOn();
	tommyCar.TurnTheCarOn();
	tommyCar.PrintVariables();


	//int n;
	//cin >> n;

	//// Check if n is odd or if it is even and between 6 and 20
	//if ((n % 2 != 0) || (n % 2 == 0) && (n >= 6 && n <= 20))
	//{
	//	// print "Weird"
	//	cout << "Weird" << endl;
	//}
	//
	//// else if it is even and between 2 and 5 or if it is even and greater than 20
	//else if ((n % 2 == 0) && (n >= 2 && n <= 5) || (n % 2 == 0) && n > 20)
	//{
	//	// print "Not Weird"
	//	cout << "Not Weird" << endl;
	//}


	
	return 0;
}