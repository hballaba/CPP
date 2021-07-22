#include "AWeapon.hpp"

AWeapon::AWeapon () {

}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
    _name = name;
    _apcost = apcost;
    _damage = damage;
}

AWeapon::~AWeapon () {
    
}

AWeapon::AWeapon (const AWeapon & toCopy) {
    this->operator = (toCopy);
}

AWeapon & AWeapon::operator = (const AWeapon & toCopy) {
    this->_apcost = toCopy._apcost;
    this->_damage = toCopy._damage;
    this->_name = toCopy._name;
    return (*this);
}

std::string AWeapon::getName() const {
    return(_name);
}

int         AWeapon::getAPCost () const {
    return(_apcost);
}

int         AWeapon::getDamage () const {
    return(_damage);
}
