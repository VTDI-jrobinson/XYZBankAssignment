#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Transaction.h"
#include <fstream>

using namespace std;

class Account
{
protected:
	double balance;
	vector<Transaction> log;

public:

	Account();

	Account(double b);

	void setBalance(double pub_defaultbal);

	double getbalance();

	bool deposit(double amount);

	bool withdraw(double amount);

	vector<std::string> report();

	void addLog(Transaction transaction);

	


};