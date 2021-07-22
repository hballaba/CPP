#ifndef NINJATRAP_HPP

# define NINJATRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

# define GREEN "\e[92m\e[1m"
# define DEFAULT "\e[39m\e[0m"
# define RED "\e[91m"
# define YELLOW "\e[93m"

class NinjaTrap : public ClapTrap {
public:
    NinjaTrap(){};
    NinjaTrap(std::string names);
    ~NinjaTrap();
	NinjaTrap(const NinjaTrap &toCopy);
	NinjaTrap &operator = (const NinjaTrap &toCopy);
	
	int	    	ninjaShoebox(FragTrap &frag);
    int		    ninjaShoebox(ScavTrap &scav);
    int		    ninjaShoebox(NinjaTrap &ninja);
    std::string getName();
    int         getXP();
    void        setXP(int xp);
    int         getArmor();
};

#endif