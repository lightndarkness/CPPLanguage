#include <iostream>
#include <cstdlib>
#include "Sales_item.h"

int main()
{
	// variable to hold data for the next transaction
	Sales_item total{};

	// read the first transaction and ensure that there are data to process
	if (std::cin >> total)
	{
		// variable to hold how many times there are the same book
		int count{1};
		
		// varaible to hold the current transaction
		Sales_item trans{}; 
		
		// reading and process the remaining transactions
		while (std::cin >> trans) 
		{
			//if we are still processing the same book
			if (trans.isbn() == total.isbn())
			{
				// update the running total
				total += trans;
				// add one to the count
				++count;
			}
			else
			{
				// otherwise print results for the previous book 
				std::cout << std::endl << "For book No " << total.isbn() << " there are "
					<< count << " transactions " << std::endl << total << std::endl;;

				// total now refers to the next book
				total = trans;
				// reset the count
				count = 1;
			}
		}
		// print the result for the last book
		std::cout << std::endl << "For book No " << total.isbn() << " there are "
			<< count << " transactions " << std::endl << total << std::endl;
	}
	else
	{
		// otherwise print that there are no data
		std::cerr << "No Data?!" << std::endl;
		// indicate the failure
		return -1;
	}
	
	return 0;
}

