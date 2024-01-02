#include<iostream>
#include<fstream>
#include<string>
#include<map>

std::map<std::string,int> translation_table
{
    {"one",1},
    {"two",2},    
    {"three",3},    
    {"four",4},    
    {"five",5},    
    {"six",6},   
    {"seven",7},    
    {"eight",8},    
    {"nine",9},
};


void translate_word(std::string& str_in)
{
    for (int i = 0; i < translation_table.size(); i++)
    {
        /* code */
    }
    
}



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
        
        file >> current_string;
        translate_word(current_string);
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
        std::cout<<". "<<sum<<"\n";
        temp.clear();
    }
}