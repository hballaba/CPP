#ifndef SQUAD_HPP

# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad{
    public:
        Squad();
        virtual ~Squad();
        Squad(Squad const & toCopy);
        Squad & operator = (Squad const & toCopy);

        virtual int getCount() const;
        virtual ISpaceMarine* getUnit(int) const;
        virtual int push(ISpaceMarine*);
             
        
    private:
        int _size;
        ISpaceMarine **_squad;
};

#endif
