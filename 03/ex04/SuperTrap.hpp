#ifndef SUPERTRAP_HPP

# define SUPERTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"


# define GREEN "\e[92m\e[1m"
# define DEFAULT "\e[39m\e[0m"
# define RED "\e[91m"
# define YELLOW "\e[93m"

class SuperTrap : public NinjaTrap, public FragTrap {
public:
    SuperTrap(){};
    SuperTrap(std::string names);
    virtual ~SuperTrap();
	SuperTrap(const SuperTrap &toCopy);
	SuperTrap &operator = (const SuperTrap &toCopy);
};



#endif