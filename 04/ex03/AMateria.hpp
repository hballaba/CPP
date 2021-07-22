#ifndef AMATERIA_HPP

# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
private:
    unsigned int _xp;
    std::string _type;

public:
    AMateria();
    AMateria(std::string const & type);
    virtual ~AMateria();
    AMateria(AMateria const & toCopy);
    AMateria & operator = (AMateria const & toCopy);

    std::string const & getType() const;
    void                setType(std::string name);
    void                setXP(int xp);
    unsigned int getXP() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif