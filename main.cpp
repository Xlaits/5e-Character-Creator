#include <stdio>
#include <strings>
#include <iostream>
#include "character.h"

using namespace std;

void menu();
void charNew();
void charLoad();

int main()
{
	//Initialize Variables

	//Begin Program
	menu();
	
	return 0;
}

void menu()
{
	//Initialize Variables
	int usrSel = 0;
	bool running = true;

	//Begin Functionality
	while(running)
	{
		cout << "-- Dungeons & Dragons --\n-- Character Creator --\n";
		cout << "New Character (1)\nLoad Character\nExit (3)\n";
		cout << "Make a selection: ";
		cin >> usrSel;
		if(userSel == 1)
			charNew();
		else if(userSel == 2)
			charLoad();
		else if(userSel == 3)
			running = false;
		else
			cout << "Error: No option " << userSel << " availabe. Try again.\n";
	}
}

void charLoad()
{
	//Initialize Variables
	
	//Begin Functionality
}

void charNew()
{
	//Initialize Variables
	
	//Begin Functionality
}