#ifndef HUMANA_HPP

# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {

private:
    std::string _name;
    Weapon*     _weap;

public:
    HumanA(std::string name, Weapon& club);
    ~HumanA();

    void    attack();

};

#endif
