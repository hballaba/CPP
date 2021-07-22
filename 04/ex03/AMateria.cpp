#include "AMateria.hpp"

   class ICharacter;

AMateria::AMateria() {
    _xp = 0;

}

AMateria::AMateria(std::string const & type) {
    _type = type;
    _xp = 0;
}

AMateria::~AMateria() {

}

AMateria::AMateria(AMateria const & toCopy) {
    this->_xp = toCopy._xp;
    this->_type = toCopy._type;
}

AMateria & AMateria::operator = (AMateria const & toCopy) {
    this->_xp = toCopy._xp;
    this->_type = toCopy._type;
    return(*this);
}

std::string const & AMateria::getType() const {
	return (_type);
}

void                AMateria::setType(std::string name) {
    _type = name;
}
void                AMateria::setXP(int xp) {
    _xp = xp;
 }

unsigned int		AMateria::getXP() const {
	return (_xp);
}

void				AMateria::use(ICharacter& target) {
    target.getName();
    _xp += 10;

}
