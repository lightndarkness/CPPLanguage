#include <iostream>

class LoopPractice
{
public:
	LoopPractice();
	~LoopPractice();

	static void PracticeWhileLoop();
	static void PracticeDoWhileLoop();
	static void PracticeForLoop();

private:

};

LoopPractice::LoopPractice()
{
}

LoopPractice::~LoopPractice()
{
}

void LoopPractice::PracticeWhileLoop()
{
	int x = 0;

	while (x < 5)
	{
		std::cout << "The value of x is " << x << std::endl;
		x++;
	}
}

void LoopPractice::PracticeDoWhileLoop()
{
	int x = 0;
	do
	{
		std::cout << "The value of x is " << x << std::endl;
		x++;
	} while (x < 10);
}

void LoopPractice::PracticeForLoop()
{
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			std::cout << "( " << x << " , " << y << " )" << std::endl;
		}
	}
}

int main()
{
	LoopPractice::PracticeForLoop();
}