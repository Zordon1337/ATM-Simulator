#include <iostream>
#include <windows.h>
#include <shellapi.h>
#include <stdlib.h>
using namespace std;


string PIN;
string login;
string haslo;




int bankomat()
{
	cout << "Welcome in Mega ATM\n" << endl;
	cout << "please enter your pin: ";
	cin >> PIN;
	if (PIN == "5555")
	{
		cout << "Correct pin";
		ShellExecute(0, 0, L"https://web.azordon.cf/bank.html", 0, 0, SW_SHOW);
	}
	else
	{
		system("color c");
		system("cls");
		cout << "Pin is wrong try again\n" << endl;
		system("timeout 1 > nul");
		system("Color 07");
		system("cls");
		return bankomat();
	}
	return 0;
}

int main()
{
	return bankomat();
}