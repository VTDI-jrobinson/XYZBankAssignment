#include "Account.h"


Account::Account()
{
}

Account::Account(double b)
{
	balance = b;
	if (balance <= 1000.00)
	{
		balance = 0;
		cout << "Balance is invalid, please urgently make a deposit of atleast: $1000.00\n";
		system("pause");
		system("cls");
		
	}
}

void Account::setBalance(double pub_defaultbal)
{
		balance = pub_defaultbal;
}

double Account::getbalance()
{

    return balance;
}

bool Account::deposit(double amount)
{
	balance += amount;
	return true;
}

bool Account::withdraw(double amount)
{
	if (balance - amount < 0)
	{
		return false;
	}
	balance -= amount;
	return true;
}


