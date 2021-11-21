#include "Password.h"

void CL_password::header()
{
	cout << "\n=======================================================================================================================";
	cout << "\n============================================*                           *==============================================";
	cout << "\n============================================*          XYZ Bank         *==============================================";
	cout << "\n============================================*                           *==============================================";
	cout << "\n=======================================================================================================================\n\n";

}

void CL_password::userlogin()
{
	cout << "\n\n\t\t\t\t\t   Please to Enter Your Password:\n\t\t\t\t\t\t\t ";
	while (ch = _getch()) //assign Ascii value to ch
	{

		if (ch == 13) { //check ch after press RETURN key;
			if ((passwd == "1234"))
			{
				cout << "\n\n\t\t\t\t\tYou've successfully login to your account" << endl;
				system("pause");
				system("cls");
				break;
			}
			cout << "\n\n\t\t\t\t\tYou've entered the wrong password. Please to try again!!\n";
			system("pause");
			system("cls");
			passwd = "";
			count++;
			header();
			cout << "\n\n\t\t\t\t\t   Please to Enter Your Password:\n\t\t\t\t\t\t\t ";
			if (count == 3) 
			{
				cout << "\n\nYou have exceeded the maximum login attempts.. " << endl;

				return;
			}

		}
		else if (ch == 8)
		{ //check ch after press BACKSPACE key; 
			if (passwd.length() > 0)
			{//set condition blocking error while input
				cout << "\b \b";//remove Mask * on screen;
				passwd.erase(passwd.length() - 1); //erase String length
			}
		
		}
		else 
		{
			cout << "*";
			passwd += ch; //the input password was assigned to variable passwd.
		}
	}
}

void CL_password::loadbar(int a)
{
	int b = a / 2;
cout << "\n\n\n\n\n\t\t\t\t\t Loading.";
	for (int i = 0; i < a; i++)
	{
		
		Sleep(500);
		cout << ".";
		if (i == b)
		{
			cout << "\n\n\n\n\t\t\t\t\t XYZ Interface initializing...";
			Sleep(1000);
			system("cls");
			cout << "\n\n\n\n\t\t\t\t\t loading.";

		}
		Sleep(600);
		cout << ".";
		Sleep(700);
		

	}
	system("cls");
	cout << "\n\n\n\n\t\t\t\t\t Welcome to XYZ Bank.. \n";
	system("pause");
	system("cls");
	

}

