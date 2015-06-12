using System;
using System.Collections.Generic;
using System.Text;

namespace Text_Based_Game.GameCore.PlayerHandler
{
    class Status
    {
        public static int health;
        public static int hunger;
        
        /// <summary>
        /// Modifies player status. Type
        /// 0 modifies health, type 1 modifies
        /// hunger.
        /// </summary>
        /// <param name="type"></param>
        /// <param name="amount"></param>
        public static void modifyStatus(int type, int amount)
        {
            if (type == 0)
            {
                health += amount;
            }
            else
            {
                hunger += amount;
            }
        }
        
        /// <summary>
        /// Gets the status of the player.
        /// Type 0 gets health, Type 1 gets hunger.
        /// </summary>
        /// <param name="type"></param>
        public static int getStatus(int type)
        {
           if (type == 0) return health; else return hunger;
        }
    }
}
