#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

#include "commandHandler.h"
#include "commandDefine.h"

string executeHelp()
{
    return "This is help.";
}

string executeExit()
{
    return "Exiting program. (Of course it isn't.)"
}
