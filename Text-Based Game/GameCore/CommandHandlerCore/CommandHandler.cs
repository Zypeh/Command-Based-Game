using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Text_Based_Game.GameCore.CommandHandlerCore;

/*
 * The whole class is just redirecting the command to another class's method
 * Yep, it's gonna be redirected two times. From here to the language-detector class, then finally to the command class.
 * 
 * Do not ask me why.
 */

namespace Text_Based_Game.GameCore
{
    class CommandHandler
    {
        string NewLine = Environment.NewLine;

        public static string handleCommand(string command)
        {
            string result = "";

            switch(command)
            {
                case "help":
                    result = CommandHandlerCore.Help.command();
                break;

                default:
                    result = "Wrong command.";
                break;
            }


            return result;
        }
    }
}
