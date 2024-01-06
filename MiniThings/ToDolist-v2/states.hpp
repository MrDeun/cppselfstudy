#include<map>
#include<string>

enum Command 
{
    SHOW,
    NEW,
    DELETE,
    MODIFY,
    SAVE,
    LOAD,
    EXIT,
};

std::map<std::string,Command> string_to_command 
{
    {"show", SHOW},
    {"new", NEW},
    {"delete",DELETE},
    {"modify", MODIFY},
    {"save", SAVE},
    {"load", LOAD},
    {"exit", EXIT},
};
