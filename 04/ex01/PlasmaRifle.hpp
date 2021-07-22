#ifndef PLASMARIFLE_HPP

# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
    public:
        PlasmaRifle();
        virtual ~PlasmaRifle();
        PlasmaRifle(const PlasmaRifle &toCopy);
        PlasmaRifle & operator = (const PlasmaRifle & toCopy);
       
       virtual void    attack() const;
};

#endif