#include<iostream>
#include<vector>
#include<algorithm>

void ShowVectorInt(std::vector<int> VectorInt)
{
    for (int i = 0; i < VectorInt.size()-1; i++)
    {
        if (i%10==9)
            std::cout<<std::endl;
        std::cout<<VectorInt[i]<<" ";
    }
    
    return;
}

void ShowVectorString(std::vector<std::string> VectorString)
{
    for (int i = 0; i < VectorString.size()-1; i++)
    {
        if (i%10==9)
            std::cout<<std::endl;
        std::cout<<VectorString[i]<<" ";
    }
    
    return;
}

std::vector<std::string> TransformIntToString(std::vector<int> VectorInt)
{
    std::vector<std::string> VectorString;
    std::transform(VectorInt.cbegin(),VectorInt.cend(),VectorString.begin(),[](std::string Buffer){return Buffer;}); 
    return VectorString;
}


int main()
{
    srand(time(NULL));
    std::vector<int> VectorInt;
    for(int i=0;i<100;i++)
    {
        VectorInt.push_back(rand()%100);
    }
    std::vector<std::string> VectorString=TransformIntToString(VectorInt);
    ShowVectorInt(VectorInt);
    std::cout<<std::endl<<std::endl;
    ShowVectorString(VectorString);

    return 0;
}