#include <memory>

void allocate()
{
	try
	{
		Squawker inner{ "Inner" };
		std::unique_ptr<Squawker> pS{ new Squawker{ "Heap" } };
		throw (std::exception{ "Trouble" });
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}
