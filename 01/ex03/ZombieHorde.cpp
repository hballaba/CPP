#include "ZombieHorde.hpp"

void ZombieHorde::announce()
{
    int i = -1;
    while (++i < _num)
        zomb[i].announce();
}

ZombieHorde::ZombieHorde(int zombie)
{
	std::srand(std::time(nullptr));
	_num = zombie; 
	zomb = new Zombie[zombie];
}

ZombieHorde::~ZombieHorde()
{
	delete [] zomb;
}