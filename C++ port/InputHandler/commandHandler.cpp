#include <iostream>
#include <cstdlib>

using namespace std;

#include "commandHandler.h"
#include "CommandList\Commands.h"

string Handler(string input)
{
    if(input == "help")
    {
        cout << "This is help." << endl;
    }
    else
    {
        cout << "Either a empty command or a invalid command. " << endl
        << "Check if your command is correct, or is in lowercase." << endl;
    }
    return "1";
}
