#ifndef PONY_HPP

# define PONY_HPP

# include <string>
# include <iostream>
# define GREEN "\e[92m\e[1m"
# define DEFAULT "\e[39m\e[0m"
# define RED "\e[91m"

class Pony {
private:
    std::string name;
	std::string color;
    int         age;
    int         power;
    int         hight;

public:
    Pony(std::string names);
    ~Pony();

    int   eats(Pony *heap);
};

#endif