#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
{
    _name = name;
    _weap = nullptr;
    std::cout << std::endl << _name << " is born " << std::endl;
}

HumanB::~HumanB() {
std::cout << _name << " died " << std::endl;
}

void    HumanB::attack() {
std::cout << RED << _name << " attacks with his " << _weap->getType() << DEFAULT << std::endl;
}

void    HumanB::setWeapon(Weapon &club)
{
    _weap = &club;
    std::cout << YELLOW << _name << " added weapon " << _weap->getType() << DEFAULT << std::endl;
}