#ifndef NPC_
#define NPC_

struct NPC
{
    std::string name;
    unsigned short health; // We are not going to have negative health, so unsigned
    unsigned short hunger; // same
    std::string type; // determine he is companion npcs, hostile npcs or what
    std::string additional_info; // additional infos
    int relationship; // I don't think i am going to explain this..
    int damage_resistance;
    int attack_damage;

    void ModHealth(short amount)
    {
        health += amount;
    }

    void ModHunger(short amount)
    {
        hunger += amount;
    }
};

#endif
