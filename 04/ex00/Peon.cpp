#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon() {

}

Peon::Peon(std::string name): Victim(name) {
    _name = name;
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &toCopy) {
    this->operator = (toCopy);
}

Peon &Peon::operator= (const Peon &toCopy) {
    this->_name = toCopy._name;
    return (*this);
}


void       Peon::getPolymorphed() const {
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

std::ostream & operator << (std::ostream& stream, const Peon& sor) {
    stream << sor.getIntroduce() << std::endl;
    return (stream);
}
