#include <iostream>
#include "../PlayerHandler/PlayerStatusHandler.h"
#include "../NPCHandler/NPC.h"
#include "../InventoryHandler/Item.h"
#include "../../common/randomizer.h"

using namespace std;

void Attack(NPC npc, Item tool)
{
    int randomDamage;
    if(randomBool())
    {
        randomDamage = randomInt(-2, 2);
    }

    //npc.ModHealth((tool.properties + randomDamage) - npc.damage_resistance);
}

void EnemyAttack(NPC npc)
{
    int randomResistance = randomInt(-3, 3);

    ModPlayerHealth(npc.attack_damage + randomResistance);
}
