#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hitPoints = 100;
    _maxHitPoints = 100;
    _energyPoints = 100;
    _maxEnergyPoints = 100;
    _level = 1;
    _meleeAttackDamage = 30;
	_rangeAttackDamage = 20;
	_armorDamageReduction = 5;
	_damage = 0;
	
	std::cout <<  "FragTrap " << name << " is born " << std::endl;
}
FragTrap::~FragTrap()
{
     std::cout << "FragTrap " << _name << " is died " << std::endl;
}

FragTrap::FragTrap(const FragTrap &toCopy) {
    std::cout << "Copy constructor called" << std::endl;
   this->operator=(toCopy);
}

FragTrap &FragTrap::operator= (const FragTrap &toCopy) {
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
	this->_damage = toCopy._damage;
	return (*this);
}

int		crazyAttack(std::string const & target, int &_armorDamageReduction, std::string _name), \
		superCrazyAttack(std::string const & target, int &_armorDamageReduction, std::string _name), \
		megaCrazyAttack(std::string const & target, int &_armorDamageReduction, std::string _name), \
		powerCrazyAttack(std::string const & target, int &_armorDamageReduction, std::string _name), \
		simpleCrazyAttack(std::string const & target, int &_armorDamageReduction, std::string _name);

int		(*options []) (std::string const & target, int &_armorDamageReduction, std::string _name) = {
		crazyAttack,
		superCrazyAttack,
		megaCrazyAttack,
		powerCrazyAttack,
		simpleCrazyAttack};

int 	crazyAttack(std::string const & target, int &_armorDamageReduction, std::string _name) {

    int damage = 15 - _armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "FR4G-TP " << _name << "attacks " << target \
    << " crazy attack, causing " << damage << " points of damage!" << std::endl;
	return (damage);
}

int 	superCrazyAttack(std::string const & target, int &_armorDamageReduction, std::string _name) {
    
    int damage;
	damage = 25 - _armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "FR4G-TP " << _name << " attacks " << target \
    << " super crazy attacks, causing " << damage << " points of damage!" << std::endl;
	return (damage);
}

int 	megaCrazyAttack(std::string const & target, int &_armorDamageReduction, std::string _name) {
    
    int damage = 35 - _armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "FR4G-TP " << _name << " attacks " << target \
    << " mega crazy attacks, causing " << damage << " points of damage!" << std::endl;
	return (damage);
 }

 int 	powerCrazyAttack(std::string const & target, int &_armorDamageReduction, std::string _name) {
    
    int damage = 55 - _armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "FR4G-TP " << _name << " attacks " << target \
    << " power crazy attacks, causing " << damage << " points of damage!" << std::endl;
	return (damage);
 }

 int 	simpleCrazyAttack(std::string const & target, int &_armorDamageReduction, std::string _name) {
    
    int damage = 5 - _armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "FR4G-TP " << _name <<  " attack " << target \
    << " simple crazy, causing " << damage << " points of damage!" << std::endl;
	return (damage);
 }

int	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	int random;
	int damage;
	
	if (this->_energyPoints < 25)
	{
			std::cout << "Not enough energy to attack" << std::endl;
			return (0);
	}
	this->_energyPoints = this->_energyPoints - 25;
	std::srand(std::time(NULL));
	random = std::rand() % 5;
	damage = (*options[random])(target, this->_armorDamageReduction, this->_name);
	return (damage);
}


int		FragTrap::rangedAttack(std::string const & target) {
    int damages;
	damages = this->_rangeAttackDamage - this->_armorDamageReduction;
	if (damages < 0)
		damages = 0;
	std::cout << "FR4G-TP " << this->_name << " attacks " << target \
    << " at range, causing " << damages << " points of damage!" << std::endl;
	return (damages);
}

int		FragTrap::meleeAttack(std::string const & target) {
    int damage;
	damage = this->_meleeAttackDamage - this->_armorDamageReduction;
	if (damage < 0)
		damage = 0;
	std::cout << "FR4G-TP " << this->_name <<  " attacks " << target \
    << " at melle, causing " << damage << " points of damage!" << std::endl;
	return (damage);
}

void		FragTrap::takeDamage(unsigned int amount) {
	if (_hitPoints < (int)amount) {
		_hitPoints = 0;	
		std::cout << "FR4G-TP " << _name << " take fatal damage  " << std::endl;
	}
	else {
		std::cout << "FR4G-TP " << _name << " take damage " << amount << " points" << std::endl;
		this->_hitPoints = _hitPoints - (int)amount;
	}
}

void		FragTrap::beRepaired(unsigned int amount) {
	if (_hitPoints + (int)amount >= _maxHitPoints)
		_hitPoints = _maxHitPoints;
	else
		_hitPoints = _hitPoints + amount;
    std::cout << "FR4G-TP " << _name << " be repaired by " << amount << " points and healf = " << _hitPoints << " XP" << std::endl;
}


