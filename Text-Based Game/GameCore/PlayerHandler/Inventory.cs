using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using Text_Based_Game.StringHandler;

namespace Text_Based_Game.GameCore.PlayerHandler
{
    class Inventory
    {
        public string[] item = new string[StringHandler.Reference.InventoryTotalSlot];
        /// <summary>
        /// Gets the info of the item according to the slot. 
        /// Type 0 gets item name, type 1 gets item amount.
        /// Default gets item name.
        /// </summary>
        /// <param name="slot"></param>
        /// <param name="type"></param>
        public static string getItemInfoFromSlot(int slot, int type)
        {
            return String.Empty;
        }

        /// <summary>
        /// Gets the slot number from the name of the specified item.
        /// If there's multiple stack of the item, returns the
        /// highest amount of the stack.
        /// If they have the same amount, returns randomly.
        /// </summary>
        public static int getSlotFromName()
        {
            return 0;
        }


        /// <summary>
        /// Adds item to a new slot, adds item to a existing slot
        /// if the item already exists in one of the slots.
        /// </summary>
        public static void addItem()
        {

        }
    }
}
