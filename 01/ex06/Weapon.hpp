#ifndef WEAPON_HPP

# define  WEAPON_HPP

# include <iostream>
# include <string>
# define GREEN "\e[92m\e[1m"
# define DEFAULT "\e[39m\e[0m"
# define RED "\e[91m"
# define YELLOW "\e[93m"

class Weapon {

private:
   std::string _type;

public:
    Weapon(std::string type);
    ~Weapon();

    const std::string&  getType();
    void                setType(std::string type);
};

#endif