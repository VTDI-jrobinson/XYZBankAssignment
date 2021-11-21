#include "Accounttypes.h"



SavingsAccount::SavingsAccount(){}

SavingsAccount::SavingsAccount(double init_balance, float rate)
{
	setBalance(init_balance);
	interestRate = rate;
	
}

double SavingsAccount::calcInterest()
{
	return interestRate * this->getbalance();
}

void SavingsAccount::addInterest()
{
	setBalance(getbalance() + calcInterest());
	//cout << "Your new balance is: USD $" << setBalance(1000) << endl;
}

CheckingAccount::CheckingAccount()
{}

CheckingAccount::CheckingAccount(double init_balance, double fee)
{
	setBalance(init_balance);
	transactionFee = fee;
}

bool CheckingAccount::withdraw(double amount)
{
	amount += transactionFee;
	double balance = this->getbalance();

	if (balance - amount < 0)
	{
		return false;
	}
	this->setBalance(balance - amount);
	return true;
}
