#include <iostream>
#include <string>

#include "backgrounds.h"
#include "classes.h"
#include "equipment.h"
#include "mainStats.h"
#include "skills.h"
#include "spells.h"

using namespace std;

class Character
{
private:
    string name, race, charSize, scales, breath;
	int speed, sp;
	const string races[14] = {"Hill Dwarf", "Mountain Dwarf", "High Elf", "Wood Elf", "Drow", "Lightfoot Halfling", "Stout Halfling", "Human", "Dragonborn", "Forest Gnome", "Rock Gnome", "Half-Elf", "Half-Orc", "Tiefling"};
	const string scaleChrome[5] = {"Black", "Blue", "Green", "Red", "White"};
	const string scaleMetal[5] = {"Brass", "Bronze", "Copper", "Gold", "Silver"};

public:
    Character(string charname = "NULL", string ra = "Human", string si = "Medium", int sp = 30, string sc = "NULL", string br = "NULL")
    {
        name = charname;
        race = ra;
		scales = sc;
		charSize = si;
		speed = sp;
		breath = br;
    }

    string modName(int mode = 0, string charname = "NULL")
    {
        if(mode == 0)
            return name;
        else if(mode == 1)
            name = charname;
    }

	string modRace(int mode = 0, int ra = NULL)
	{
		// Defaults to returning race.
		int usrInt = 0;
		if(mode == 0)
			return race;
		else if(mode == 1)
        {
            race = races[ra];
            if(ra == 8)
            {
                cout << "Chromatic Scales(1) or Metal Scales(2): ";
                cin.sync();
                cin >> usrInt;
                if(usrInt == 1)
                {
                    cout << "Black(1), Blue(2), Green(3), Red(4), or White(5): ";
                    cin.sync();
                    cin >> usrInt;
                    scales = scaleChrome[usrInt - 1];
                }
                else if(usrInt == 2)
                {
                    cout << "Brass(1), Bronze(2), Copper(3), Gold(4), or Silver(5): ";
                    cin.sync();
                    cin >> usrInt;
                    scales = scaleMetal[usrInt];
                }
            }
        }
	}

	string modSize(int mode = 0, string si = "NULL")
	{
		// Defaults to returning Size
		if(mode == 0)
			return charSize;
		else if(mode == 1)
			charSize = si;
	}

	int modSpeed(int mode = 0, int sp = 0)
	{
		// Defaults to returning Speed
		if(mode == 0)
			return speed;
		else if(mode == 1)
			speed = sp;
	}

};
