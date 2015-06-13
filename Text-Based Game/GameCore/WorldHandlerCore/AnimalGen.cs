using System;
using System.Collections.Generic;
using System.Text;

namespace Text_Based_Game.GameCore.WorldHandlerCore
{
    class AnimalGen
    {
        Random rand = new Random();
        
        protected int generate(string animalType) //this is ran on startup.
        {
            int sheep = rand.Next(rand.Next(0, 3), rand.Next(9, 15)); //Double random because I liek it
            int cow = rand.Next(rand.Next(0, 4), rand.Next(7, 10));
            int chicken = rand.Next(rand.Next(0, 2), rand.Next(10, 13));

            if (animalType == "sheep")
            {
                return sheep;
            }
            else if (animalType == "cow")
            {
                return cow;
            }
            else if (animalType == "chicken")
            {
                return chicken;
            }
            else
            {
                throw new ArgumentException("Invalid animal type.");
            }
        }

    }
}
