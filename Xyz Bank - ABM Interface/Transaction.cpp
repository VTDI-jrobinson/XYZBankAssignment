
#include "Transaction.h"

Transaction::Transaction(double amt, std::string kind)
{
	amount = amt;
	type = kind;
}

std::string Transaction::Report()
{
	std::cout << "Transaction: " << type << "\nAmount: " << amount;
	return std::string();
}

std::string Transaction::getType()
{
	return type;
}

double Transaction::getAmount()
{
	return amount;
}
