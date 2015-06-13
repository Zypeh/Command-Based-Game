using System;
using System.Collections.Generic;
using System.Text;

namespace Text_Based_Game.StringHandler
{
    class Reference
    {
        public const int major = 0;
        public const int minor = 0;
        public const int build = 1;
        public const string version_stage = "pre-alpha";
        public const string game_name = "text-based game";

        public const int InventoryTotalSlot = 30;
        public const int ItemStackAmount = 64;

        public static string version(string type = "version")
        {
            if (type == "version")
            {
                return major + "." + minor + "." + build;
            }
            else
            {
                return version_stage;
            }
        }
    }
}
