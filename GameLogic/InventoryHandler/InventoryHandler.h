#ifndef INVENTORY_HANDLER
#define INVENTORY_HANDLER

void SortItems();
void AddItem(Item item, short amount);
void RemoveItem(Item item, short amount);
Item ReturnPlayerItem(int slot);

#endif
