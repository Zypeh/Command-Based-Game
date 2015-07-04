#include <iostream>
#include <cstdlib>

using namespace std;

#include "commandHandler.h"
#include "CommandList\Commands.h"

string Handler(string * input)
{
    if(*input == "help")
    {
        *input = "This is help.";
    }
    else
    {
        *input = "Invalid command. \nCheck if your command is correct, or is in lowercase.";
    }
    return "1";
}
