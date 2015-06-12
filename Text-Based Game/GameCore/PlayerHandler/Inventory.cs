using System;
using System.Collections.Generic;
using Text_Based_Game.StringHandler;

namespace Text_Based_Game.GameCore.PlayerHandler
{
    class Inventory
    {
        public static string[] ItemName = new string[Reference.InventoryTotalSlot];
        public static int[] ItemAmount = new int[Reference.InventoryTotalSlot];

        /// <summary>
        /// Gets the info of the item according to the slot. 
        /// Type 0 gets item name, type 1 gets item amount.
        /// Default gets item name.
        /// </summary>
        /// <param name="slot"></param>
        /// <param name="type"></param>
        public static string getItemInfoFromSlot(int slot, int type)
        {
            if (type == 0) return ItemName[slot]; else return ItemAmount[slot].ToString();
        }

        /// <summary>
        /// Gets the slot number from the name of the specified item.
        /// </summary>
        public static int getSlotFromItem(string item)
        {
            int result = 0;
            for(int i = 0; i < Reference.InventoryTotalSlot; i++)
            {
                if(ItemName[i] == item)
                {
                    result = i;
                    break;
                }
            }
            return result;
        }


        /// <summary>
        /// Adds item to a new slot, adds item to a existing slot
        /// if the item already exists in one of the slots.
        /// </summary>
        public static void addItem(string itemName, int amount)
        {
            for (int i = 0; i < Reference.InventoryTotalSlot; i++ ) //obviously loop.
            {
                if (ItemName[i] == itemName) //checks if the item already exists in player's inventory, if not, create a new slot and put the item into it
                {
                    if (ItemAmount[i] >= Reference.ItemStackAmount) //if the item amount exceeds the max, create a new slot...
                    {
                        for (int i_2 = 0; i_2 < Reference.InventoryTotalSlot; i_2++) //obviously loop.
                        {
                            if (ItemName == null) //if the slot is empty, put the item into it
                            {
                                ItemName[i_2] = itemName;
                                break;
                            }
                        }
                        break;
                    }
                    else
                    {
                        if ((ItemAmount[i] += amount) > Reference.ItemStackAmount) //checks if the "after-adding-amount" exceeds the max amount.
                        {
                            for (int i_3 = 0; i_3 < Reference.InventoryTotalSlot; i_3++) //obviously loop.
                            {
                                if (ItemName == null) //if the slot is empty, put the item into it
                                {
                                    ItemName[i_3] = itemName;
                                    break;
                                }
                            }
                            break;
                        }
                        else
                        {
                            ItemAmount[i] += amount; //...or add the amount if it doesn't exceeds the max.
                            break;
                        }
                    }
                }
                else
                {
                    if(ItemName == null)
                    {
                        ItemName[i] = itemName;
                        break;
                    }
                }
            }
        }

        /// <summary>
        /// Removes specified amount of a specified item.
        /// </summary>
        /// <param name="item"></param>
        /// <param name="amount"></param>
        public static void removeItem(string item, int amount)
        {
            for(int i = 0; i < Reference.InventoryTotalSlot; i++)
            {
                if(ItemName[i] == item)
                {
                    if ((ItemAmount[i] -= amount) >= 0)
                    {
                        ItemAmount[i] -= amount;
                    }
                    else
                    {
                        ItemName[i] = null;
                        ItemAmount[i] = 0;
                    }
                }
            }
        }

        /// <summary>
        /// Returns the list of the items' name as array.
        /// </summary>
        /// <returns></returns>
        public static string[] ItemNameArray()
        {
            return ItemName;
        }

        /// <summary>
        /// Returns the list of the items' name as array.
        /// </summary>
        /// <returns></returns>
        public static int[] ItemAmountArray()
        {
            return ItemAmount;
        }
    }
}
