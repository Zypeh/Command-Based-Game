struct Item
{
    string item_name; // Item name
    int maximum_stack; // Items per stack
    unsigned int current_amount; // Current amount player owns

    bool CompareName(Item item)
    {
        // this one should be set during item declaration!
        return (item_name == item.item_name);
    }

    bool IsStackFull()
    {
        return (current_amount >= maximum_stack)
    }

    void setCurrentAmount(int amount)
    {
        current_amount += amount;
    }
};
//EXAMPLES OF DECLARING ITEMS
Item apple {"apple", 16};

