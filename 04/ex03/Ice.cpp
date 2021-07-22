#include "Ice.hpp"

Ice::Ice() {
    _name = "ice";
    AMateria::setType("ice");
}

Ice::~Ice() {

}

Ice::Ice(Ice const & toCopy) {
    this->_name = toCopy._name;
}

Ice & Ice::operator = (Ice const & toCopy) {
    this->_name = toCopy._name;
    return (*this);
}

void             Ice::use(ICharacter& character) {
    std::cout << "* shoots an ice bolt at " << character.getName() << " *" << std::endl;
}

std::string     Ice::getName() const {
    return (_name);
}

AMateria * 			Ice::clone() const {
    AMateria *AM = new Ice();
 	AM->setXP(getXP());
    AM->setType(getName());
    return (AM);
}