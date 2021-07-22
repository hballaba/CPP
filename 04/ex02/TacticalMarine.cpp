#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine () {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & toCopy) {
     this->operator = (toCopy);
}

TacticalMarine & TacticalMarine::operator = (TacticalMarine const & toCopy) {
    this->i = toCopy.i;
    return (*this);
}

void    TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT!" << std::endl;
}

void    TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with a bolter *" << std::endl;
}
void     TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine*  TacticalMarine::clone() const {
    ISpaceMarine* TT = new TacticalMarine;
    return (TT);
}