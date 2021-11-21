#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Account.h"
#include <stdlib.h>
#include "Password.h"
#include <Windows.h>

using namespace std;

class SavingsAccount : public Account
{
private:
	float interestRate = 0.05;

public:

	SavingsAccount();

	SavingsAccount(double init_balance, float rate);

	double calcInterest();	

	void addInterest();
};

class CheckingAccount : public Account
{
public:
	double transactionFee = 107.00;

	CheckingAccount();

	CheckingAccount(double init_balance, double fee);

	bool withdraw(double amount);


};


