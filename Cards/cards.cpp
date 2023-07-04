#include<vector>
#include<cstdlib>
#include<iostream>
#include<algorithm>
class Card
{
    friend std::ostream& operator<<(std::ostream& Output, Card& Card_in);

    private:
        enum class libValue {Two,Three,Four,Five,Six,Seven,Eight,Nine,Ten,Jack,Queen,King,Ace};
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
                for(int iterator_value=0;iterator_value<13;iterator_value++)
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
            int iterator=1;
        for(Card card_iterator : DeckGame)
            {
                std::cout<<iterator<<". "<<card_iterator<<std::endl;
                iterator++;
            }
        }

        void Shuffle()
        {
            std::random_shuffle(DeckGame.begin(),DeckGame.end());
        }

        void RiffleShuffle()
        {
            std::vector<Card> temp;
            temp.reserve(DeckGame.size());

            for (int i = 0; i < DeckGame.size()/2; i++)
                temp.push_back(DeckGame[i*2]);
            for (int i = 0; i < DeckGame.size()/2; i++)
                temp.push_back(DeckGame[(i*2)+1]);

            std::copy(temp.begin(),temp.end(),DeckGame.begin());

            delete &temp;
            return;
            
            
        }
};

std::ostream& operator<<(std::ostream& Output, Card& Card_in)
{
    Output<<Card_in.getColor()<<" "<<Card_in.getValue();
    return Output;
}

int main()
{
    Deck DeckOne;
    DeckOne.Show();
    DeckOne.Shuffle();
    DeckOne.Show();
    getchar();
    return 0;
}