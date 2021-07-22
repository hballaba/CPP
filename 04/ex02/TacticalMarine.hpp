#ifndef TACTICALMARINE_HPP

# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
    TacticalMarine();
    virtual ~TacticalMarine();
    TacticalMarine(TacticalMarine const & toCopy);
    TacticalMarine & operator = (TacticalMarine const & toCopy);

    ISpaceMarine*   clone() const;
    void            battleCry() const;
    void            rangedAttack() const;
    void            meleeAttack() const;
private:
    int i;

};


#endif