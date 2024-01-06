#include <iostream>





void clear()
{ 
    std::cout << "\033[2J\033[1;1H"; 
}

int main()
{
    std::cout << "Hello World";
    getchar();
    clear();
    getchar();

    return 0;
}