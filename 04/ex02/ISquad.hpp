#ifndef ISQUARD_HPP

# define ISQUARD_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class ISquad
{
    public:
    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine* getUnit(int) const = 0;
    virtual int push(ISpaceMarine* space) = 0;
};

#endif