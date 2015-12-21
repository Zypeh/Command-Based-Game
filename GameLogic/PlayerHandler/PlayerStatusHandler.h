#ifndef PLAYER_STATUS_HANDLER
#define PLAYER_STATUS_HANDLER

unsigned short returnPlayerStatus(std::string type);
void ModPlayerHealth(short amount);
void ModPlayerHunger(short amount);
void SetPlayerResistance(short amount);

#endif // PLAYER_STATUS_HANDLER
