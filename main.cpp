#include <stdio>
#include <strings>
#include <iostream>
#include "character.h"

using namespace std;

int main()
{
	//Initialize Variables
	string file = "NO_ENTRY";

	//Begin Program
	cout << "-- Dungeons & Dragons --\n-- Character Creator --\n";
}

void menu()
{
	//Initialize Variables
	int usrSel = 0;
	bool running = true;

	//Begin Functionality
	while(running)
	{
		cout << "New Character (1)\nLoad Character\nExit (3)\n";
		cout << "Make a selection: ";
		cin >> usrSel;
	}
}
