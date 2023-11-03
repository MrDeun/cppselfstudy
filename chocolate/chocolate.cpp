#include <iostream>

bool chocolateTest(const int& columns, const int& rows, const int& wanted)
{
    for(int row_i{};row_i<columns;row_i++)
        for(int column_i{};column_i<columns;column_i++)
            if ( (column_i*row_i)==wanted)
                return true;
    return false;
            
}

int main()
{
    int columns{8};
    int rows{4};
    int wanted{16};

    std::cout<<"Answer for the chocolate is: "<<chocolateTest(columns,rows,wanted)<<std::endl;

    return 0;
}