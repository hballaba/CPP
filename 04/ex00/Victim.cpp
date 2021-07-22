#include "Victim.hpp"

Victim::Victim() {

}

Victim::Victim(std::string name) {
    _name = name;
     std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim() {
std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &toCopy) {
    this->operator = (toCopy);
}

Victim &Victim::operator= (const Victim &toCopy) {
    this->_name = toCopy._name;
    return (*this);
}

std::string Victim::getName() const {
    return (_name);
}

void        Victim::setName(std::string name) {
    _name = name;
}

std::string Victim::getIntroduce() const {
    std::string introduce;
    introduce = "I'm " + _name + " and I like otters!";
    return (introduce);
}

void        Victim::getPolymorphed() const {
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator << (std::ostream& stream, const Victim& sor) {
    stream << sor.getIntroduce() << std::endl;
    return (stream);
}
