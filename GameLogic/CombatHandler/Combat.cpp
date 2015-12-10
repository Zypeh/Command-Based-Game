#include <iostream>
#include "../PlayerHandler/PlayerStatusHandler.h"
#include "../NPCHandler/NPC.h"
#include "../InventoryHandler/Item.h"
#include "../../common/randomizer.h"

using namespace std;

void Attack(NPC npc, Item tool)
{
    int randomDamage;

    if(randomBool)
    {
        randomDamage = randomInt(-2, 2);
    }

    npc.ModHealth((tool.item_attackdamage + randomDamage) - npc.damage_resistance);
}

void EnemyAttack()
{
    int randomResistance = randomInt(-3, 3);

    ModStatus(0, npc.attack_damage + randomResistance);
}
