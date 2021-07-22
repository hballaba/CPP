#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <unistd.h>

# define GREEN "\e[92m\e[1m"
# define DEFAULT "\e[39m\e[0m"
# define RED "\e[91m"
# define YELLOW "\e[93m"

class ScavTrap {
public:
    ScavTrap(){};
    ScavTrap(std::string names);
    ~ScavTrap();
	ScavTrap(const ScavTrap &toCopy);
	ScavTrap &operator = (const ScavTrap &toCopy);
	
	int		    rangedAttack(std::string const & target);
	int		    meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	int		    challengeNewcomer(std::string const & target);
    
    

private:
    std::string _name;    
    int			_hitPoints;
    int			_maxHitPoints;
    int			_energyPoints;
    int			_maxEnergyPoints;
    int			_level;
    int			_meleeAttackDamage;
	int			_rangeAttackDamage;
	int			_armorDamageReduction;
};

#endif