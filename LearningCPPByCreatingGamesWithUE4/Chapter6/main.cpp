#include "Dog.h"
#include "Cat.h"
#include "Human.h"

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

	human.~Human();
	cat.~Cat();
	dog.~Dog();

	cin.get();

	return 0;
}