using System;
using System.Collections.Generic;
using System.Text;

namespace Text_Based_game.GameHandler
{
    class TimeHandler
    {
        static int time = 00000;

        /// <summary>
        /// Gets the world time. Return int.
        /// Default string is "current", you can use "start" or "end"
        /// </summary>
        /// <returns></returns>
        public static int getTime(string type = "current")
        {
            if (type == "current")
            {
                return time;
            }
            else if (type == "start")
            {
                return 00000;
            }
            else if (type == "last")
            {
                return 2400;
            }
            else
            {
                throw new System.InvalidOperationException("Wrong type: getTime()");
            }
        }

        /*
         * Add time according to the action player made.
         * Mining, cutting wood will take some time
         * Building a house will take long time
         * etc.
         */

        /// <summary>
        /// Add time to the total time.
        /// </summary>
        /// <param name="addT"></param>
        public static void addTime(int addT) 
        {
            if (timeRunning == true)
            {
                time += addT;
            }   
        }

        /* 
         * These methods below are for debug use
         * not for normal use
         */

        static bool timeRunning;

        public static void setTime(int t)
        {
            time = t;
        }

        public void pauseTime()
        {
            timeRunning = false;
        }

        public void runTime()
        {
            timeRunning = true;
        }
    }
}