#include <iostream>//Header files - Complier access these for pre instructions stored
#include <string>
#include <fstream>
#include "Account.h"
#include <stdlib.h>
#include "Password.h"
#include <Windows.h>
#include "Accounttypes.h"


//Jamoi Robinson - 2017000887
//Ramoy Roberts - 2017000871
//Errol Greenland - 2017001595
//Melessia Barnes
//Password to enter = 1234

using namespace std;


CL_password gpass;
int G_selection = 1;
int AC_selection = 1;
double G_withdrawal = 0, G_deposit = 0;
Transaction obj = Transaction(0.00, "");






void displayACTypes()//Select Account type options
{
	gpass.header();
	cout <<"\t\t\t    >>1. Savings Account                           Chequing Account .2<<" << endl;
	cout << "\t\t\t                             Your Selection: ";
	cin >> AC_selection;
	system("cls");
}

void displayAtmOp() //Display ATM interface or options
{


	gpass.header();
	cout << "\n************MENU LIST***********" << endl;
	cout << "\n\n >> 1. Check Bal." << endl;
	cout << "\n\n >> 2. Withdrawal" << endl;
	cout << "\n\n >> 3. Deposit" << endl;
	cout << "\n\n >> 4. Exit" << endl;
	cout << "\n\nYour Selection: ";
	cin >> G_selection;


	system("cls");
}

void atmSelectopSavings(SavingsAccount &x)//Manipulate Accounts using a switch statement for saving account
{
	
	switch (G_selection)		
	{
	case 1:
		cout << "\nYour Bal is: USD $" << x.getbalance() << endl;
		

		system("pause");
		system("cls");


		break;
		
	case 2:
		cout << "\nEnter Withdrawal Amount: USD $";
		cin >> G_withdrawal;
		if (x.withdraw(G_withdrawal) == false) 
		{
			cout << "You need money\n\n";
		}
		else
		{
			cout << "\nYour Balance after Debit is: USD $" << x.getbalance() << endl << endl; 
			obj = Transaction(G_withdrawal, "Withdrawal");
			x.addLog(obj);
		}
		system("pause");
		system("cls");

		break;

	case 3:
		cout << "\nEnter Deposit Amount: USD $";
		cin >> G_deposit;
		x.deposit(G_deposit);
		cout << "\nYour Balance after Credit is: $" << x.getbalance() << endl << endl;
		obj = Transaction(G_deposit, "Deposit");
		x.addLog(obj);

		system("pause");
		system("cls");
		
		
		break;

	case 4:
		x.report();
		cout << "\n\n\nTHANK YOU FOR USING XYZ BANK" << endl;
		system("pause");
		system("cls");

	}

}

void atmSelectopChequing(CheckingAccount &x)//Manipulate Accounts using a switch statement for saving account
{
	
	switch (G_selection)
	{
	case 1:
		cout << "\nYour Bal is: USD $" << x.getbalance() << endl << endl;

		

		system("pause");
		system("cls");

		break;

	case 2:
		cout << "\nEnter Withdrawal Amount: USD $";
		cin >> G_withdrawal;
		if (x.withdraw(G_withdrawal) == false)
		{
			cout << "You need money\n\n";
		}
		else
		{
			cout << "\nYour Balance after Debit is: USD $" << x.getbalance() << endl << endl;
			
			cout << "\nFee charged is USD 107.00\n";
			obj = Transaction(G_withdrawal, "Withdrawal");
			x.addLog(obj);

		}
		system("pause");
		system("cls");

		break;

	case 3:
		cout << "\nEnter Deposit Amount: USD $";
		cin >> G_deposit;
		x.deposit(G_deposit);
		cout << "\nYour Balance after Credit is: $" << x.getbalance() << endl << endl;
		cout << "Transaction Fee: USD $" << x.transactionFee << endl;
		obj = Transaction(G_deposit, "Deposit");
		x.addLog(obj);

		system("pause");
		system("cls");

		break;

	case 4:
		x.report();
		cout << "\nTHANK YOU FOR USING XYZ BANK" << endl;
		system("pause");
		system("cls");

	}

}

int main()
{
	
	CL_password pass;
	SavingsAccount acc = SavingsAccount(1000, 0.15);
	CheckingAccount c_acc = CheckingAccount(1000, 107);
	
	
	pass.header();
	pass.userlogin();
	pass.loadbar(0);
	displayACTypes();
	acc.addInterest();

	do
	{
		if (AC_selection == 1)
		{
			displayAtmOp();
			atmSelectopSavings(acc);
		}
		else
		{	
			displayAtmOp();
			atmSelectopChequing(c_acc);
		}
	} while (G_selection < 4);

	main();
}

