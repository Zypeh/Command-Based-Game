#ifndef ITEM
#define ITEM

struct Item
{
    std::string item_name = ""; // Item name
    int maximum_stack = 0; // Items per stack
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

    void setItem(std::string name, int amnt, int stck)
    {
        item_name = name;
        current_amount = amnt;
        maximum_stack = stck;
    }
};
#endif

