#ifndef ITEM
#define ITEM

#include <map>
struct ItemProperty
{
    std::string property_name;
    std::string property_description;
    std::map<std::string, int> property_info;
};

struct Item
{
    std::string item_name = ""; // Item name
    int type = 0;
    ItemProperty properties[];
    unsigned int maximum_stack = 0; // Maximum items per stack
    unsigned int current_amount = 0; // Current amount player owns
    bool CompareName(Item item)
    {
        // this one should be set during item declaration!
        return (item_name == item.item_name);
    }

    bool IsStackFull()
    {
        return (current_amount >= maximum_stack);
    }

    void setItem(std::string name, int amnt, int stck, ItemProperty property[])
    {
        item_name = name;
        current_amount = amnt;
        maximum_stack = stck;
   //     properties = property;
    }
};

#endif
