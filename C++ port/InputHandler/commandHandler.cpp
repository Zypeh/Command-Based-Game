#include <iostream>
#include <cstdlib>

using namespace std;

#include "commandHandler.h"
#include "CommandList\Commands.h"
#include <string>
#include <algorithm>


void Handler(string * input)
{
    std::string lowercased = *input;
    std::transform(lowercased.begin(), lowercased.end(), lowercased.begin(), ::tolower );
    if(lowercased == "help")
    {
        *input = "This is help.";
    }
    else
    {
        *input = "Invalid command. \nCheck if your command is correct.";
    }
    return;
}
