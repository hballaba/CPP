#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <string>

# define GREEN "\e[92m\e[1m"
# define DEFAULT "\e[39m\e[0m"
# define RED "\e[91m"
# define YELLOW "\e[93m"

class Zombie {

private:
    std::string _type;
    std::string _name;

public:
    Zombie(std::string type, std::string name);
    ~Zombie();

    void    announce(void);
};

#endif