using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Text_Based_Game.StringHandler;

namespace Text_Based_Game.GameCore.CommandHandlerCore
{
    class Help
    {
        public static string command()
        {
            string result = "";
            if (Language.lang == "en_US")
            {
                result = enUS() + Environment.NewLine;
            }
            return result;
        }

        public static string enUS()
        {
            return "" // well, OCD :)
            + "Command List"
            + Environment.NewLine
            + "====================="
            + Environment.NewLine
            + "help -- Shows all the commands you can use ingame."
            + Environment.NewLine
            + "check surrounding -- Shows everything that surrounds you."
            + Environment.NewLine
            + "player [health/hunger] -- Shows the health of the Player/Shows how hungry is the Player."
            + Environment.NewLine
            + "";
        }
    }
}
