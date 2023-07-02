
class Card
{
    private:
        enum class libValue {Two,Three,Four,Five,Six,Seven,Eight,Nine,Ten,Jack,Queen,King};
        enum class libColor {Club,Diamond,Heart,Spade};
        libColor Color;
        libValue Value; 
        bool is_hidden;
    public:
        Card(libColor Value_in, libValue Color_in)
        {
            Value=libValue::Value_in;
            Color=libColor::Color_in;

        }
};



int main()
{
    return 0;
}