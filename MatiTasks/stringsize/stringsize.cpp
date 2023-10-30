#include<iostream>
#include<string>
#include<vector>
#include<cstdint>

int main()
{
    std::vector<std::string> stringLibraby;
    std::string temp = "Hi ";
    for(int i=0;i<5;i++)
    {
        temp += "Hello World ";
        stringLibraby.push_back(temp);
    }
    int32_t max = 0;
    for(std::string string_iterator : stringLibraby)
    {
        if(string_iterator.size()>max)
            max = string_iterator.size();
    }

    std::cout<<max;

    return 0;
}