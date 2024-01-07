#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

#include <conio.h>

void clear_screen() {
  std::cout << "\033[2J\033[1;1H";
  return;
}

void view_vector(const std::vector<std::string> &tasklist,
                 std::string *ptr_task) {
  clear_screen();
  for (size_t i = 0; i < tasklist.size(); i++) {
    if (ptr_task == &tasklist[i]) {
      std::cout << ">";
    }

    else {
      std::cout << " ";
    }

    std::cout << i + 1 << " . " << tasklist[i] << "\n";
  }
}

void display(const std::string &this_string) {
  clear_screen();
  std::cout << "You chose: " << this_string << '\n';
  int pause = getch();
  std::cout << pause; // Just for pause;
  return;
}

void choose_options(std::vector<std::string> &tasklist) // TO-DO
{
  size_t index = 0;
  std::string *highlighted_task = &tasklist[index];
  int choice;
  do {
    view_vector(tasklist, highlighted_task);
    choice = getch();
    switch (choice) {
    case 'w':
      if ((index - 1) < 0)
        break;
      index--;
      highlighted_task--;
      break;
    case 's':
      if ((index + 1) > tasklist.size() - 1)
        break;
      index++;
      highlighted_task++;
      break;
    case 'd':
      display(tasklist[index]);
      break;
    case 'q':
      break;
    default:
      break;
    }
  } while (choice != 'q');

  highlighted_task = nullptr;
  delete highlighted_task;
  return;
}

int main() {
  std::vector<std::string> string_list = {"Hello World", "Sup homie",
                                          "Damn it Bobby!"};
  choose_options(string_list);

  return 0;
}
