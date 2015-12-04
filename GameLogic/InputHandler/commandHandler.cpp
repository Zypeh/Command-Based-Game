#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

#include "commandHandler.h"
#include "commandDefine.h"

Commands DeclareCommands[2] = //remember to increase the size when you add new commands!
{
    { "help", "", executeHelp },
    { "exit", "", executeExit }
};

//returns subcommands, can return the main command too
//default return subcommands.
string CheckSubcommands(string input, bool returnSub)
{
    string mainStr;
    string subStr;

    size_t found = input.find_first_of(" ");

    mainStr = input.substr(0,found);

    if (found == 0)
    {
    subStr = input.substr(found);
    }

    return (returnSub ? subStr : mainStr);
}

void Handler(string * input)
{
    std::string lowercased = *input;
    std::transform(lowercased.begin(), lowercased.end(), lowercased.begin(), ::tolower );

    for(Commands cmd : DeclareCommands)
    {
        if(cmd.command_name == lowercased)
        {
            *input = cmd.Execute();
            break;
        }
        else
        {
            *input = "Invalid command.";
        }
    }

    return;
}
