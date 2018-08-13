#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <istream>
#include "character.h"
#include "clearScreen.h"

using namespace std;

void menu();
void charNew();
void charLoad();
void raceSel(Character);

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
	    ClearScreen();
		cout << "-- Dungeons & Dragons --\n-- Character Creator --\n\n";
		cout << "   New Character  (1)\n   Load Character (2)\n   Exit           (3)\n\n";
		cout << "Make a selection: ";
		cin.sync(); //Clearing input buffer.
		cin >> usrSel;
		if(usrSel == 1)
			charNew();
		else if(usrSel == 2)
			charLoad();
		else if(usrSel == 3)
			running = false;
		else
			cout << "Error: No option " << usrSel << ". Try again.\n";
	}
}

void charLoad()
{
	//Initialize Variables
	ofstream charfile;
	string character = "NULL";

	//Begin Functionality
	ClearScreen();
	cout << "Please enter a character name: ";
	cin >> character;
}

void charNew()
{
	//Initialize Variables
	Character newChar;
	ofstream charFile;
	string character;

	//Begin Functionality
	ClearScreen();
	cout << "Please enter a character name: ";
	cin.sync();
	getline(cin, character);
	newChar.modName(1, character);
	raceSel(newChar);
}

void raceSel(Character newChar)
{
	//Initialize Variables
    int usrInt;
    bool run = True;
	//Begin Functionality
    cout << "What is " << newChar.modName() << "'s race?\n";
	cout << "Dwarf(1), Elf(2), Halfling(3), Human(4), Dragonborn(5), Gnome(6), Half-Elf(7), Half-Orc(8), or Teifling(9): ";
	cin.sync();
	cin >> usrInt;
	if(usrInt == 1)
    {
        cout << "Hill Dwarf(1) or Mountain Dwarf(2)?";
        cin.sync();
        cin >> usrInt;
        if (usrInt == 1)
            newChar.modRace(1,0);
        else
            newChar.modRace(1,1);
    }
    else if(usrInt == 2)
    {
        run = True;
        while (run == True)
        {
            cout << "High Elf(1), Wood Elf(2), or Drow(3): ";
            cin.sync();
            cin >> usrInt;
            if (usrInt == 1)
            {
                newChar.modRace(1,2);
                run = False;
            }
            else if(usrInt == 2)
            {
                newChar.modRace(1,3);
                run = False;
            }
            else if(usrInt == 3)
            {
                newChar.modRace(1,4);
                run = False;
            }
            else
                cout << "That was not a choice. Please try again.";
        }
    }
    else if(usrInt == 3)
    {
        run = True;
        while(run = True)
        {
        cout << "Lightfoot Halfling(1) or Stout Halfling(2): ";
        cin.sync();
        cin >> usrInt;
        if(usrInt == 1)
        {
            newChar.modRace(1,5);
            run = False;
        }
        else if(usrInt == 2)
        {
            newChar.modRace(1,6);
            run = False;
        }
        else
            cout << "That is not an option. Try again.";
        }
    }
}
