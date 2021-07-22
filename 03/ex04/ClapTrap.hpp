#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <string>
# include <iostream>

# define GREEN "\e[92m\e[1m"
# define DEFAULT "\e[39m\e[0m"
# define RED "\e[91m"
# define YELLOW "\e[93m"

class ClapTrap {

public:
    ClapTrap();
    virtual ~ClapTrap();
	ClapTrap(const ClapTrap &toCopy);
	ClapTrap &operator = (const ClapTrap &toCopy);
    
    int		rangedAttack(std::string const & target);
	int		meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:
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