using System;
using System.Collections.Generic;
using System.Text;
using Text_Based_game.GameHandler;

namespace Text_Based_game
{
    class CommandHandler
    {
        public static string handleCommand(string command)
        {
            string result = "";
            switch (command)
            {
                case "check":
                    result = "Wrong 'check' command. Use 'help' to get detailed information about this command.";
                    break;

                case "check time":
                    result = TimeHandler.getTime().ToString();
                    break;

                case "debug add item":
                       result = debugMode(command);
                       break;
                case "debug remove item":
                       result = debugMode(command);
                    break;

                case "check surrounding":
                    result = WorldHandler.getWorld();
                    break;

                case "check health":
                    result = "Your health: " + PlayerHandler.getStatus("health") + "%";
                    break;

                case "check hunger":
                    if (PlayerHandler.getStatus("hunger") >= 20)
                    {
                        result = "You are full.";
                    }
                    else
                    {
                        result = "You are hungry.";
                    }
                    break;

                case "check inv":
                    //or
                case "check inventory":

                    result = PlayerHandler.getInventory();
                    break;

                case "help":
                    result = "List of commands:" + Environment.NewLine + "========================================" + Environment.NewLine + "check[time/surrounding/hunger/health/inventory/inv]" + Environment.NewLine + "build [home]" + Environment.NewLine + "goto [home/furnace/crafting table]" + Environment.NewLine + "open [furnace/chest/crafting table/door]" + Environment.NewLine + "go inside [home]" + Environment.NewLine + "attack [hand/sword]" + Environment.NewLine + "craft [crafting table]" +  Environment.NewLine + "clear";
                    break;

                case "exit":           
                    ThreadHandler.MainThread.exitProgram = true;
                    break;

                case "clear":
                    Console.Clear();
                    break;
                default:
                    result = "Wrong/WIP command";
                    break;
            }
            return result;
        }

        public static string debugMode(string command)
        {
            string result = "";
            if (command.Contains("debug add item") == true)
            {
                Console.WriteLine("Name:");
                string itemName = Console.ReadLine();
                Console.WriteLine("Amount:");
                int itemAmount = Convert.ToInt32(Console.ReadLine());
                InventoryStorage.addInvItems(itemName, itemAmount);
                result = "added";
            }
            else if (command.Contains("debug remove item") == true)
            {
                Console.WriteLine("Name:");
                string itemName = Console.ReadLine();
                Console.WriteLine("Amount:");
                int itemAmount = Convert.ToInt32(Console.ReadLine());
                InventoryStorage.removeInvItemsFromName(itemName, itemAmount);
                result = "added";
            }

            return result;
        }
    }
}
