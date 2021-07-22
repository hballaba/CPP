#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap()
{
    this->_name = name;
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    _level = 1;
    this->_meleeAttackDamage = 60;
	this->_rangeAttackDamage = 5;
	this->_armorDamageReduction = 0;
	
	std::cout << GREEN "NinjaTrap " << _name << " got a black belt " DEFAULT<< std::endl;
}

NinjaTrap::NinjaTrap() : ClapTrap()
{
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    _level = 1;
    this->_meleeAttackDamage = 60;
	this->_armorDamageReduction = 0;
	
	std::cout << GREEN "NinjaTrap " << " got a black belt " DEFAULT<< std::endl;
}

NinjaTrap::~NinjaTrap()
{
     std::cout << YELLOW "NinjaTrap " << _name << " makes hara-kiri" DEFAULT<< std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &toCopy) {
    std::cout << "Copy constructor called" << std::endl;
   this->operator=(toCopy);
}

NinjaTrap &NinjaTrap::operator= (const NinjaTrap &toCopy) {
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

std::string 	NinjaTrap::getName() {
	return(this->_name);
}

int  NinjaTrap::getXP() {
	return(this->_hitPoints);
}

int  NinjaTrap::getArmor() {
	return(this->_armorDamageReduction);
}

void NinjaTrap::setXP(int xp) {
	this->_hitPoints = xp;
}

int  NinjaTrap::getMaxXP() {
	return(this->_maxHitPoints);
}

int  NinjaTrap::getEPoints() {
	return(this->_energyPoints);
}

int  NinjaTrap::getMaxPoints() {
	return(this->_maxEnergyPoints);
}

int  NinjaTrap::getMelAtack() {
	return(this->_meleeAttackDamage);
}

int    NinjaTrap::ninjaShoebox(FragTrap &frag) {
    int damage;
    damage = 25 - frag.getArmor();
	if (damage < 0)
		damage = 0;
    std::cout << "Ninja " << this->_name << " drunken monkey strikes " << frag.getName() <<\
    " and causing " << damage << " points of damage!" << std::endl;
    if (frag.getXP() <= damage) {
        frag.setXP(0);
         std::cout << "FR4G-TP " << frag.getName() << " defeated" << std::endl;
    }
    else {
        frag.setXP(frag.getXP() - damage);
        std::cout << "FR4G-TP " << frag.getName() << " left " << frag.getXP() << " XP" << std::endl;
    }
    return (damage);
}

int		NinjaTrap::ninjaShoebox(ScavTrap &scav) {
    int damage;
    damage = 45 - scav.getArmor();
	if (damage < 0)
		damage = 0;
    std::cout << "Ninja " << this->_name << " crazy bagamol strikes " << scav.getName() <<\
    " and causing " << damage << " points of damage!" << std::endl;
    if (scav.getXP() <= damage) {
        scav.setXP(0);
         std::cout << "Scav " << scav.getName() << " defeated" << std::endl;
    }
    else {
        scav.setXP(scav.getXP() - damage);
        std::cout << "Scav " << scav.getName() << " left " << scav.getXP() << " XP" << std::endl;
    }
    return (damage);
 }

int		NinjaTrap::ninjaShoebox(NinjaTrap &ninja) {
    int damage;
    damage = 65 - ninja.getArmor();
	if (damage < 0)
		damage = 0;
    std::cout << "Ninja " << this->_name << " stab in the back " << ninja.getName() <<\
    " and causing " << damage << " points of damage!" << std::endl;
    if (ninja.getXP() <= damage) {
        ninja.setXP(0);
         std::cout << "Ninja " << ninja.getName() << " defeated" << std::endl;
    }
    else {
        ninja.setXP(ninja.getXP() - damage);
        std::cout << "Ninja" << ninja.getName() << " left " << ninja.getXP() << " XP" << std::endl;
    }
    return (damage);
 }