#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

# define GREEN "\e[92m\e[1m"
# define DEFAULT "\e[39m\e[0m"
# define RED "\e[91m"
# define YELLOW "\e[93m"

class FragTrap : public ClapTrap {
public:
    FragTrap(){};
    FragTrap(std::string names);
    ~FragTrap();
	FragTrap(const FragTrap &toCopy);
	FragTrap &operator = (const FragTrap &toCopy);
	
	int		vaulthunter_dot_exe(std::string const & target);
    
};

#endif