using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Text_Based_Game.GameCore.ItemHandler
{
    public struct Item
    {
        public string ItemName { get; set; }
        public uint ItemMaxDamage { get; set; }
        public int ItemType { get; set; }
        public string ItemDescription { get; set; }

        public Item(string par1, uint par2, int par3, string par4)
        {
            ItemName = par1;
            ItemMaxDamage = par2;
            ItemType = par3;
            ItemDescription = par4;
        }

        public override bool Equals(object obj)
        {
            if (obj.GetType() != this.GetType()) return false;

            Item other = (Item)obj;
            return (this.ItemName == other.ItemName);
        }

        public override string ToString()
        {
            return ItemName + " Maximum damage:" + ItemMaxDamage.ToString() + "Is tool: " + ItemType.ToString() + "Description:" + ItemDescription;
        }

        public string GetItemName()
        {
            return ItemName;
        }
        public uint GetMaxDamage()
        {
            return ItemMaxDamage;
        }

        public int GetItemType()
        {
            return ItemType;
        }
    }

    enum ItemType
    {
        special,
        tool,
        crafting_ingredient,
        food,
        building_material,
        raw_material,
        fuel
    }
}