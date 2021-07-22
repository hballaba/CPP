#ifndef CHARACTER_HPP

# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "Ice.hpp"

class AMateria;


class Character : public ICharacter {
public:
    
    Character();
    Character(std::string _name);
    Character(Character const & toCopy);
    Character & operator = (Character const & toCopy);
    virtual ~Character();

    virtual std::string const & getName() const;
    virtual void                equip(AMateria* m);
    virtual void                unequip(int idx);
    virtual void                use(int idx, ICharacter& target);
    int                         getSize();

private:
    std::string _name;
    int         _size;
    AMateria    *AM[4]; 
};

#endif
