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
    StringValue1
};

//Announce the mapping
static std::map<std::string, String> Valuemap;

//Assign the map, add new command here
static void Initialize()
{
    Valuemap["help"] = StringValue1;
}

void Handler(string * input)
{
    Initialize();

    std::string lowercased = *input;
    std::transform(lowercased.begin(), lowercased.end(), lowercased.begin(), ::tolower );
    size_t found = lowercased.find_first_of(" ");
    std::string mainStr = lowercased.substr(0,found);
    std::string subStr = lowercased.substr(found);

    switch (Valuemap[mainStr])
    {
    case StringValue1:
        *input = "This is help.";
        break;
    default:
        *input = "Invalid command.\nCheck if your command is correct.";
    }
    return;
}
