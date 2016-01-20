#include "stdafx.h"                                                   //I'm currently learning c++, which I find hard to do.
#include <Windows.h>                                                  //This is just some example code from my book, I changed it in
#include <iostream>                                                   //such a way that the user is able to store data in 'minuten'
#include "String.h"                                                   //The program will then calculate how many hours it is
#include <ctime>                                                      
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	int minuten, uren, restMinuten;				//Initialization of 3 variables
	
	cout << "Enter the amount of minutes..." << endl;                 //Text that'll be displayed
	cout << "Voer het aantal minuten in..." << endl;
	cin >> minuten;                                                   //User's input that'll be stored in the variable 'minuten'
	cin.get();
	cout << "Thank you! Generating answer..." << endl;
	Sleep(1000);

	minuten = (cin, minuten);
	uren = minuten / 60;
	restMinuten = minuten % 60;

	cout << minuten << " minuten = ";
	cout << uren << " uur en ";					//tekst naar	
	cout << restMinuten << " minuten" << endl;			//uitvoerscherm

	cout << "Press Enter to close the program..." << endl;
	cin.get();
	return 0;
}
