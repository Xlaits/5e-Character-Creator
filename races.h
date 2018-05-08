#include <iostream>
#include <string>

using namespace std;

class Races()
{
private:
	string race, size;
	int speed;

public:
	Races(string ra = "Human", string si = "Medium", int sp = "30")
	{
		race = ra;
		size = si;
		speed = sp; 
	}
	
	string modRace(int mode = 0, string ra = "NULL")
	{
		if(mode == 0)
			return race;
		else if(mode ==1)
			race = ra;
	}
	
	string modSize(int mode = 0, string si = "NULL")
	{
		if(mode == 0)
			return size;
		else if(mode ==1)
			size = si;
	}
	
	int modSpeed(int mode = 0, int sp = 0)
	{
		if(mode == 0)
			return speed;
		else if(mode ==1)
			speed = sp;
	}
};