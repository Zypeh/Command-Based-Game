#ifndef NPC
#define NPC

struct NPC
{
    std::string name;
    int health;
    int hunger;
    std::string type;
    std::string additional_info;
    int relationShip;

    void ModHealth(int amount)
    {
        health += amount;
    }

    void ModHunger(int amount)
    {
        hunger += amount;
    }
}

#endif
