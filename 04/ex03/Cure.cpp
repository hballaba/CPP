#include "Cure.hpp"

Cure::Cure() {
    _name = "cure";
    AMateria::setType("cure");
}

Cure::~Cure() {

}

Cure::Cure(Cure const & toCopy) {
    this->_name = toCopy._name;
}

Cure & Cure::operator = (Cure const & toCopy) {
    this->_name = toCopy._name;
    return (*this);
}

void            Cure::use(ICharacter& character) {
    std::cout << "* heals " << character.getName() << "'s wounds *" << std::endl;
}

std::string     Cure::getName() const {
    return (_name);
}

AMateria * 			Cure::clone() const {
    AMateria *AM = new Cure();
 	AM->setXP(getXP());
    AM->setType(getName());
    return (AM);
}