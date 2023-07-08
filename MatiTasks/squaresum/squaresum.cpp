#include<iostream>
#include<vector>
#include<cmath>
#include<numeric>
#include<algorithm>

double SquareSummary(std::vector<double> VectorDouble)
{
    double Summary{0};
    std::vector<double> SquaredDouble;
    Summary = std::transform_reduce(VectorDouble.begin(),VectorDouble.end(),0.0,std::plus{},[](double side){return side*side;});
    return Summary;
    
}

void ShowVectorInt(std::vector<double> VectorDouble)
{
    for (int i = 0; i < VectorDouble.size(); i++)
    {
        if (i%11==10)
            std::cout<<std::endl;
        std::cout<<VectorDouble[i]<<" ";
    }

    std::cout<<"\n";
    return;
}


int main()
{
    std::srand(time(NULL));
    std::vector<double> Sides;
    for (int i = 0; i < 5; i++)
    {
        Sides.push_back(rand()%10+1);
    }
    
    ShowVectorInt(Sides);
    std::cout<<"Summary of squared sides: "<<SquareSummary(Sides);
    return 0;    
}