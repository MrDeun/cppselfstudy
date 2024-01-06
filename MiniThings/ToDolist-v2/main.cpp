#include <iostream>
#include <sstream>
#include <vector>

#include "states.hpp"
#include "task.hpp"

using std::string;
using std::vector;
using std::getline;
using std::cout;
using std::cin;
using std::stringstream;

void process(std::string line)
{
    stringstream command_stream(line);
    string keyword{};
    while (command_stream >> keyword)
    {
        switch (string_to_command[keyword])
        {
        case SAVE:
            break;
        case LOAD:
            break;
        case NEW:
            break;
        case DELETE:
            break;
        case SHOW:
            break;
        case SAVE:
            break;
        
        default:
            break;
        }
    }
    
    

}

int main()
{
	vector<Task> tasklist{};
    for(string line; cout << "TO DO LIST > " && getline(cin,line);)
    {
        if ( !line.empty() )  
            process(line); 
    }


}
