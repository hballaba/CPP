#include "PowerFist.hpp"
#include "AWeapon.hpp"

PowerFist::PowerFist() : AWeapon() {
    _name = "Power Fist";
    _damage = 50;
    _apcost = 8;
}

PowerFist::~PowerFist() {

}

PowerFist::PowerFist(PowerFist const & toCopy) {
    this->operator = (toCopy);
}

void        PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist &PowerFist::operator = (PowerFist const & toCopy) {
    this->_name = toCopy._name;
    this->_damage = toCopy._damage;
    this->_apcost = toCopy._apcost;
    return(*this);
}
