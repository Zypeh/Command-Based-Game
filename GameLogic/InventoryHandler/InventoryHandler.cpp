/*
The code is bad, and I should feel bad.

-hch12907
*/

#include <iostream>
#include "Item.h"

using namespace std;

//player storage count, CANNOT BE CHANGED DURING RUNTIME. counting from 0.
const unsigned short stacks = 29;
//player is able to carry [stacks+1] stacks of items.
Item player_storage[stacks + 1];

void SortItems()
{
    for(int i = 0; i < stacks; i++)
    {
        Item last_item;
        if(player_storage[i].item_name == "" && player_storage[i + 1].item_name != "")
        {
            player_storage[i] = player_storage[i + 1];
        }
        else if(player_storage[i].item_name == "")
        {
            for(int i_1 = i; i_1 < stacks; i_1++)
            {
                if(player_storage[i_1].item_name != "")
                {
                    player_storage[i] = player_storage[i_1];
                }
            }
        }
    }
}

void AddItem(Item item, short amount)
{
    if (player_storage[29].item_name == "")
    for(int i = 0; i < stacks; i++) //looping through the inventory
    {
        if(player_storage[i].item_name != "" && (player_storage[i].item_name == item.item_name && !player_storage[i].IsStackFull()))
        {
            player_storage[i].current_amount += (((player_storage[i].current_amount += amount) <= player_storage[i].maximum_stack) ? amount : player_storage[i].maximum_stack - player_storage[i].current_amount);
            //checking whether the item amount is larger than the stack's maximum allowed number.
            while((player_storage[i].current_amount += amount) > player_storage[i].maximum_stack)
            {
                for(int i_1 = 0; i_1 < stacks; i_1++)
                {
                    if(player_storage[i_1].item_name != "")
                    {
                        player_storage[i_1].item_name = item.item_name;
                        player_storage[i_1].current_amount = player_storage[i].current_amount - player_storage[i].maximum_stack;
                        player_storage[i_1].maximum_stack = player_storage[i].maximum_stack;
                    }
                }
            }
        }
        else if(player_storage[i].item_name == "")
        {
            player_storage[i].setItem(item, amount, item.maximum_stack);
        }
    };
}

void RemoveItem(Item item, short amount)
{
    for(int i = 0; i < stacks; i++)
    {
        if(player_storage[i].item_name == item.item_name && !((player_storage[i].current_amount -= amount) < 0))
        {
            player_storage[i].current_amount -= amount;
        }
        else if(player_storage[i].item_name == item.item_name && ((player_storage[i].current_amount -= amount) < 0))
        {
            player_storage[i].resetItem();
            SortItems();
            for(int i_1 = 0; i_1 < stacks; i_1++)
            {
                if(i_1 != i && player_storage[i_1].item_name == item.item_name)
                {
                    player_storage[i_1].current_amount -= (item.maximum_stack - amount);
                }
            }
        }
    }
}

Item ReturnPlayerItem(int slot)
{
    return player_storage[slot];
}
