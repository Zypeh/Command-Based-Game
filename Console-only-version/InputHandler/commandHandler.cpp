#include <iostream>
#include <cstdlib>

using namespace std;

#include "CommandList\Commands.h"

string Handler(string input)
{
    string PLACE_HOLDER;
    if(input == "help")
    {
        cout << "This is help." << endl;
    }
    else if(input == "Exit")
    {
        PLACE_HOLDER = "EXIT MESSAGE";
    }
    else
    {
        cout << "Either a empty command or a invalid command. " << endl
        << "Check if your command is correct, or is in lowercase." << endl;
    }
    return PLACE_HOLDER;
}
