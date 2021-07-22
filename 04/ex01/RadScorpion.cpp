#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy() {
    _hp = 80;
    _type = "RadScorpion";
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & toCopy) {
    this->operator = (toCopy);
}

RadScorpion & RadScorpion::operator = (RadScorpion const & toCopy) {
    this->_hp = toCopy._hp;
    this->_type = toCopy._type;
    return (*this);
}