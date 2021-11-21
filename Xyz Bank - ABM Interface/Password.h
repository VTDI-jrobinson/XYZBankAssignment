#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <chrono>
#include <stdio.h>

using namespace std;
class CL_password
{
public:

	int count = 0, ch;
	string passwd = "";


	void header();

	void userlogin();

	void loadbar(int a);

};
