#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& club) 
{
    _name = name;
    _weap = &club;
    std::cout << std::endl << _name << " is born " << std::endl;
}

HumanA::~HumanA() {
    std::cout << _name << " died " << std::endl;
}

void HumanA::attack() {
std::cout << RED << _name << " attacks with his " << _weap->getType() << DEFAULT << std::endl;
}




