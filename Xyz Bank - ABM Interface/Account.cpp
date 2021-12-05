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

vector<std::string> Account::report()
{
	std::cout << "*******Transaction Logs********" << std::endl;
	for(int count=0; count < log.size(); count++)
	{
		std::cout << "\nEntry " << count + 1 << ":" << std::endl;
		std::cout << "\nTransaction: " << log[count].getType() << "\nAmount: " << log[count].getAmount();
		std::cout << "\n======================================\n";
	}

	ofstream myfile;
	myfile.open("ACC.txt");
	for (int count = 0; count < log.size(); count++)
	{
		myfile << "\nEntry " << count + 1 << ":" << std::endl;
		myfile << "\nTransaction: " << log[count].getType() << "\nAmount: " << log[count].getAmount();
		myfile << "\n======================================\n";
	}
	myfile.close();
	
	return vector<std::string>();
}

void Account::addLog(Transaction transaction)
{
	log.push_back(transaction);
}


