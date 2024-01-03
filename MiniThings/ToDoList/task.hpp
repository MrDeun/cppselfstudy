#include <iostream>

class Task
{
    friend std::ostream& operator<<(std::ostream& output, Task task_in);

	private:
		std::string title;
		bool is_done;
	public:
		Task(std::string title_in)
		{
			this->title = title_in;
			this->is_done = false;
		}

		~Task(){};

		void mark_off()
		{
			this->is_done = true;
		}

		void change_title(std::string new_title)
		{
			this->title = new_title;
		}

		const std::string& get_title()
		{
			return this->title;
		}

};

std::ostream& operator<<(std::ostream& output, Task task_in)
{
    output << task_in.title << " " << task_in.is_done ? "DONE":"NOT DONE";
	return output;
}