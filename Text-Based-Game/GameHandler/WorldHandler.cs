using System;
using System.Collections.Generic;
using System.Text;

namespace Text_Based_game
{
    class WorldHandler //this class handles the game's world
    {
        static Random rnd = new Random();
        
        // world related
        public static int treeCount;
        public static int grassCount;
        public static bool cave;
        public static string caveSize;

        // animal related
        public static int animalCount;
        public static string animalType;

        // monster related
        public static string monsterType = "";
        public static int monsterCount;

        // ore related
        public static bool dirt, stone, copper, iron, gold, diamond; //The ore spawnlist. dont ask why dirt is included!


        
        public static void worldGen() //generates trees
        {
           treeCount = rnd.Next(3, 40); //randomly generates trees, between 3 and 40
           grassCount = rnd.Next(2, 20); //randomly generates grasses, between 2 and 20
           animalCount = rnd.Next(2, 15);//randomly generates animals, between 2 and 15
           animalType = " pigs, "; //choose a random animal, based on grass count

           if (rnd.NextDouble() >= 0.9) { cave = true; } else { cave = false;} // randomly generates cave
           if (rnd.NextDouble() == 0.9) {caveSize = "big";} else { caveSize = "small";} // randomly chooses cave size

            if (grassCount > 10)
            {
                animalType = " chickens, ";
            }
            else if (grassCount > 25)
            {
                animalType = " pigs, ";
            }
            else if (grassCount > 30)
            {
                animalType = " cows, ";
            }
        }

        public static void monsterGen() //generates monsters
        {
            monsterCount = rnd.Next(1, 3);
            if (GameHandler.TimeHandler.getTime() >= 12000)
            {
                double d = rnd.NextDouble();

                for (int i = 0; i < 10; i++)
                {
                    d += rnd.Next(1, 9);
                }

                    if (d <= 60.0)
                    {
                        monsterType = monsterCount.ToString() + " Spider";
                    }
                    else if (d > 60.0)
                    {
                        monsterType = monsterCount.ToString() + " Zombie";
                    }
                    else if (d <= 0.1)
                    {
                        monsterType = monsterCount.ToString() + " Demon Cow(There is no cow level!)";
                    }
                    else
                    {
                        monsterType = "";
                    }
            }
        }

        public static string oreGen(int level) //generates ores
        {
            if (level <= 0)
            {
                dirt = false;
                stone = false;
                copper = false;
                iron = false;
                gold = false;
                diamond = false;

                return "The mining level is too low!";
            }
            else if (level <= 15)
            {
                dirt = false;
                stone = true;
                copper = true;
                iron = true;
                gold = true;
                diamond = true;

                return "Mining...";
            }
            else if (level <= 25)
            {
                dirt = false;
                stone = true;
                copper = true;
                iron = true;
                gold = true;
                diamond = false;

                return "Mining...";
            }
            else if (level <= 50)
            {
                dirt = false;
                stone = true;
                copper = true;
                iron = true;
                gold = false;
                diamond = false;

                return "Mining...";
            }
            else if (level <= 60)
            {
                dirt = false;
                stone = true;
                copper = true;
                iron = false;
                gold = false;
                diamond = false;

                return "Mining...";
            }
            else if (level <= 65)
            {
                dirt = false;
                stone = true;
                copper = false;
                iron = false;
                gold = false;
                diamond = false;

                return "Mining...";
            }
            else if (level <= 70)
            {
                dirt = true;
                stone = false;
                copper = false;
                iron = false;
                gold = false;
                diamond = false;

                return "Mining...";
            }
            else
            {
                return "The mining level is too high!";
            }
        }

        public static string getWorld() //gets the final result
        {
            if (cave == true)
            {
                return treeCount.ToString() + " trees, " + animalCount + animalType + grassCount.ToString() + " grasses and a " + caveSize + " cave.";

            }
            else
            {
                return treeCount.ToString() + " trees, " + animalCount + animalType + grassCount.ToString() + " grass(es).";
            }
        }

    }
}
