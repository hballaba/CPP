#include "ZombieEvent.hpp"

Zombie* ZombieEvent::randomChump() 
{
    int random;
    const std::string name[] = {"Petrovich", "Semenich", "San Sanich", "Ivanich", "Maksimka"};
   
    std::srand(std::time(nullptr));
    random = std::rand() % 5;
    Zombie *zomby = new Zombie(_type, name[random]);
    std::cout << GREEN <<name[random] << "(" << _type << ") climbed out of the grave" DEFAULT<< std::endl;
    return (zomby);
}

Zombie* ZombieEvent::newZombie(std::string type) 
{
    std::string name = "New Zomb";
    Zombie *vasya = new Zombie(type, name);
    std::cout << GREEN << name << "(" << type << ") climbed out of the grave" DEFAULT<< std::endl;
    return (vasya);
}

void ZombieEvent:: setZombieType(std::string type) 
{
    _type = type;
    return ;
}

ZombieEvent::ZombieEvent()
{
    this->_type = "Crawler";
}

ZombieEvent::~ZombieEvent()
{
    
}