#include <iostream>
#include <fstream>
#include <vector>

class Task
{
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
};

std::vector<Task> load_tasklist(std::string username)
{
	std::ifstream file(username + ".txt");
	std::vector<Task> tasklist;

	while (file.good())
	{
		std::string next_task;
		file >> next_task;
		tasklist.push_back(next_task);
	}
	
}

void save_tasklist(std::vector<Task> tasklist,std::string username)
{
	std::ofstream file();
}

int main()
{
	

	return 0;
}
