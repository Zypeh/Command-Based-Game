#ifndef ITEM
#define ITEM

#include <map>
#include <array>

/*
struct ItemProperty
{
    std::string property_name;
    std::string property_description;
    std::map<std::string, int> property_info[10]; //temporary, may use std::array from C++11
};
*/

struct Item
{
    std::string item_name = ""; // Item name
    int type = 0;
//    ItemProperty properties[];
    unsigned int maximum_stack = 0; // Maximum items per stack
    unsigned int current_amount = 0; // Current amount player owns
    std::array<std::map<string, int> , 10> properties; //temporarily 10 elements only

    bool CompareName(Item item)
    {
        // this one should be set during item declaration!
        return (item_name == item.item_name);
    }

    bool IsStackFull()
    {
        return (current_amount >= maximum_stack);
    }

    void setItem(Item item, int amnt, int stck)
    {
        item_name = item.item_name;
        type = item.type;
        current_amount = amnt;
        maximum_stack = stck;

        /*This is also temporary! We need to think something...

        for(int i = 1; i < 10; i++)
        {
            properties[i-1] = property[i-1];
        }
        */
    }

    void resetItem()
    {
        item_name = "";
        type = 0;
        current_amount = 0;
        maximum_stack = 0;
    }
};
#endif
