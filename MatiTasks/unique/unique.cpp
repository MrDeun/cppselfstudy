#include<iostream>
#include<vector>
#include<algorithm>

int RandomNumber()
{
    int generated = (rand() % 20) + 1;
    return generated;
}

void fillVector(std::vector<int>& Vector_in, int max_range)
{
    Vector_in.resize(max_range);
    std::generate(Vector_in.begin(),Vector_in.end(),RandomNumber);
    return;
}


void showVectorInt(std::vector<int> VectorInt)
{
    for (int i = 0; i < VectorInt.size(); i++)
    {
        if (i%11==10)
            std::cout<<std::endl;
        std::cout<<VectorInt[i]<<" ";
    }
    
    return;
}

void UniqueVector(std::vector<int>& Vector_in)
{
    std::vector<int>::iterator LastUniqueID;

    std::sort(Vector_in.begin(),Vector_in.end());
    LastUniqueID = std::unique(Vector_in.begin(),Vector_in.end());
    Vector_in.resize(std::distance(Vector_in.begin(),LastUniqueID));
    return;
}

int main()
{
    std::vector<int> Vector;
    fillVector(Vector,100);
    showVectorInt(Vector);
    std::cout<<"\n\n\n\n\n\n";
    UniqueVector(Vector);
    showVectorInt(Vector);
   
    return 0;
}