#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cctype>

#include "states.hpp"
#include "task.hpp"
#include "helper.hpp"

using std::string;
using std::vector;
using std::getline;
using std::cout;
using std::cin;
using std::stringstream;
using std::ofstream;

void save_file(const vector<Task>& tasklist, string path)
{
    ofstream file(path);
    for (Task element : tasklist)
    {
        file << element.get_title() << element.get_done();
    }
    file.close();
    return;
}

void load_file(vector<Task>& tasklist, string path)
{

}

void create_file(std::string path)
{

}

void modify_task(vector<Task>& tasklist,size_t tasklist_index)
{

}

void delete_task(vector<Task>& tasklist, size_t tasklist_index)
{

}
void show_tasks(vector<Task> tasklist)
{
    for (size_t i = 0; i < tasklist.size(); i++)
    {
        std::cout << i+1 <<". " << tasklist[i].state();
    }

    return;
}

bool process(std::string line, vector<Task>& tasklist)
{
    stringstream command_stream(line);
    string keyword{};
    while (command_stream >> keyword)
    {
        keyword = str_tolower(keyword);
        std::string path{};
        switch(string_to_command[keyword])
        {
        case SAVE:
            command_stream >> path;
            save_file(tasklist,path);
            break;
        case LOAD:
            command_stream >> path;
            load_file(tasklist,path);
            break;
        case NEW:
            command_stream >> path;
            create_file(path);
            break;
        case MODIFY:
            command_stream >> path;
            modify_task(tasklist,stoi(path));
            break;
        case DELETE:
            command_stream >> path;
            delete_task(tasklist,stoi(path));
            break;
        case SHOW:
            show_tasks(tasklist);
            break;
        case EXIT:
            return true;
            break;
        default:
            break;
        }
        path.clear();
    }
    
    return false;

}

int main()
{
    bool quit = false;
	vector<Task> tasklist{};
    for(string line; cout << "TO DO LIST > " && getline(cin,line);)
    {
        if ( !line.empty() && process(line,tasklist) )
        {  
            quit = false;
            line.clear();
            return 0;
        } 
    }

}
