#include <string>

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