#ifndef HUMAN_HPP

# define  HUMAN_HPP

# include <iostream>
# include <string>

# define GREEN "\e[92m\e[1m"
# define DEFAULT "\e[39m\e[0m"
# define RED "\e[91m"
# define YELLOW "\e[93m"

class Human
{
    private:
    void meleeAttack(std::string const & target);
    void rangedAttack(std::string const & target);
    void intimidatingShout(std::string const & target);
    
    public:
    void action(std::string const & action_name, std::string const & target);
};

#endif