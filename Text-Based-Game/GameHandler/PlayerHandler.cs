/* Handles the player's health and hunger
 * Plan to do some methods like getInventory() (instead of C&P-ing codes over and over)
 * Probably more
 */

using System;
using System.Collections.Generic;
using System.Text;

namespace Text_Based_game.GameHandler
{
    class PlayerHandler
    {
        public static int health = 100;
        public static int hunger = 100;

        public static void modifyStatus(string type, int mod)
        {
            if (type == "health") 
            {
                health += mod;
            }
            else if (type == "hunger")
            {
                hunger += mod;
            }
            else
            {
                throw new NotImplementedException("Invalid type: modifyStatus()");
            }
        }

        public static int getStatus(string type)
        {
            int result = 0;
            switch(type)
            {
                case "health":
                    result = health;
                    break;

                case "hunger":
                    result = hunger;
                    break;

                default:
                    throw new NotImplementedException("Invalid type: getStatus()");
            }
            return result;
        }

        public static string getInventory()
        {
            string inventory = "";
            for (int i = 0; i < InventoryStorage.totalInvSlot; i++)
            {
                int r = i + 1;
                if (InventoryStorage.getInvItemsNameInSlot(i) == null | InventoryStorage.getInvItemsNameInSlot(i) == "") //
                {
                    inventory = inventory + Environment.NewLine + r.ToString() + "." + "Empty";
                }
                else
                {
                    inventory = inventory + Environment.NewLine + r.ToString() + "." + InventoryStorage.getInvItemsNameInSlot(i) + " (" + InventoryStorage.getInvItemsAmountInSlot(i) + ")";
                }

                if (i == InventoryStorage.totalInvSlot)
                {
                    i = 0;
                    break;
                    Console.WriteLine("I am unreachable :D");
                }
            }
            return inventory;
        }
    }
}
