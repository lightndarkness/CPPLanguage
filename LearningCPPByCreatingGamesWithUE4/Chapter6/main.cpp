#include <iostream>
#include <string>

using namespace std;

class Mammal
{
protected:
	// protected variables are like privates: they are
	// accessible in this class but not outside the class.
	// the difference between protected and private is
	// protected means accessible in derived subclasses also

	int hp;
	double speed;

public:
	// Mammal constructor - runs FIRST before derived class ctor
	Mammal()
	{
		hp = 100;
		speed = 1.0;
		cout << "A mammal is created!" << endl;
	}

	~Mammal()
	{
		cout << "A mammal has fallen" << endl;
	}

	// Common function to all Mammals and derivatives
	void breath()
	{
		cout << "Breath in... breath out" << endl;
	}

	virtual void talk()
	{
		cout << "Mammal talk... override this function!" << endl;
	}
	// pure virtual function
	virtual void walk() = 0;
};

class Dog : public Mammal
{
public:
	Dog()
	{
		cout << "A dog is born!" << endl;
	}
	~Dog()
	{
		cout << "A dog has died" << endl;
	}

	virtual void talk() override
	{
		cout << "Woof!" << endl;
	}
	// implements walking for a dog
	virtual void walk() override
	{
		cout << "Left front paw & back right paw, right front paw" << endl;
	}
};

class Cat : public Mammal
{
public:
	Cat()
	{
		cout << "A cat is born" << endl;
	}
	~Cat()
	{
		cout << "A cat has died" << endl;
	}

	virtual void talk() override
	{
		cout << "Meow!" << endl;
	}
	// implements walking for a cat... same as dog!
	virtual void walk() override
	{
		cout << "Left front paw & back right paw, right front paw" << endl;
	}
};

class Human : public Mammal
{
	// Data member unique to Human
	bool civilized;
public:
	Human()
	{
		cout << "A new human is born" << endl;
		speed = 2.0; // change speed. Since derived class ctor
		// (ctor is short for constructor!) runs after base
		// class ctor, initialization sticks initialize member
		// variables specific to this class
		civilized = true;
	}
	~Human()
	{
		cout << "The human has died!" << endl;
	}

	virtual void talk() override
	{
		cout << "I'm good looking for a... human" << endl;
	}
	// implements walking for a human...
	virtual void walk() override
	{
		cout << "Left, right, left, right at the speed of " << speed << endl;
	}
	// member functions uniqur to human derivative
	void attack()
	{
		if (civilized)
		{
			cout << "Why would a human attack an other?" << endl;
		}
		else
		{
			cout << "A human attacks another" << endl;
		}
	}
};

struct Armor
{
private:
	string name;
	int armorClass;
	int durability;

public:
	int getArmorClass() const { return armorClass; }
	void setArmorClass(int value) { armorClass = value; }
};

struct Player
{
private:	// begins private section... cannot be accessed
			// outside the class until
	string name;
	int hp;
	Armor shield;

public:	// until HERE. This begins the public section
	// this member function is accessible from outside the struct
	// becouse it is in the section merked public:

	string getName() const { return name; }

	void setName(string value) { name = value; }

	int getHp() const { return hp; }

	void setHp(int value) { hp = value; }

	Armor getArmor() const { return shield; }

	void setArmor(Armor value) { shield = value; }

	// The constructor
	Player()
	{
		cout << "Player object constructed" << endl;
		name = "Diplo";
	}
	// ~Destructor
	~Player()
	{
		cout << "Player object destroied" << endl;
	}


	// A member function that reduces player hp by some amount
	void damage(int dmgAmount)
	{
		int reduction = dmgAmount - shield.getArmorClass();
		if (reduction < 0)  // make sure non-negative!
		{
			reduction = 0;
		}
		hp -= reduction;
	}
	void recover(int amount)
	{
		hp += amount;
	}
};

int main()
{
	Player me;

	me.setName("Tom");
	me.setHp(100);
	me.getArmor().setArmorClass(10);

	string s = "strings are objects";
	s.append("!!"); // add on "!!" to end of the string
	cout << s << endl;

	me.damage(15);

	cout << "Player named '" << me.getName() << "'" << endl;

	Human human;
	human.breath();
	human.talk();
	human.walk();

	Cat cat;
	cat.breath();
	cat.talk();
	cat.walk();

	Dog dog;
	dog.breath();
	dog.talk();
	dog.walk();

	return 0;
}