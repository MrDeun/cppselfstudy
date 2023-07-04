#include<vector>
#include<cstdlib>
#include<iostream>
class Card
{
    private:
        enum class libValue {Two,Three,Four,Five,Six,Seven,Eight,Nine,Ten,Jack,Queen,King};
        enum class libColor {Club,Diamond,Heart,Spade};
        int Color;
        int Value; 
        bool is_hidden;
    public:
        Card(int Value_in, int Color_in)
        {
            Value = Value_in;
            Color = Color_in;
            is_hidden = true;
        }
        int getColor()
        {
            return Color;
        }

        int getValue()
        {
            return Value;
        }
};

class Deck
{

    private:
        std::vector<Card> DeckGame; 
    public:
        Deck()
        {
            for(int iterator_color=0;iterator_color<4;iterator_color++)
                for(int iterator_value=0;iterator_value<12;iterator_value<12)
                {
                    Card placeholder(iterator_value,iterator_color);
                    DeckGame.push_back(placeholder);
                }
        }

        ~Deck()
        {
            
        }

        void Show()
        {
         for(int i=0;i<DeckGame.size();i++)
            std::cout<<i+1<<" "<<DeckGame[i].getColor()<<" "<<DeckGame[i].getValue()<<std::endl;
        }
};

int main()
{
    Deck DeckOne;
    DeckOne.Show();
    getchar();
    return 0;
}