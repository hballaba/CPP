#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {

}

Sorcerer::Sorcerer(std::string name, std::string title) {
    _name = name;
    _title = title;
    std::cout << _name << ", " << _title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
std::cout << _name << ", " << _title \
<< " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &toCopy) {
    this->operator = (toCopy);
}

Sorcerer &Sorcerer::operator= (const Sorcerer &toCopy) {
    this->_name = toCopy._name;
    this->_title = toCopy._title;
    return (*this);
}

std::string Sorcerer::getName() const {
    return (_name);
}

std::string Sorcerer::getTitle() const {
    return (_title);
}

void        Sorcerer::setName(std::string name) {
    _name = name;
}

void        Sorcerer::setTitle(std::string title) {
    _title = title;
}

std::string Sorcerer::getIntroduce() const {
    std::string introduce;
    introduce = "I am " + _name + ", " + _title + ", and I like ponies!";
    return (introduce);
}

void	Sorcerer::polymorph(Victim const &vic) const {
    vic.getPolymorphed();
}

std::ostream & operator << (std::ostream& stream, const Sorcerer& sor) {
    stream << sor.getIntroduce() << std::endl;
    return (stream);
}
