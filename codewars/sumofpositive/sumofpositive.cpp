#include<iostream>
#include<vector>
#include<numeric>

int positive_sum(const std::vector<int>& vector_in)
{
    int solution = 
    std::transform_reduce(vector_in.begin(),vector_in.end(),0,
                                        std::plus{},
                                        [](int in) -> int {if(in<0) return 0; return in;});
    return solution;
}

int main()
{
    std::vector<int> exampleVector{1,-4,7,12};
    std::cout<<positive_sum(exampleVector);
    return 0;
}