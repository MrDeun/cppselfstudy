/*
Exercise: You have a chocalate of size chocolateWidth x chocolateHeight. You want desiredChocolate piece chunk of chocolate. Is it possible to do that?
*/
#include<iostream>
bool verticalCrackCheck(const int& chocolateWidth,const int& chocolateHeight, const int& desiredChocolate)
{
    for (int i = 0; i < chocolateHeight; i++)
    {
        if (chocolateWidth*chocolateHeight == desiredChocolate)
        {
            return true;
        }
        
    }
    return false;
}

bool horizontalCrackCheck(const int& chocolateWidth,const int& chocolateHeight,const int& desiredChocolate)
{
    for (int i = 0; i < chocolateWidth; i++)
    {
        if(verticalCrackCheck(i,chocolateHeight,desiredChocolate))
            return true;
    }
    return false;
}

int main()
{
    int chocolateWidth{};
    int chocolateHeight{};
    int wantedChocolatePieces{};

    std::cout<<"Enter a width of your chocolate:";std::cin>>chocolateWidth;
    std::cout<<"Enter a height of your chocolate:";std::cin>>chocolateHeight;
    std::cout<<"Enter amount of pieces you desire in one chunk";std::cin>>wantedChocolatePieces;
    std::cout<<"Is it possible to crack the chocalate for desired amount of pieces in one chunk?: "<<horizontalCrackCheck(chocolateWidth,chocolateHeight,wantedChocolatePieces);
}