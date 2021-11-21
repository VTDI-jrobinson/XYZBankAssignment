#pragma once
#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
	double balance;

public:

	Account();

	Account(double b);

	void setBalance(double pub_defaultbal);

	double getbalance();

	bool deposit(double amount);

	bool withdraw(double amount);


};