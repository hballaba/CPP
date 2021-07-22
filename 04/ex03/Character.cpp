#include "Character.hpp"

class Amateria;

Character::Character() {

}

Character::Character(std::string name) {
    _name = name;
    _size = 0;
}

Character::~Character() {
   
}

Character::Character(Character const & toCopy) {
    this->_name = toCopy._name;
    this->_size = toCopy._size;
    this->AM[0] = toCopy.AM[0];
    this->AM[1] = toCopy.AM[1];
    this->AM[2] = toCopy.AM[2];
    this->AM[3] = toCopy.AM[3];

}

Character   & Character::operator = (Character const & toCopy) {
    this->_name = toCopy._name;
    this->_size = toCopy._size;
    this->AM[0] = toCopy.AM[0];
    this->AM[1] = toCopy.AM[1];
    this->AM[2] = toCopy.AM[2];
    this->AM[3] = toCopy.AM[3];
    return (*this);
}

std::string const & Character::getName() const {
    return (_name);
}

void                Character::equip(AMateria* m) {
    if (!m) {
		std::cout << "Metod is not trained and slot not added" << std::endl;
	}

	else if (this->_size == 4)
        std::cout << "Slot for equip is full!" << std::endl;
    else {
        this->AM[this->_size] = m;
        this->_size++;
    }
}    

void                Character::unequip(int idx) {
    this->AM[idx] = nullptr;

}
void                Character::use(int idx, ICharacter& target) {
    if (idx >= _size) {
        std::cout << "Slot " << idx << " is empty!" << std::endl;
        return;
    }
    AM[idx]->use(target);
}

int                 Character::getSize() {
    return(_size);
}

