#include <iostream>

use namespace std;

unsigned short health;
unsigned short hunger;

unsigned short GetStatus(int type)
{
    /* 0 returns health, 1 returns hunger */

    return (type == 0 ? health : hunger);
}

void SetStatus(int type, unsigned short amount)
{
    if (type == 0)
    {
        health += amount;
    }
    else
    {
        health -= amount;
    }
}

void ReturnInventory()
{
   /* whether move this function to
    * InventoryHandler or leave it
    * here -hch12907
    */
}
