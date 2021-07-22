#ifndef SUPERMUTANT_HPP

# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Enemy.hpp"

class SuperMutant : public Enemy {
    private:
    
    public:
        SuperMutant();
        virtual ~SuperMutant();
        SuperMutant(SuperMutant const & toCopy);
        SuperMutant &operator = (SuperMutant const & toCopy);

        void    virtual takeDamage(int damage);

};

#endif