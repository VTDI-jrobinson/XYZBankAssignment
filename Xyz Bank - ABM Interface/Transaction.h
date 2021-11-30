#include <iostream>
class Transaction
{
private:
	double amount;
	std::string type;

public:
	Transaction(double amt, std::string kind);
	std::string Report();

};
