#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include <string>
# include <iostream>


class FragTrap {
public:
    FragTrap() {};
    FragTrap(std::string names);
    ~FragTrap();
	FragTrap(const FragTrap &toCopy);
	FragTrap &operator = (const FragTrap &toCopy);
	
	int	   	rangedAttack(std::string const & target);
	int	    meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int     vaulthunter_dot_exe(std::string const & target);
    

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
    int         _damage;
};

#endif