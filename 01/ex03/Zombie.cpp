#include "Zombie.hpp"
#include "ZombieHorde.hpp"

void Zombie::announce()
{
   std::cout << "<" << _name << "(" << _type  << ")>  Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie()
{
    int random;
    const std::string name[] = {"Petrovich", 
                                "Semenich", 
                                "San Sanich", 
                                "Ivanich", 
                                "Maksimka"};
    random = std::rand() % 5;
    this->_type = "Zombocop";
    this->_name = name[random];
    std::cout <<GREEN "Zombie " << _name << " climbed out of the grave" DEFAULT << std::endl;
}

Zombie::~Zombie()
{
    std::cout << RED "Zombie " << _name << " beheaded" DEFAULT<< std::endl;
}
