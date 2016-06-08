#pragma once

#include <string>

class BankAccount
{
public:
	BankAccount();
	~BankAccount();

	std::string GetHolderName() { return "NotImplemented"; }

private:
	int BalanceInPennies;
//TODO: finishing writing this class

};

