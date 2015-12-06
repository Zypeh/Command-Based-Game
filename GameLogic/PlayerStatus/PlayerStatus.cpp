#include <iostream>

using namespace std;

unsigned short health;
unsigned short hunger;

unsigned short GetStatus(int type)
{
    /* 0 returns health, 1 returns hunger */
    return (type == 0 ? health : hunger);
}

void ModStatus(int type, short amount)
{
    if (type == 0)
    {
        health += amount;
    }
    else if(type == 1)
    {
        hunger += amount;
    }
}
