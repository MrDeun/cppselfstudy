#include<iostream>
#include<fstream>
#include<string>

int main()
{
    bool pause;
    std::string current_string;
    std::string temp;
    std::ifstream file("input.txt");
    int sum = 0;
    int line_index = 0;

    while (file.good())
    {
        line_index++;
        if (line_index == 14)
        {
            continue;
        }
        
        file >> current_string;
        for (char current_char : current_string)
        {
            if ( (current_char - '0' <= 9) && (current_char - '0' >= 0) )
            {
                temp += current_char;
                break;
            }
        }

        for (int index = current_string.length(); index>-1 ; index--)
        {
            if ( (current_string[index] - '0' <= 9) && (current_string[index] - '0' >= 0) )
            {
                temp += current_string[index];
                break;
            }
        }
        sum += std::stoi(temp.c_str());
        std::cout<<line_index<<". "<<sum<<"\n";
        temp.clear();
    }
}