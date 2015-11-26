struct Item
{
    string item_name; // Item name
    int maximum_stack; // Items per stack

    bool CompareName(Item item)
    {
        // this one should be set during item declaration!
        return (item_name == item.item_name);
    }
};
//EXAMPLES OF DECLARING ITEMS
Item apple {"apple", 16};

