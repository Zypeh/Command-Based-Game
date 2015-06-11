using System;
using System.Collections.Generic;
using System.Text;

namespace Text_Based_game.GameHandler
{
    class InventoryStorage
    {
        public static string[] InvItemsName = new string[24];
        public static int[] InvItemsAmount = new int[24];
        public const uint totalInvSlot = 24; 

        /// <summary>
        /// Gets the item name in specified slot. Gets the items in slot 0
        /// if the slot is unspecified.
        /// </summary>
        /// <param name="slot"></param>
        /// <returns></returns>
        public static string getInvItemsNameInSlot(int slot = 0)
        {
            return InvItemsName[slot];
        }

        /// <summary>
        /// Gets the amount of item in specified slot. Gets the items in slot 0
        /// if the slot is unspecified.
        /// </summary>
        /// <param name="slot"></param>
        /// <returns></returns>
        public static int getInvItemsAmountInSlot(int slot = 0)
        {
            return InvItemsAmount[slot];
        }

        /// <summary>
        /// Adds an item.
        /// </summary>
        /// <param name="item"></param>
        public static void addInvItems(string item, int amount)
        {
            for (int i = 0; i < totalInvSlot; i++)
            {
                if (InvItemsName[i] == item || InvItemsName[i] == "" || InvItemsName[i] == null)
                {
                    InvItemsName[i] = item;
                    InvItemsAmount[i] = InvItemsAmount[i] + amount;
                    break;
                }
                
            }
        }

        /// <summary>
        /// Add specified amount to a item.
        /// </summary>
        /// <param name="item"></param>
        /// <param name="amount"></param>
        public static void addAmount(string item, int amount)
        {
            for (int i = 0; i < totalInvSlot; i++)
            {
                if (InvItemsName[i] == item)
                {
                    InvItemsAmount[i] = InvItemsAmount[i] + amount;
                }
            }
        }

        /// <summary>
        /// Remove a item from player inv.
        /// </summary>
        /// <param name="slot"></param>
        public static void removeInvItemsFromSlot(int slot, int amount)
        {
            InvItemsName[slot] = "";
            InvItemsAmount[slot] = 0;
        }

        public static void removeInvItemsFromName(string name, int amount)
        {
            for (int i = 0; i < totalInvSlot; i++)
            {
                if (InvItemsName[i] == name)
                {
                    InvItemsName[i] = "";
                    InvItemsAmount[i] = 0;
                    break;
                }
            }
                
        }
    }
}
