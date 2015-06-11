using System;
using System.Collections.Generic;
using System.Text;
using Text_Based_game.GameHandler;

namespace Text_Based_game.ThreadHandler
{
    class MainThread
    {
        public static bool exitProgram;

        public static void MainClass()
        {
            WorldHandler.worldGen(); //runs the world generator
            Console.WriteLine("A text-based game based on Minecraft. Version " + "*.* (pre-pre-alpha)" + Environment.NewLine + "You woke up on a strange island." + Environment.NewLine + "You are surrounded with " + WorldHandler.getWorld());
            while (true)
            {
                if (exitProgram == false)
                {
                     
                    string command = Console.ReadLine(); 
                    Console.WriteLine(CommandHandler.handleCommand(command)); //Gets input, then handle the input and output the result
                    Console.WriteLine("Command(type 'help' to get the list of commands):" + Helper.newLineString()); //create a new line
                }
                else { return; } //return will exit the application with code 0(basically, 0 means successfully exit)
            }
        }
    }
}
