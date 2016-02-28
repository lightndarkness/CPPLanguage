
void allocate()
{
	try
	{
		Squawker inner{ "Inner" };
		Squawker* pS{ new Squawker{ "Heap" } };
		throw (std::exception{ "Trouble" });
		delete pS;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}
