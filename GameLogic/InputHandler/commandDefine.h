#ifndef COMMAND_DEFINE
#define COMMAND_DEFINE

std::string executeHelp();
std::string executeExit();

struct Commands
{
    std::string command_name;
    std::string accept_subcommands;
    std::string(*exe_func)();

    std::string Execute()
    {
        return exe_func();
    }
};



#endif // COMMAND_HANDLER
