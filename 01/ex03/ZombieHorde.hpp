#ifndef ZOMBIEHORD_HPP

#define ZOMBIEHORD_HPP

# include "Zombie.hpp"

class ZombieHorde {
    private:
        std::string _name;
        std::string _type;

    public:
        ZombieHorde(int zombie);
        ~ZombieHorde();

        int     _num;
        Zombie  *zomb;
        void    announce();
};

#endif