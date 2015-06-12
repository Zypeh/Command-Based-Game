using System;
using System.Collections.Generic;
using System.Text;
using Text_Based_Game.StringHandler;
using Text_Based_Game.GameCore;

namespace Text_Based_Game
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("You are playing " + Reference.game_name + ", version " + Reference.version());
            while(true)
            {
                Console.WriteLine(CommandHandler.handleCommand(Console.ReadLine()));
            } 
        }

        public static void print(string input)
        {
            Console.WriteLine(input);
        }
    }
}
