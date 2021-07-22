#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy() {
    _hp = 170;
    _type = "Super Mutant";
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & toCopy) {
    this->operator = (toCopy);
}

SuperMutant & SuperMutant::operator = (SuperMutant const & toCopy) {
    this->_hp = toCopy._hp;
    this->_type = toCopy._type;
    return (*this);
}

    void       SuperMutant::takeDamage(int damage) {
        if (_hp <= damage - 3)
            _hp = 0;
        else 
            _hp -= damage - 3;
    }

