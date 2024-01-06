#include <iostream>
#include <sstream>

using std::string;

class Task
{
    private:
        string title;
        bool done = false;
    public:
        Task(string title_in)
        {
            this->title = title_in;
        }

        void set_done(bool state)
        {
            this->done = state;
            return;
        }

        void modify_title(string title_in)
        {
            this->title = title_in;
        }

        string get_title()
        {
            return this->title;
        }

        bool get_done()
        {
            return this->done;
        }

};


void process(std::string line)
{
    std::stringstream command_stream(line);

}

int main()
{
	

    for(std::string line; std::cout << "STICKY TASK > " && std::getline(std::cin,line);)
    {
        if ( !line.empty() )  
            process(line); 
    }


}
