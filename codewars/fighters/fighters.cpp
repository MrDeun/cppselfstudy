#include <iostream>
#include <string>
class Fighter
{
private:
    std::string name;
    int health;
    int damagePerAttack;

public:
    Fighter(std::string name, int health, int damagePerAttack)
    {
        this->name = name;
        this->health = health;
        this->damagePerAttack = damagePerAttack;
    }
    
    ~Fighter() {};
    std::string getName()
    {
        return name;
    }
    int getHealth()
    {
        return health;
    }
    int getDamagePerAttack()
    {
        return damagePerAttack;
    }
    void setHealth(int value)
    {
        health = value;
    }
};

void turn_pass(Fighter* attacker, Fighter* defender)
{
    Fighter* temp = attacker;
    attacker = defender;
    defender = temp;
    temp = nullptr;
    delete temp;

    return;
}

std::string simulate_fight(Fighter* PlayerOne, Fighter* PlayerTwo, std::string first_name)
{
    Fighter attacker(PlayerOne->getName(),PlayerOne->getHealth(),PlayerOne->getDamagePerAttack());
    Fighter defender(PlayerTwo->getName(),PlayerTwo->getHealth(),PlayerTwo->getDamagePerAttack());

    if (defender.getName() == first_name)
    {
        turn_pass(&attacker,&defender);
    }
    


    while (defender.getHealth() > 0)
    {
        defender.setHealth(defender.getHealth() - attacker.getDamagePerAttack());
        turn_pass(&attacker,&defender);
    }
    


    return attacker.getName();
}

int main()
{
    Fighter fighter1("Lew",10,2);
    Fighter fighter2("Harry",5,4);

    std::cout<<simulate_fight(&fighter1,&fighter2,"Lew");

    return 0;
}