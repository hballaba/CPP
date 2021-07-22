#include "Character.hpp"

Character::Character() {

}

Character::Character(std::string const & name) {
   this->_names = name;
   this->_AP = 40;
   this->_weapon = nullptr;
   flagWep = 0;
}

Character::~Character() {

}

Character::Character(Character const & toCopy) {
    this->operator = (toCopy);
    
}

Character & Character::operator = (Character const & toCopy) {
    this->_names = toCopy._names;
    this->_AP = toCopy._AP;
    this->_weapon = toCopy._weapon;
    return (*this);
}

std::string Character::getName() const {
    return (_names);
}

int         Character::getAP() const {
    return (_AP);
}

void        Character::recoverAP() {
    if (this->_AP >= 30)
        this->_AP = 40;
    else
        this->_AP += 10;
}

 std::string    Character::getWeapon() const {
     std::string nameWeapon = _weapon->getName();
     return(nameWeapon);
 }

void        Character::equip(AWeapon *weapon)
{
    _weapon = weapon;
    flagWep = 1;
}

void        Character::attack(Enemy *enemy) {
    if (enemy != nullptr && enemy->getHP() > 0) {
        if (this->flagWep == 0)
            std::cout << "No weapon to attack" << std::endl; 
        else if (this->_AP < 8)
            std::cout << "AP not enough to attack" << std::endl;
        else { 
            std::cout << this->getName() << " attacks " << enemy->getType() << " with a " << this->getWeapon() << std::endl;
            this->_weapon->attack();
            this->_AP -= _weapon->getAPCost();
            enemy->takeDamage(_weapon->getDamage());
        }
        if (enemy->getHP() <= 0) {
            delete enemy;
            enemy = nullptr;
        }
    }
    else {
        std::cout << "Enemy is died" << std::endl;
        return ;
    }
}

std::ostream & operator << (std::ostream & stream, Character const & ch) {
    if (ch.flagWep != 0)
        stream << ch.getName() << " has " << ch.getAP() << " AP and wields a " << ch.getWeapon() << std::endl;
    else
        stream << ch.getName() << " has " << ch.getAP() << " AP and is unarmed" << std::endl;
    return (stream);
}   
