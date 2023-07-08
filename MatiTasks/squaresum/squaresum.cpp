#include<iostream>
#include<vector>
#include<cmath>
#include<numeric>

double SquareSummary(std::vector<double> VectorDouble)
{
    double Summary{0};
    std::vector<double> SquaredDouble;
    for (double i : VectorDouble)
        SquaredDouble.push_back(pow(i,2));
    Summary=std::accumulate(SquaredDouble.begin(),SquaredDouble.end(),0.0);
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
    std::vector<double> Sides;
    
    for(int i=0;i<10;i++)
    {
        Sides.push_back(std::rand()%25+1);
    }

    ShowVectorInt(Sides);
    std::cout<<"Summary of squared sides: "<<SquareSummary(Sides);
    return 0;    
}