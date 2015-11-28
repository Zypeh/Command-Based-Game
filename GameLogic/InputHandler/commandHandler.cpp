#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

#include "commandHandler.h"
#include "CommandList\Commands.h"

//Enumerator, add new definition here
enum String
{
    StringUndefined,
    Command1,  //help
    Command2,  //exit

    SCommand1  //player
};

//Announce the mapping
static std::map<std::string, String> Valuemap;

//Assign the map, add new command here
static void Initialize()
{
   /* Command[n] are normal commands, without the needs of
    * subcommands.
    *
    * SCommand[n] are "super" commands, subcommands are required.
    *
    * They are in different groups.
    *
    * I did this to better organise the commands.
    * I might make a ton of mess though, since I am new
    * to C++.
    * -hch12907
    */

    Valuemap["help"] = Command1;
    Valuemap["exit"] = Command2;
    Valuemap["player"] = SCommand1;
}

string CheckSubcommands(string input, bool returnSub)
{
    /* this can be used to return the command string
     * without any subcommands in it. I am lazy, help.
     *

     default returns sub commands

     * -hch12907
     */
    size_t found = input.find_first_of(" ");

    string mainStr = input.substr(0,found);

    if (found == 0)
    {
    string subStr = input.substr(found);
    }

    return (returnSub ? subStr : mainStr);
}

void Handler(string * input)
{
    Initialize();

    std::string lowercased = *input;
    std::transform(lowercased.begin(), lowercased.end(), lowercased.begin(), ::tolower );

    switch (Valuemap[CheckSubcommands(lowercased, false)])
    {
    case Command1:
        *input = "This is help.";
        break;

    case Command2:
        //EXIT THE PROGRAM!
        break;

    case SCommand1:

        break;
    default:
        *input = "Invalid command.\nCheck if your command is correct.";
    }
    return;
}
