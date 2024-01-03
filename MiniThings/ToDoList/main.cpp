#include <cstdio>
#include <iostream>
#include <fstream>
#include <vector>

#include "menu_enums.hpp"
#include "task.hpp"

void clear_screen()
{
	std:: cout << "\033[2J\033[1;1H";
	return;
}

std::vector<Task> load_tasklist(const std::string& username, std::vector<Task>& task_list)
{
	clear_screen();
	std::ifstream file(username + ".txt");

	if(!file.good())
	{
		std::cout << "Username not detected! Creating new taskfile!";
		return task_list;
	}

	while (file.good())
	{
		std::string next_task;
		file >> next_task;
		task_list.push_back(next_task);
	}

	file.close();

	return task_list;
}

void view_tasklist(const std::vector<Task>& tasklist, Task* ptr_task)
{
	clear_screen();
	for (size_t i = 0; i < tasklist.size(); i++)
	{
		if (ptr_task == &tasklist[i])
		{
			std::cout << ">";
		}
		
		else
		{
			std::cout << " ";
		}

		std::cout << i+1 << ". "<< tasklist[i] << "\n";
	}
}

void save_tasklist(std::vector<Task>& tasklist,std::string username) 
{
	clear_screen();
	std::ofstream file(username + ".txt");

	for (Task element : tasklist)
	{
		file << element << "\n";
	}

	file.close();
	std::cout << "Tasklist saved!";
	return;
}

void delete_task(std::vector<Task>& tasklist) // TO-DO
{

}

void modify_task(Task& modified_task)
{
	std::string new_title{};
	std::cout << "Input your new title: ";
	std::cin >> new_title;
	modified_task.change_title(new_title);
}
 
void handle_task(Task& modified_task) //TO-DO
{
	clear_screen();
  	int choice{};
  	do {
		std::cout << modified_task << "\n"
			<< "1. Modify title\n"
			<< "2. Mark as done\n";
    	choice = getchar();

			switch (choice)
			{
			case 1:
				modify_task(modified_task);
				break;
			case 2:
				modified_task.mark_off();
				break;			
			default:
				break;
			}
	


  	} while ( choice != 'q');
}

void modify_task(std::vector<Task>& tasklist) //TO-DO
{
	size_t index = 0;
	Task* highlighted_task = &tasklist[index];
	int choice;
	do
	{
		view_tasklist(tasklist,highlighted_task);
		choice = getchar();
		switch(choice)
		{
			case 'w':
				if( (index-1) < 0) break;
				index--;
				highlighted_task--;
				break;
			case 's':
				if( (index+1) > tasklist.size()) break;
				index++;
				highlighted_task++;
				break;
			case 'd':
				handle_task(tasklist[index]);
				break;
			case 'q':
				break;
			default:
				break;

				
		}
	} while (choice != 'q');

	highlighted_task = nullptr;
	delete highlighted_task;
	
}

void add_task(std::vector<Task>& tasklist)
{
	clear_screen();

	std::string title{};

	std::cout << "Title for a new task: ";
	std::cin >> title;
	Task new_task(title);
	tasklist.push_back(new_task);
}

void show_tasklist(std::vector<Task>& tasklist) //TO-DO
{
	clear_screen();

	for (size_t i=0; i < tasklist.size(); i++)
	{
		std::cout << i+1 <<". "<< tasklist[i].get_title() << "\n";
	}
	
}

void main_menu(std::vector<Task>& tasklist, const std::string& username) //TO-DO
{

	menu_choice choice;
	do
	{
		clear_screen();
			std::cout	<< "-- What do you want to do now? --\n"
						<< 	"1. Save my current tasklist \n"
						<< 	"2. Show my current tasklist \n"
						<< 	"3. Add a new task to the list \n"
						<< 	"4. Modify an existing task \n"
						<< 	"5. Exit the program \n";


		std::cin >> choice;
		switch(choice)
		{
			case SAVE:
				save_tasklist(tasklist, username);
				break;
			case SHOW:
				show_tasklist(tasklist);
				break;
			case ADD:
				add_task(tasklist);
				break;
			case MODIFY:
				modify_task(tasklist);
				break;
			case DELETE:
				delete_task(tasklist);
				break;
			case EXIT:
				break;
			default:
				std::cerr << "Incorrect Argument!" ;
				break;
		}
	} while (choice != EXIT);

	return;
}

int main()
{
	std::string username;
	std::vector<Task> tasklist{};

	std::cout << "Hello there! What's your username? ";
	std::cin >> username;

	std::cout << "\n Attempting to find username: " << username << " ...";

	load_tasklist(username,tasklist);

	std::cout << "\n User found! Hello "<< username << "!";

	main_menu(tasklist,username);
		

	return 0;
}
