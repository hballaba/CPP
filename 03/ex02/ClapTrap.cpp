#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 100;
    _maxEnergyPoints = 100;
    _level = 1;
    _meleeAttackDamage = 30;
	_rangeAttackDamage = 20;
	_armorDamageReduction = 5;
    std::cout << GREEN "Default ClapTrap is parent " DEFAULT<< std::endl;
}

ClapTrap::~ClapTrap()
{
     std::cout << YELLOW "ClapTrap ceased to exist " DEFAULT<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy) {
    std::cout << "Copy constructor called" << std::endl;
   this->operator=(toCopy);
}

ClapTrap &ClapTrap::operator= (const ClapTrap &toCopy) {
    std::cout << "Assignation operator called" << std::endl;
    this->_name = toCopy._name;
	this->_hitPoints = toCopy._hitPoints;
	this->_maxHitPoints = toCopy._maxHitPoints;
	this->_energyPoints = toCopy._energyPoints;
	this->_maxEnergyPoints = toCopy._maxEnergyPoints;
	this->_level = toCopy._level;
	this->_meleeAttackDamage = toCopy._meleeAttackDamage;
	this->_rangeAttackDamage = toCopy._rangeAttackDamage;
	this->_armorDamageReduction = toCopy._armorDamageReduction;
	return (*this);
}


int		ClapTrap::rangedAttack(std::string const & target) {
    int damages;
	damages = this->_rangeAttackDamage - this->_armorDamageReduction;
	if (damages < 0)
		damages = 0;
	std::cout << this->_name << " attacks " << target \
    << " at range, causing " << damages << " points of damage!" << std::endl;
	return (damages);
}

int		ClapTrap::meleeAttack(std::string const & target) {
    int damage;
	damage = this->_meleeAttackDamage - this->_armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << this->_name <<  " attacks " << target \
    << " at melle, causing " << damage << " points of damage!" << std::endl;
	return (damage);
}

void		ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints < (int)amount) {
		_hitPoints = 0;	
		std::cout << _name << " take fatal damage  " << std::endl;
	}
	else {
		std::cout << _name << " take damage " << amount << " points" << std::endl;
		this->_hitPoints = _hitPoints - (int)amount;
	}
}

void		ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints + (int)amount >= _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else
		_hitPoints = _hitPoints + amount;
    std::cout << _name << " be repaired by " << amount << " points and healf = " << _hitPoints << " XP" << std::endl;
}
