#include <iostream>

using namespace std;

unsigned short health;
unsigned short hunger;
unsigned short resistance;

unsigned short returnPlayerStatus(string type)
{
    if(type == "health") return health;
    else if(type == "hunger") return hunger;
    else if(type == "resistance") return resistance;
    else return 0;
}

void ModPlayerHealth(short amount)
{
    health += amount;
}

void ModPlayerHunger(short amount)
{
    hunger += amount;
}

void SetPlayerResistance(short amount)
{
    resistance = amount;
}
