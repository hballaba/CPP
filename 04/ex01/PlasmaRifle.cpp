#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon() {
    _name = "Plasma Rifle";
    _damage = 21;
    _apcost = 5;   
}

PlasmaRifle::~PlasmaRifle() {

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & toCopy) {
    this->operator = (toCopy);
}

 void   PlasmaRifle::attack() const {
    
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
 }

PlasmaRifle &PlasmaRifle::operator = (PlasmaRifle const & toCopy) {
    this->_name = toCopy._name;
    this->_damage = toCopy._damage;
    this->_apcost = toCopy._apcost;
    
    return(*this);
}
