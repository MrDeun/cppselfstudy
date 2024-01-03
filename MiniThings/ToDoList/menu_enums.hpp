enum menu_choice
{
    SAVE,
    SHOW,
    ADD,
    DELETE,
    MODIFY,
    EXIT,
};

std::istream& operator>>(std::istream& input, menu_choice choice)
{
    input >> choice;
}