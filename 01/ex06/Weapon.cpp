#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    
    this->_type = type;
}

Weapon::~Weapon() {

}

 const std::string& Weapon::getType() {
    
     return (_type);
}

void Weapon::setType(std::string type)
{
    _type = type;
    std::cout << YELLOW << "Weapons changed to \"" << _type << "\"" << DEFAULT << std::endl;
} 
