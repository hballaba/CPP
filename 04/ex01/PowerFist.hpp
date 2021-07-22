#ifndef POWERFIST_HPP

# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {
    public:
        PowerFist();
        virtual ~PowerFist();
        PowerFist(const PowerFist &toCopy);
        PowerFist & operator = (const PowerFist & toCopy);

        virtual void    attack() const;
};

#endif