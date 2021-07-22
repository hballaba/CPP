#ifndef ASSAULTTERMINATOR_HPP

# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
    AssaultTerminator();
    virtual ~AssaultTerminator();
    AssaultTerminator(AssaultTerminator const & toCopy);
    AssaultTerminator & operator = (AssaultTerminator const & toCopy);

    virtual ISpaceMarine*   clone() const;
    virtual void            battleCry() const;
    virtual void            rangedAttack() const;
    virtual void            meleeAttack() const;

private:
    int i;
};

#endif