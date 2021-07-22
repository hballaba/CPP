#include "Zombie.hpp"

void Zombie::announce()
{
   std::cout << "<" << _name << "(" << _type  << ")>  Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string type, std::string name)
{
    this->_type = type;
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << RED "Zombie " << _name << " beheaded" DEFAULT<< std::endl;
}

