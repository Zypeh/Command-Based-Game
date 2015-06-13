using System;
using System.Collections.Generic;
using System.Text;
using Text_Based_Game.GameCore;

namespace Text_Based_Game.GameCore.ItemHandler
{
    /// <summary>
    /// The list of the items are here.
    /// </summary>
    public class ItemList
    {
        //The format is: Item <ITEM NAME HERE> = new Item("item name", max damage of the item, item type, description)
        Item CollosalOrder = new Item("Collosal Order", uint.MaxValue, "special", "Thanks for developing the awesome game, named Cities:Skylines!");
    }
}