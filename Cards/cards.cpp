#include<vector>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<array>
#include<ranges>

namespace libCard
{
        enum class Value
        {
            Two = 0,
            Three = 1,
            Four = 2,
            Five = 3,
            Six = 4,
            Seven = 5,
            Eight = 6,
            Nine = 7,
            Ten = 8,
            Jack = 9,
            Queen = 10,
            King = 11,
            Ace = 12
        };

        enum class Color
        {
            Diamond = 0,
            Club = 1,
            Heart = 2,
            Spade = 3,
        };

        std::array AllColors = {Color::Club,Color::Diamond,Color::Heart,Color::Spade};
        std::array AllValue = {Value::Two,Value::Three,Value::Four,Value::Five,Value::Six,Value::Seven,Value::Eight,Value::Nine,Value::Ten,Value::Jack,Value::Queen,Value::King,Value::Ace};
};
class Card
{
    friend std::ostream& operator<<(std::ostream& Output, Card& Card_in);

    private:
        libCard::Color cardColor;
        libCard::Value cardValue;
        std::string Value; 
        bool is_hidden;
    public:
        Card(libCard::Color Color_in, libCard::Value Value_in)
        {
            cardValue = Value_in;
            cardColor = Color_in;
            is_hidden = true;
        }
        auto getColor()
        {
            return cardColor;
        }

        auto getValue()
        {
            return cardValue;
        }

        bool getHidden()
        {
            return is_hidden;
        }

        void Reveal()
        {
            is_hidden=false;
        }

        std::string valueString()
        {
            switch(cardValue)
            {
                case libCard::Value::Two:
                    return "Two";
                case libCard::Value::Three:
                    return "Three";
                case libCard::Value::Four:
                    return "Four";
                case libCard::Value::Five:
                    return "Five";
                case libCard::Value::Six:
                    return "Six";
                case libCard::Value::Seven:
                    return "Seven";
                case libCard::Value::Eight:
                    return "Eight";
                case libCard::Value::Nine:
                    return "Nine";
                case libCard::Value::Ten:
                    return "Ten";
                case libCard::Value::Jack:
                    return "Jack";
                case libCard::Value::Queen:
                    return "Queen";
                case libCard::Value::King:
                    return "King";
                case libCard::Value::Ace:
                    return "Ace";  
            }

        }
        std::string colorString()
        {
            switch(cardColor)
            {
                case libCard::Color::Diamond:
                    return "Diamond";
                case libCard::Color::Club:
                    return "Club";
                case libCard::Color::Heart:
                    return "Heart";
                case libCard::Color::Spade:
                    return "Spade";
                
            }

        }
};

class Deck
{

    private:
        std::vector<Card> DeckGame; 
    public:
        Deck(){}

        void bigFulfill()
        {
            for(libCard::Color Color_in : libCard::AllColors)
                for(libCard::Value Value_in : libCard::AllValue)
                    DeckGame.emplace_back(Color_in,Value_in);
            return;
        }

        void smallFulfill()
        {
            for(libCard::Color Color_in : libCard::AllColors)
                for(int i=0;i<5;i++)
                    DeckGame.emplace_back(Color_in,libCard::AllValue[7+i]);
            return;
        }

        ~Deck()
        {
            
        }

        void Show()
        {
            int iterator=1;
        for(Card card_iterator : DeckGame)
            {
                if(card_iterator.getHidden())
                    std::cout<<iterator<<". "<<"Card Hidden"<<std::endl;
                else
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

            for (int i = 0; i < DeckGame.size()/2; i++)
                temp.push_back(DeckGame[i*2]);
            for (int i = 0; i < DeckGame.size()/2; i++)
                temp.push_back(DeckGame[(i*2)+1]);

            std::copy(temp.begin(),temp.end(),DeckGame.begin());

            return;
            
            
        }
};

std::ostream& operator<<(std::ostream& Output, Card& Card_in)
{
    Output<<Card_in.valueString()<<" of "<<Card_in.colorString();
    return Output;
}

int main()
{
    Deck DeckOne;
    DeckOne.bigFulfill();
    DeckOne.Show();
    DeckOne.RiffleShuffle();
    DeckOne.Show();

    Deck DeckTwo;
    DeckTwo.smallFulfill();
    getchar();
    return 0;
}