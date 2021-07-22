#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
public:
    ScavTrap(){};
    ScavTrap(std::string names);
    virtual ~ScavTrap();
	ScavTrap(const ScavTrap &toCopy);
	ScavTrap &operator = (const ScavTrap &toCopy);
	
	int		challengeNewcomer(std::string const & target);
    std::string getName();
    int         getXP();
    void        setXP(int xp);
    int         getArmor();
};

#endif