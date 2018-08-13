#include <iostream>
#include <string>

class CoreStats
{
private:
    int strength, dexterity, inteligence, wisdom, constitution, charisma;

public:
    CoreStats(int st = 10, int dx = 10, int in = 10, int ws = 10, int cn = 10, int ca = 10)
    {
        strength = st;
        dexterity = dx;
        inteligence = in;
        wisdom = ws;
        constitution = cn;
        charisma = ca;
    }
};
