using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;

namespace Text_Based_game
{
    public class Program
    {
        static void Main(string[] args) //if possible, don't modify this. 
        {
            Thread firstClassToLoad = new Thread(ThreadHandler.MainThread.MainClass);
            firstClassToLoad.Start();
        }
    }
}
