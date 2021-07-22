#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : NinjaTrap(),  FragTrap()
{
    std::cout << GREEN "SuperTrap " << _name << " ready to take over the world " DEFAULT<< std::endl;
    _name = name;
    _hitPoints = FragTrap::getXP();
    std::cout << "hitpoints = " << _hitPoints << std::endl;
    _maxHitPoints = FragTrap::getXP();
    std::cout << "maxHitPoints = " << _maxHitPoints << std::endl;
    _energyPoints = NinjaTrap::getEPoints();
    std::cout << "energyPoints = " << _energyPoints << std::endl;
    _maxEnergyPoints = NinjaTrap::getMaxPoints();
    std::cout << "maxEnergyPoints = " << _maxEnergyPoints << std::endl;
    _level = 1;
    _meleeAttackDamage = NinjaTrap::getMelAtack();
    std::cout << "meleeAttackDamage = " <<_meleeAttackDamage << std::endl;
	_rangeAttackDamage = FragTrap::getRangeAttack();
    std::cout << "rangeAttackDamage  = " << _rangeAttackDamage  << std::endl;
	_armorDamageReduction = NinjaTrap::getArmor();
    std::cout << "armorDamageReduction = " << _armorDamageReduction << std::endl;
    	
	
}
SuperTrap::~SuperTrap()
{
     std::cout << YELLOW "SuperTrap " << _name << " Took over the world and died of happiness" DEFAULT<< std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &toCopy) {
    std::cout << "Copy constructor called" << std::endl;
   this->operator=(toCopy);
}

SuperTrap &SuperTrap::operator= (const SuperTrap &toCopy) {
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
